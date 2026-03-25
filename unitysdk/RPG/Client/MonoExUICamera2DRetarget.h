#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class MonoExUICamera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CFEA00)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_INIT_OFFSET UNITYSDK_OFFSET(0x9CFE7F0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CFEAF0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CONVERTSCALEFROMPOSZ_OFFSET UNITYSDK_OFFSET(0x9CFEEF0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFEFD0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x9CFEB40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera2DRetarget_TypeDefinitionIndex = 59828;

	class MonoExUICamera2DRetarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoExUICamera* _Camera; // 0x18
		::UnityEngine::RectTransform* _2DContent; // 0x20
		::System::Single _2DContentMinScale; // 0x28
		::System::Single _2DContentMaxScale; // 0x2C
		::UnityEngine::Transform* _AnchorPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MonoExUICamera* camera, ::UnityEngine::RectTransform* content2D, ::System::Single content2DMinScale, ::System::Single content2DMaxScale, ::UnityEngine::Transform* anchorPoint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_INIT_OFFSET))(this, camera, content2D, content2DMinScale, content2DMaxScale, anchorPoint);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void _UpdatePosition(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET__UPDATEPOSITION_OFFSET))(this, brain);
		}

		::System::Single _ConvertScaleFromPosZ(::System::Single minZ, ::System::Single maxZ, ::System::Single minScale, ::System::Single maxScale, ::System::Single z)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CONVERTSCALEFROMPOSZ_OFFSET))(this, minZ, maxZ, minScale, maxScale, z);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class MonoExUICamera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC10FCF0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_INIT_OFFSET UNITYSDK_OFFSET(0xC10FAE0)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC10FE10)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CONVERTSCALEFROMPOSZ_OFFSET UNITYSDK_OFFSET(0xC110240)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xC110320)
#define RPG_CLIENT_MONOEXUICAMERA2DRETARGET__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xC10FE60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera2DRetarget_TypeDefinitionIndex = 68176;

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

		::System::Void Init(::RPG::Client::MonoExUICamera* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void _UpdatePosition(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET__UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Single _ConvertScaleFromPosZ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2DRETARGET__CONVERTSCALEFROMPOSZ_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}

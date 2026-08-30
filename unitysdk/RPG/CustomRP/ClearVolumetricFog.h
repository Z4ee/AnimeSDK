#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CLEARVOLUMETRICFOG_START_OFFSET UNITYSDK_OFFSET(0x192C7AC0)
#define RPG_CUSTOMRP_CLEARVOLUMETRICFOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x192C7B70)
#define RPG_CUSTOMRP_CLEARVOLUMETRICFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x192C80C0)
#define RPG_CUSTOMRP_CLEARVOLUMETRICFOG__DOCLEAR_OFFSET UNITYSDK_OFFSET(0x192C7FA0)
#define RPG_CUSTOMRP_CLEARVOLUMETRICFOG__RECOVER_OFFSET UNITYSDK_OFFSET(0x192C7EA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ClearVolumetricFog_TypeDefinitionIndex = 37043;

	class ClearVolumetricFog : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DistanceThreshold; // 0x18
		::System::Boolean _isFirstFrame; // 0x1C
		::System::Int32 _recoverAfterFrames; // 0x20
		::System::Single _temporalAccumulationFactor; // 0x24
		::UnityEngine::Vector3 _prevCameraPos; // 0x28
		::UnityEngine::Transform* _mainCameraTrans; // 0x38
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLEARVOLUMETRICFOG__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLEARVOLUMETRICFOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLEARVOLUMETRICFOG_UPDATE_OFFSET))(this);
		}

		::System::Void _DoClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLEARVOLUMETRICFOG__DOCLEAR_OFFSET))(this);
		}

		::System::Void _Recover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLEARVOLUMETRICFOG__RECOVER_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB4EDE20)
#define RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB4EE0D0)
#define RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_START_OFFSET UNITYSDK_OFFSET(0xB4EDA10)
#define RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB4EDB00)
#define RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4EE2C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MonoEffectLoginCameraControl_TypeDefinitionIndex = 47844;

	class MonoEffectLoginCameraControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* cam; // 0x18
		::System::Single blurAmount; // 0x20
		::System::Single blurStart; // 0x24
		::System::Single blurFeather; // 0x28
		::System::Single blurCenterX; // 0x2C
		::System::Single blurCenterY; // 0x30
		::System::Int32 blurIteration; // 0x34
		::System::Boolean Field_5_7; // 0x38
		::UnityEngine::Vector3 Field_5_8; // 0x3C
		::UnityEngine::Quaternion Field_5_9; // 0x48
		::System::Single Field_5_10; // 0x58
		::System::Int32 Field_5_11; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MONOEFFECTLOGINCAMERACONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}

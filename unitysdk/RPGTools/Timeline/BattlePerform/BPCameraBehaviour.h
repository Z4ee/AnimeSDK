#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline::BattlePerform { class BPCameraConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB898B40)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0xB898B60)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_41B039A4E2A7F091_OFFSET UNITYSDK_OFFSET(0xB8992B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_434DDC23F222168D_OFFSET UNITYSDK_OFFSET(0xB899090)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB8993D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB898B50)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8993C0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCameraBehaviour_TypeDefinitionIndex = 45477;

	class BPCameraBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCameraConfig* _Config_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCameraConfig* get_Config()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::BattlePerform::BPCameraConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCameraConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void Method_3_106289055FB804CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_106289055FB804CE_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_3_434DDC23F222168D(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_434DDC23F222168D_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Method_3_41B039A4E2A7F091(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_41B039A4E2A7F091_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}

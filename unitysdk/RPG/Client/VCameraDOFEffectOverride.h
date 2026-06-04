#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DOFMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xCC0D600)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xCC0D4B0)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0xCC0D990)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC0D3E0)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0xCC0D9E0)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCC0D2E0)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0xCC0D430)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC0DA30)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraDOFEffectOverride_TypeDefinitionIndex = 63906;

	class VCameraDOFEffectOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableDOF; // 0x18
		::RPG::CustomRP::RPGDepthOfField_CoCMethod CoCMethod; // 0x1C
		::RPG::CustomRP::RPGDepthOfField_DOFMethod DOFMethod; // 0x20
		::System::Single FocusDistance; // 0x24
		::System::Single fStop; // 0x28
		::System::Single SensorWidth; // 0x2C
		::System::Single NearFocalRegion; // 0x30
		::System::Single FarFocalRegion; // 0x34
		::System::Single NearTransitionRegion; // 0x38
		::System::Single FarTransitionRegion; // 0x3C
		::RPG::CustomRP::RPGDepthOfField* Field_5_10; // 0x40
		::UnityEngine::GameObject* Field_5_11; // 0x48
		::Cinemachine::CinemachineVirtualCamera* Field_5_12; // 0x50
		::System::Boolean Field_5_13; // 0x58
		::System::Boolean Field_5_14; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_UPDATE_OFFSET))(this);
		}

		::System::Void OnActiveVCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONACTIVEVCAMERA_OFFSET))(this);
		}

		::System::Void OnDisactiveVCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISACTIVEVCAMERA_OFFSET))(this);
		}

		::System::Void Method_5_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}
	};
}

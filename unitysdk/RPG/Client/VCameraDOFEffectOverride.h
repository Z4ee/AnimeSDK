#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DOFMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xE3F8C60)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xE3F8B10)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0xE3F9340)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3F8A40)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONDISACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0xE3F9390)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3F8940)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE3F8A90)
#define RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xE3F93E0)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraDOFEffectOverride_TypeDefinitionIndex = 68289;

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
		::RPG::CustomRP::RPGDepthOfField* LIJIAFPPIDJ; // 0x40
		::UnityEngine::GameObject* CPBAACCBCMI; // 0x48
		::Cinemachine::CinemachineVirtualCamera* OAFAPMNFOLF; // 0x50
		::System::Boolean HAFOABEMBBG; // 0x58
		::System::Boolean DGDJEKKJGLG; // 0x59

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

		::System::Void Method_5_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERADOFEFFECTOVERRIDE_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}
	};
}

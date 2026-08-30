#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"

namespace UnityEngine { class Object; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE310D90)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchRampColorData_TypeDefinitionIndex = 73963;

	class SwitchRampColorData : public ::System::Object
	{
	public:
		::UnityEngine::UI::ColorMode ColorMode; // 0x10
		::UnityEngine::Color RampColorLeft; // 0x14
		::UnityEngine::Color RampColorRight; // 0x24
		::UnityEngine::Color RampColorLB; // 0x34
		::UnityEngine::Color RampColorRB; // 0x44
		::System::Single RampRotation; // 0x54
		::System::Single RampScale; // 0x58
		::System::Single RampOffset; // 0x5C
		::UnityEngine::Object* Target; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORDATA__CTOR_OFFSET))(this);
		}
	};
}

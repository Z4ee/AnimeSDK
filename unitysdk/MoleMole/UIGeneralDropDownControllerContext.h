#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA9A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownControllerContext_TypeDefinitionIndex = 77517;

	class UIGeneralDropDownControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* selects; // 0x28
		::System::Action_2<::System::Int32, ::System::Boolean>* OnValueChange; // 0x30
		::System::Action* OnClose; // 0x38
		::UnityEngine::Vector2 cellSize; // 0x40
		::System::Boolean useLocalYHeight; // 0x48
		::System::Boolean inverseDropDirection; // 0x49
		::System::Boolean IsAutoCloseWhenLayoutPlatformChanged; // 0x4A
		::System::Boolean AutoClose; // 0x4B
		::System::Int32 maxHeight; // 0x4C
		::MoleMole::InputLogicEventType closeEvent; // 0x50
		::System::Boolean isUp; // 0x54
		::System::Boolean autoDirection; // 0x55
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x56
		::UnityEngine::Vector2 positionOffset; // 0x58
		::Enum_3_0A43EA4B15EC3408 widgetType; // 0x60
		::System::Int32 defaultSelectIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

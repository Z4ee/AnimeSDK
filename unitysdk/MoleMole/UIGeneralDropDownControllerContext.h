#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCE710)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownControllerContext_TypeDefinitionIndex = 61816;

	class UIGeneralDropDownControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Action_2<::System::Int32, ::System::Boolean>* OnValueChange; // 0x30
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* selects; // 0x38
		::System::Int32 maxHeight; // 0x40
		::UnityEngine::Vector2 positionOffset; // 0x44
		::UnityEngine::Vector2 cellSize; // 0x4C
		::Enum_3_0A43EA4B15EC3408 widgetType; // 0x54
		::MoleMole::InputLogicEventType closeEvent; // 0x58
		::System::Boolean isUp; // 0x5C
		::System::Boolean inverseDropDirection; // 0x5D
		::System::Boolean useLocalYHeight; // 0x5E
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x5F
		::System::Boolean AutoClose; // 0x60
		::System::Boolean IsAutoCloseWhenLayoutPlatformChanged; // 0x61
		::System::Boolean autoDirection; // 0x62
		::System::Int32 defaultSelectIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class UIWidgetGroup;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1DEA7AD9123A324A_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13FC26C0)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_PanelData_TypeDefinitionIndex = 43269;

class Class_2_1DEA7AD9123A324A_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Func_2<::UIWidgetGroup*, ::UnityEngine::RectTransform*>* CreateAvatarGroup; // 0x28
	::System::Action* OnReset; // 0x30
	::System::Int32 SelectId; // 0x38
	::System::Int32 InitTab; // 0x3C
	::System::Boolean IsOnlyOne; // 0x40
	::System::Boolean OpenSelectBuddy; // 0x41
	::System::Int32 LayerIndex; // 0x44
	::System::Int32 ZoneID; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_PANELDATA__CTOR_OFFSET))(this);
	}
};

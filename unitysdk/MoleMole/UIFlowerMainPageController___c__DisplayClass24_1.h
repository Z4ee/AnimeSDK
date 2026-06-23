#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFlowerMainPageController___c__DisplayClass24_0; }
namespace System { class Action; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A81DB0)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__5_OFFSET UNITYSDK_OFFSET(0x16A81DC0)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__6_OFFSET UNITYSDK_OFFSET(0x16A81F70)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__7_OFFSET UNITYSDK_OFFSET(0x16A82490)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass24_1_TypeDefinitionIndex = 67750;

	class UIFlowerMainPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::System::Action* onClose; // 0x10
		::System::Action* __9__7; // 0x18
		::MoleMole::UIFlowerMainPageController___c__DisplayClass24_0* CS___8__locals1; // 0x20
		::System::Action* __9__6; // 0x28
		::System::Int32 timelineID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__5_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__6_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__FINISHFLOWER_B__7_OFFSET))(this);
		}
	};
}

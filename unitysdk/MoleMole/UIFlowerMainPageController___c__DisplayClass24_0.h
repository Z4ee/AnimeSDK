#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace MoleMole { class UIFlowerMainPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183EE640)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET UNITYSDK_OFFSET(0x183EE650)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET UNITYSDK_OFFSET(0x183EEA80)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET UNITYSDK_OFFSET(0x183EEE00)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET UNITYSDK_OFFSET(0x183EEF90)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET UNITYSDK_OFFSET(0x183EEA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 79461;

	class UIFlowerMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::Action*>* openTimelineHandler; // 0x10
		::System::Action* __9__4; // 0x18
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* openResultDialogHandler; // 0x20
		::MoleMole::UIFlowerMainPageController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__1(::System::Int32 timelineID, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET))(this, timelineID, onClose);
		}

		::System::Void _FinishFlower_b__2(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__3(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET))(this, message);
		}
	};
}

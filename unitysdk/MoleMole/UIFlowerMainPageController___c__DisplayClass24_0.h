#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace MoleMole { class UIFlowerMainPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6C20)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET UNITYSDK_OFFSET(0x15EF6C30)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET UNITYSDK_OFFSET(0x15EF7000)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET UNITYSDK_OFFSET(0x15EF7380)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET UNITYSDK_OFFSET(0x15EF7510)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET UNITYSDK_OFFSET(0x15EF6FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 54411;

	class UIFlowerMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* openResultDialogHandler; // 0x10
		::MoleMole::UIFlowerMainPageController* __4__this; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Action_2<::System::Int32, ::System::Action*>* openTimelineHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__0(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__1(::System::Int32 timelineID, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET))(this, timelineID, onClose);
		}

		::System::Void _FinishFlower_b__2(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__3(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET))(this, message);
		}
	};
}

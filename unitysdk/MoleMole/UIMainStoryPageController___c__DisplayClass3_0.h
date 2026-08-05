#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageContext; }
namespace MoleMole { class UIMainStoryPageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168CE410)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_B__3_OFFSET UNITYSDK_OFFSET(0x168CE420)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_G__SHOWTAPEWITHNOPERFORMANCE_0_OFFSET UNITYSDK_OFFSET(0x168CE570)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_G__SHOWTAPEWITHPERFORMANCE_1_OFFSET UNITYSDK_OFFSET(0x168CE6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass3_0_TypeDefinitionIndex = 84577;

	class UIMainStoryPageController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::System::String* fadeIn; // 0x18
		::MoleMole::UIMainStoryPageContext* mainStoryPageContext; // 0x20
		::System::Int32 targetArchiveID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_B__3_OFFSET))(this);
		}

		::System::Void _OnShow_g__ShowTapeWithNoPerformance_0(::System::Boolean playAnim, ::System::Action* sceneTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_G__SHOWTAPEWITHNOPERFORMANCE_0_OFFSET))(this, playAnim, sceneTask);
		}

		::System::Void _OnShow_g__ShowTapeWithPerformance_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_G__SHOWTAPEWITHPERFORMANCE_1_OFFSET))(this);
		}
	};
}

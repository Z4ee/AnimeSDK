#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBIGCATEXCHANGESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13873470)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatExchangeSelectPopWindowController_Context_TypeDefinitionIndex = 81906;

	class UIActivityBigCatExchangeSelectPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList; // 0x28
		::System::Action* OnTakeReward; // 0x30
		::System::UInt32 taskId; // 0x38
		::System::UInt32 activityId; // 0x3C
		::System::Int32 defaultIndex; // 0x40
		::System::Boolean isWeapon; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATEXCHANGESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

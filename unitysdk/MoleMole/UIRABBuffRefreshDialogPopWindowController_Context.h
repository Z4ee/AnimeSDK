#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_77794C962ABD89A9;
class Class_2_F68C1397F46993E4;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBB8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshDialogPopWindowController_Context_TypeDefinitionIndex = 46305;

	class UIRABBuffRefreshDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F68C1397F46993E4* BuddyData; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ValidFactorType; // 0x30
		::Class_2_77794C962ABD89A9* FactorData; // 0x38
		::System::Action* OnConfirm; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F68C1397F46993E4;
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x152A8F40)
#define MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x152A8E80)
#define MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152A9030)
#define MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x152A9080)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshResultDialogPopWindowController_Context_TypeDefinitionIndex = 82585;

	class UIRABBuffRefreshResultDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F68C1397F46993E4* BuddyData; // 0x28
		::System::Action* OnConfirm; // 0x30
		::System::Int32 ItemId; // 0x38
		::System::Int32 FactorType; // 0x3C
		::System::Int32 FactorIndex; // 0x40
		::System::Int32 NewFactorId; // 0x44
		::System::Int32 OldFactorId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIRABBuffRefreshResultDialogPopWindowController_Context* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRABBuffRefreshResultDialogPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

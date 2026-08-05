#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4F9C1A2827CAB53.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class GeneralDetailWithTabContext_TabEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GENERALDETAILWITHTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1737B430)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralDetailWithTabContext_TypeDefinitionIndex = 60892;

	class GeneralDetailWithTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GeneralDetailWithTabContext_TabEntry*>* Tabs; // 0x28
		::System::Action* CancelBtnCb; // 0x30
		::System::Action* OkBtnCb; // 0x38
		::System::String* OkBtnText; // 0x40
		::System::Action* CloseCb; // 0x48
		::System::String* CancelBtnText; // 0x50
		::System::Int32 InitialTabIndex; // 0x58
		::Enum_3_B4F9C1A2827CAB53 OkBtnState; // 0x5C
		::Enum_3_B4F9C1A2827CAB53 CancelBtnState; // 0x60
		::System::Boolean ShowCancelBtn; // 0x64
		::System::Boolean ShowOkBtn; // 0x65
		::System::Boolean ShowClose; // 0x66

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILWITHTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

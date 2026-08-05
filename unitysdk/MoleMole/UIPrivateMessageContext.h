#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPRIVATEMESSAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18450D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageContext_TypeDefinitionIndex = 81069;

	class UIPrivateMessageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickClose; // 0x28
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>* selectUsers; // 0x30
		::System::Int32 SelectTabIdx; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

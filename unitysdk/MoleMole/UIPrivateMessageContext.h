#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPRIVATEMESSAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17891120)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageContext_TypeDefinitionIndex = 52822;

	class UIPrivateMessageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>* selectUsers; // 0x28
		::System::Action* OnClickClose; // 0x30
		::System::Int32 SelectTabIdx; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

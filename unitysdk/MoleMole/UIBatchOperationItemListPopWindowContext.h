#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_12BDE7300F0E061C;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBATCHOPERATIONITEMLISTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0AFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBatchOperationItemListPopWindowContext_TypeDefinitionIndex = 63516;

	class UIBatchOperationItemListPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_12BDE7300F0E061C*>* EquipItemList; // 0x28
		::System::Action_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* OnOKCallback; // 0x30
		::System::Int32 OptType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATCHOPERATIONITEMLISTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

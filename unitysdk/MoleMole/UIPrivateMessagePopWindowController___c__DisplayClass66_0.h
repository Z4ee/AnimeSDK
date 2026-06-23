#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB7B90)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__SORTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x16EB7BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c__DisplayClass66_0_TypeDefinitionIndex = 79490;

	class UIPrivateMessagePopWindowController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>* selectUsers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortList_b__0(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* a, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__SORTLIST_B__0_OFFSET))(this, a, b);
		}
	};
}

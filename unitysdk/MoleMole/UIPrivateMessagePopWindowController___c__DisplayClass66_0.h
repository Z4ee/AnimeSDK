#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E16340)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__SORTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x17E16350)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c__DisplayClass66_0_TypeDefinitionIndex = 48729;

	class UIPrivateMessagePopWindowController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>* selectUsers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortList_b__0(::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7* a, ::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*, ::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__SORTLIST_B__0_OFFSET))(this, a, b);
		}
	};
}

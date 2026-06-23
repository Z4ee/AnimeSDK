#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1696EB80)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SORTAVATARLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1696EB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 73733;

	class UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortAvatarList_b__0(::Class_2_1824EF69C8E376A3* a, ::Class_2_1824EF69C8E376A3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SORTAVATARLIST_B__0_OFFSET))(this, a, b);
		}
	};
}

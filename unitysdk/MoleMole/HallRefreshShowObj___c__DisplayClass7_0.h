#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_371D7DE9D8405613;
class Class_2_B7F42AAEE22538C5;
class Class_3_06B506F3349584D7;
namespace MoleMole { class HallRefreshShowObj; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15826F60)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_B__6_OFFSET UNITYSDK_OFFSET(0x15827130)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__ALLOCATELIST_4_OFFSET UNITYSDK_OFFSET(0x158271A0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGETIME_2_OFFSET UNITYSDK_OFFSET(0x15829600)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGE_1_OFFSET UNITYSDK_OFFSET(0x15827240)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__DEALLOCATELIST_5_OFFSET UNITYSDK_OFFSET(0x158297D0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__REGISTERAVATARSETPOSITION_0_OFFSET UNITYSDK_OFFSET(0x15826F70)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj___c__DisplayClass7_0_TypeDefinitionIndex = 84957;

	class HallRefreshShowObj___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* delList; // 0x10
		::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* interactList; // 0x18
		::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* showList; // 0x20
		::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* addList; // 0x28
		::Class_2_371D7DE9D8405613* localHallScene; // 0x30
		::Class_2_B7F42AAEE22538C5* hallScene; // 0x38
		::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* hideList; // 0x40
		::MoleMole::HallRefreshShowObj* __4__this; // 0x48
		::System::Boolean timeChanged; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_g__RegisterAvatarSetPosition_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__REGISTERAVATARSETPOSITION_0_OFFSET))(this);
		}

		::System::Void _OnProcess_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_B__6_OFFSET))(this);
		}

		::System::Void _OnProcess_g__Change_1(::System::Boolean isNeedLoading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGE_1_OFFSET))(this, isNeedLoading);
		}

		::System::Void _OnProcess_g__ChangeTime_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGETIME_2_OFFSET))(this);
		}

		::System::Void _OnProcess_g__AllocateList_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__ALLOCATELIST_4_OFFSET))(this);
		}

		::System::Void _OnProcess_g__DeallocateList_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__DEALLOCATELIST_5_OFFSET))(this);
		}
	};
}

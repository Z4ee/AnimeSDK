#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_A0F414D2CF643E56_2;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1CB2FC90)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x1CB2FCB0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x1CB2FCD0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1CB2FCA0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x1CB2FCC0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x1CB2FCE0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2F710)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CB2F720)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellBossSelectData_TypeDefinitionIndex = 66918;

	class ChessRogueBoardCellBossSelectData : public ::Class_1_43BD383C98B4C0C5_176
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* _ToSelectList_k__BackingField; // 0x10
		::System::Boolean _IsSelected_k__BackingField; // 0x18
		::System::UInt32 _SelectedMonsterID_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_A0F414D2CF643E56_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _SyncExtraInfo(::Class_1_A0F414D2CF643E56_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET))(this);
		}

		::System::Void set_SelectedMonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* get_ToSelectList()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET))(this);
		}

		::System::Void set_ToSelectList(::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET))(this, a1);
		}
	};
}

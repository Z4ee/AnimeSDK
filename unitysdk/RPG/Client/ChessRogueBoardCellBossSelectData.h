#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_143.h"

class Class_1_E30585F0EAEFDF1E;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9FD50D0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x9FD50F0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x9FD5110)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9FD50E0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x9FD5100)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x9FD5120)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD4D00)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9FD4D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellBossSelectData_TypeDefinitionIndex = 61627;

	class ChessRogueBoardCellBossSelectData : public ::Class_1_43BD383C98B4C0C5_143
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* _ToSelectList_k__BackingField; // 0x10
		::System::UInt32 _SelectedMonsterID_k__BackingField; // 0x18
		::System::Boolean _IsSelected_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_E30585F0EAEFDF1E* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET))(this, info);
		}

		::System::Void _SyncExtraInfo(::Class_1_E30585F0EAEFDF1E* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET))(this, info);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET))(this);
		}

		::System::Void set_SelectedMonsterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* get_ToSelectList()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET))(this);
		}

		::System::Void set_ToSelectList(::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET))(this, value);
		}
	};
}

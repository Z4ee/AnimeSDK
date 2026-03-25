#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_142.h"

class Class_1_2341347423DFDC46;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9367340)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x9367360)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x9367380)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9367350)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0x9367370)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0x9367390)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9366F50)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9366F60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellBossSelectData_TypeDefinitionIndex = 54439;

	class ChessRogueBoardCellBossSelectData : public ::Class_1_43BD383C98B4C0C5_142
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* _ToSelectList_k__BackingField; // 0x10
		::System::UInt32 _SelectedMonsterID_k__BackingField; // 0x18
		::System::Boolean _IsSelected_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_2341347423DFDC46* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2341347423DFDC46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__CTOR_OFFSET))(this, info);
		}

		::System::Void _SyncExtraInfo(::Class_1_2341347423DFDC46* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2341347423DFDC46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET))(this, info);
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

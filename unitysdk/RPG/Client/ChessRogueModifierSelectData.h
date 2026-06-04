#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB4A4ADDA7338C08_3;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB65A1B0)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB65A420)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_SELECTEDCELL_OFFSET UNITYSDK_OFFSET(0xB65A440)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_HASCELLCANSELECT_OFFSET UNITYSDK_OFFSET(0xB65A530)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_ISCELLCANSELECT_OFFSET UNITYSDK_OFFSET(0xB65A460)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB65A430)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_SELECTEDCELL_OFFSET UNITYSDK_OFFSET(0xB65A450)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB65A590)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModifierSelectData_TypeDefinitionIndex = 62607;

	class ChessRogueModifierSelectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedSelectCellIDList; // 0x10
		::System::UInt32 _SelectedCell_k__BackingField; // 0x18
		::System::Boolean _IsSelected_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedCell()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_SELECTEDCELL_OFFSET))(this);
		}

		::System::Void set_SelectedCell(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_SELECTEDCELL_OFFSET))(this, a1);
		}

		::System::Boolean IsCellCanSelect(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_ISCELLCANSELECT_OFFSET))(this, a1);
		}

		::System::Boolean HasCellCanSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_HASCELLCANSELECT_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueModifierSelectData* Create(::Class_1_FB4A4ADDA7338C08_3* a1)
		{
			return ((::RPG::Client::ChessRogueModifierSelectData*(*)(::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_CREATE_OFFSET))(a1);
		}
	};
}

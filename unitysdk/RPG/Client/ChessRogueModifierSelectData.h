#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_25220F245FE3CC2F_2;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9376170)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9376440)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_SELECTEDCELL_OFFSET UNITYSDK_OFFSET(0x9376460)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_HASCELLCANSELECT_OFFSET UNITYSDK_OFFSET(0x93764F0)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_ISCELLCANSELECT_OFFSET UNITYSDK_OFFSET(0x9376480)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9376450)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_SELECTEDCELL_OFFSET UNITYSDK_OFFSET(0x9376470)
#define RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9376550)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModifierSelectData_TypeDefinitionIndex = 54486;

	class ChessRogueModifierSelectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedSelectCellIDList; // 0x10
		::System::Boolean _IsSelected_k__BackingField; // 0x18
		::System::UInt32 _SelectedCell_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedCell()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_GET_SELECTEDCELL_OFFSET))(this);
		}

		::System::Void set_SelectedCell(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_SET_SELECTEDCELL_OFFSET))(this, value);
		}

		::System::Boolean IsCellCanSelect(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_ISCELLCANSELECT_OFFSET))(this, cellDataItem);
		}

		::System::Boolean HasCellCanSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_HASCELLCANSELECT_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueModifierSelectData* Create(::Class_1_25220F245FE3CC2F_2* proto)
		{
			return ((::RPG::Client::ChessRogueModifierSelectData*(*)(::Class_1_25220F245FE3CC2F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODIFIERSELECTDATA_CREATE_OFFSET))(proto);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueDLCAeonDimensionRow; }
namespace RPG::GameCore { class RogueDLCAeonTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_CLEARSYNCNEWTALENT_OFFSET UNITYSDK_OFFSET(0xCBA65D0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GETFIRSTUNSEENTALENTROWINDEX_OFFSET UNITYSDK_OFFSET(0xCBA6630)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONLARGEICON_OFFSET UNITYSDK_OFFSET(0xCBA6AD0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONSMALLICON_OFFSET UNITYSDK_OFFSET(0xCBA6A20)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONTITLE_OFFSET UNITYSDK_OFFSET(0xCBA6960)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xCBA6840)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_MAXDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0xCBA6B80)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCBA68F0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_SYNCNEWTALENTIDS_OFFSET UNITYSDK_OFFSET(0xCBA6C30)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_TALENTROWS_OFFSET UNITYSDK_OFFSET(0xCBA63C0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_SYNCDIMENSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xCBA6120)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA60C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionDataItem_TypeDefinitionIndex = 66954;

	class ChessRogueDimensionDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCAeonDimensionRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonTalentRow*>* _TalentRows; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SyncNewTalentIDs_k__BackingField; // 0x20
		::System::UInt32 CurDimensionProgress; // 0x28
		::System::UInt32 _AeonDimensionID; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncDimensionProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_SYNCDIMENSIONPROGRESS_OFFSET))(this, a1);
		}

		::System::Void ClearSyncNewTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_CLEARSYNCNEWTALENT_OFFSET))(this);
		}

		::System::Int32 GetFirstUnseenTalentRowIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GETFIRSTUNSEENTALENTROWINDEX_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCAeonDimensionRow* get_Row()
		{
			return ((::RPG::GameCore::RogueDLCAeonDimensionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_DimensionTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONTITLE_OFFSET))(this);
		}

		::System::String* get_DimensionSmallIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONSMALLICON_OFFSET))(this);
		}

		::System::String* get_DimensionLargeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONLARGEICON_OFFSET))(this);
		}

		::System::UInt32 get_MaxDimensionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_MAXDIMENSIONVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonTalentRow*>* get_TalentRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonTalentRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_TALENTROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SyncNewTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_SYNCNEWTALENTIDS_OFFSET))(this);
		}
	};
}

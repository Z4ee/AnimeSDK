#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueDLCAeonDimensionRow; }
namespace RPG::GameCore { class RogueDLCAeonTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_CLEARSYNCNEWTALENT_OFFSET UNITYSDK_OFFSET(0x9FE0F00)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GETFIRSTUNSEENTALENTROWINDEX_OFFSET UNITYSDK_OFFSET(0x9FE0F70)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONLARGEICON_OFFSET UNITYSDK_OFFSET(0x9FE1340)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONSMALLICON_OFFSET UNITYSDK_OFFSET(0x9FE12C0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_DIMENSIONTITLE_OFFSET UNITYSDK_OFFSET(0x9FE1230)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FE1140)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_MAXDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x9FE13C0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9FE11C0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_SYNCNEWTALENTIDS_OFFSET UNITYSDK_OFFSET(0x9FE1440)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_GET_TALENTROWS_OFFSET UNITYSDK_OFFSET(0x9FE0DA0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_SYNCDIMENSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FE0B90)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE0B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionDataItem_TypeDefinitionIndex = 61663;

	class ChessRogueDimensionDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SyncNewTalentIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonTalentRow*>* _TalentRows; // 0x18
		::RPG::GameCore::RogueDLCAeonDimensionRow* _Row; // 0x20
		::System::UInt32 CurDimensionProgress; // 0x28
		::System::UInt32 _AeonDimensionID; // 0x2C

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM__CTOR_OFFSET))(this, id);
		}

		::System::Void SyncDimensionProgress(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATAITEM_SYNCDIMENSIONPROGRESS_OFFSET))(this, progress);
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

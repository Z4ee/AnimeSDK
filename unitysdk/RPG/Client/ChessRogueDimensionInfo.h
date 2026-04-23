#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_11;
namespace RPG::Client { class ChessRogueDimensionDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE0610)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCHESSROGUEDIMENSIONDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FE14C0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCURTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x9FE1670)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETMAXTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x9FE1550)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0x9FE1790)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9FE0230)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0x9FE17A0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9FE09D0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FE1450)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE00A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionInfo_TypeDefinitionIndex = 61664;

	class ChessRogueDimensionInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* _ChessRogueDimensionDict_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncProgress(::Class_1_355A2207C3B7A99D_11* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET))(this, ntf);
		}

		::System::Void SyncProgressWithDimensionID(::System::UInt32 id, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET))(this, id, progress);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDimensionDataItem*>* GetChessRogueDimensionDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDimensionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCHESSROGUEDIMENSIONDATAITEMLIST_OFFSET))(this);
		}

		::System::UInt32 GetMaxTotalDimensionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETMAXTOTALDIMENSIONVALUE_OFFSET))(this);
		}

		::System::UInt32 GetCurTotalDimensionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCURTOTALDIMENSIONVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* get_ChessRogueDimensionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GET_CHESSROGUEDIMENSIONDICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueDimensionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_11;
namespace RPG::Client { class ChessRogueDimensionDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB656AA0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCHESSROGUEDIMENSIONDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xB657AC0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCURTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0xB657D10)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETMAXTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0xB657BF0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0xB657E30)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB656630)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0xB657E40)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET UNITYSDK_OFFSET(0xB656E90)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0xB657A50)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB656470)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionInfo_TypeDefinitionIndex = 62597;

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

		::System::Void SyncProgress(::Class_1_355A2207C3B7A99D_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncProgressWithDimensionID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET))(this, a1, a2);
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

		::System::Void set_ChessRogueDimensionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET))(this, a1);
		}
	};
}

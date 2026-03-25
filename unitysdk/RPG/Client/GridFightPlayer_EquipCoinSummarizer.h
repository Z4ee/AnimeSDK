#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x9881820)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x9881870)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x9881B10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x9881CB0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x9881CC0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x9881D30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x9881DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer_EquipCoinSummarizer_TypeDefinitionIndex = 52838;

	class GridFightPlayer_EquipCoinSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightGameModifier* _CurModifier; // 0x10
		::System::UInt32 _EquipID; // 0x18
		::System::UInt32 _EquipUID; // 0x1C
		::System::Int32 _LastCoin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 srcType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, srcType);
		}

		::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 srcType, ::System::Collections::Generic::IList_1<::System::UInt32>* srcParamList)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET))(this, srcType, srcParamList);
		}

		::System::Void UpdateCoin(::System::UInt32 coin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET))(this, coin);
		}

		::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, P0);
		}
	};
}

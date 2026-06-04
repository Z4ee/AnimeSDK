#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBBCCAC0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBBCCB10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xBBCCDD0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCCED0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBBCCEE0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBBCCF40)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xBBCCFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer_EquipCoinSummarizer_TypeDefinitionIndex = 60848;

	class GridFightPlayer_EquipCoinSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::RPG::Client::GridFightGameModifier* _CurModifier; // 0x10
		::System::UInt32 _EquipUID; // 0x18
		::System::UInt32 _EquipID; // 0x1C
		::System::Int32 _LastCoin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, a1);
		}
	};
}

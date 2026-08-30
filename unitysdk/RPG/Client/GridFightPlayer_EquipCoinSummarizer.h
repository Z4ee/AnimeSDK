#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1CA542A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1CA542F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1CA54700)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA54850)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer_EquipCoinSummarizer_TypeDefinitionIndex = 65132;

	class GridFightPlayer_EquipCoinSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightGameModifier* _CurModifier; // 0x10
		::System::UInt32 _EquipUID; // 0x18
		::System::Int32 _LastCoin; // 0x1C
		::System::UInt32 _EquipID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_CLONE_OFFSET UNITYSDK_OFFSET(0xC88BD30)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_GET_MECANTRADE_OFFSET UNITYSDK_OFFSET(0xC88BD10)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_GET_PETIDS_OFFSET UNITYSDK_OFFSET(0xC88BD00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_SET_MECANTRADE_OFFSET UNITYSDK_OFFSET(0xC88BD20)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC88BE20)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxOrderFilter_TypeDefinitionIndex = 74859;

	class BlindBoxOrderFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PetIds_k__BackingField; // 0x10
		::System::Boolean _MeCanTrade_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PetIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_GET_PETIDS_OFFSET))(this);
		}

		::System::Boolean get_MeCanTrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_GET_MECANTRADE_OFFSET))(this);
		}

		::System::Void set_MeCanTrade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_SET_MECANTRADE_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* Clone()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXORDERFILTER_CLONE_OFFSET))(this);
		}
	};
}

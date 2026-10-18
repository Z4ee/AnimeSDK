#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F5CEA999D7FA899_GET_GAINBASICCOIN_OFFSET UNITYSDK_OFFSET(0xB1FA490)
#define CLASS_1_1F5CEA999D7FA899_GET_GAINBONUSCOINS_OFFSET UNITYSDK_OFFSET(0xB1FA4B0)
#define CLASS_1_1F5CEA999D7FA899_GET_GAINTOTALCOIN_OFFSET UNITYSDK_OFFSET(0xB1FA470)
#define CLASS_1_1F5CEA999D7FA899_METHOD_1_464754B2AF758A44_OFFSET UNITYSDK_OFFSET(0xB1FA4D0)
#define CLASS_1_1F5CEA999D7FA899_SET_GAINBASICCOIN_OFFSET UNITYSDK_OFFSET(0xB1FA4A0)
#define CLASS_1_1F5CEA999D7FA899_SET_GAINBONUSCOINS_OFFSET UNITYSDK_OFFSET(0xB1FA4C0)
#define CLASS_1_1F5CEA999D7FA899_SET_GAINTOTALCOIN_OFFSET UNITYSDK_OFFSET(0xB1FA480)
#define CLASS_1_1F5CEA999D7FA899__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FA560)

inline static constexpr unsigned int Class_1_1F5CEA999D7FA899_TypeDefinitionIndex = 80184;

class Class_1_1F5CEA999D7FA899 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _GainBonusCoins_k__BackingField; // 0x10
	::System::UInt32 _GainBasicCoin_k__BackingField; // 0x18
	::System::UInt32 _GainTotalCoin_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_GainTotalCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_GET_GAINTOTALCOIN_OFFSET))(this);
	}

	::System::Void set_GainTotalCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_SET_GAINTOTALCOIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_GainBasicCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_GET_GAINBASICCOIN_OFFSET))(this);
	}

	::System::Void set_GainBasicCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_SET_GAINBASICCOIN_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_GainBonusCoins()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_GET_GAINBONUSCOINS_OFFSET))(this);
	}

	::System::Void set_GainBonusCoins(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_SET_GAINBONUSCOINS_OFFSET))(this, a1);
	}

	static ::Class_1_1F5CEA999D7FA899* Method_1_464754B2AF758A44(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::Class_1_1F5CEA999D7FA899*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1F5CEA999D7FA899_METHOD_1_464754B2AF758A44_OFFSET))(a1, a2, a3);
	}
};

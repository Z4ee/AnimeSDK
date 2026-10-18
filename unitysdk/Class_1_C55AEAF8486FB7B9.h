#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }

#define CLASS_1_C55AEAF8486FB7B9_GET_COIN_OFFSET UNITYSDK_OFFSET(0xF20E6E0)
#define CLASS_1_C55AEAF8486FB7B9_GET_NUM_OFFSET UNITYSDK_OFFSET(0xF20E700)
#define CLASS_1_C55AEAF8486FB7B9_SET_COIN_OFFSET UNITYSDK_OFFSET(0xF20E6F0)
#define CLASS_1_C55AEAF8486FB7B9_SET_NUM_OFFSET UNITYSDK_OFFSET(0xF20E710)
#define CLASS_1_C55AEAF8486FB7B9__CTOR_OFFSET UNITYSDK_OFFSET(0xF20E720)

inline static constexpr unsigned int Class_1_C55AEAF8486FB7B9_TypeDefinitionIndex = 79421;

class Class_1_C55AEAF8486FB7B9 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* _Coin_k__BackingField; // 0x10
	::System::UInt32 _Num_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C55AEAF8486FB7B9__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* get_Coin()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C55AEAF8486FB7B9_GET_COIN_OFFSET))(this);
	}

	::System::Void set_Coin(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_C55AEAF8486FB7B9_SET_COIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C55AEAF8486FB7B9_GET_NUM_OFFSET))(this);
	}

	::System::Void set_Num(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C55AEAF8486FB7B9_SET_NUM_OFFSET))(this, a1);
	}
};

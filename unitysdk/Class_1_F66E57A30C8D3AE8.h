#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftOrderState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_102;
class Class_0_16E4307DCC419505_128;
class Class_0_16E4307DCC419505_157;

#define CLASS_1_F66E57A30C8D3AE8_GET_CUSTOMERACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x1C534990)
#define CLASS_1_F66E57A30C8D3AE8_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C534970)
#define CLASS_1_F66E57A30C8D3AE8_GET_ORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C534980)
#define CLASS_1_F66E57A30C8D3AE8_GET_REQUIREMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5349A0)
#define CLASS_1_F66E57A30C8D3AE8_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1C5349B0)
#define CLASS_1_F66E57A30C8D3AE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51E7C0)

inline static constexpr unsigned int Class_1_F66E57A30C8D3AE8_TypeDefinitionIndex = 41868;

class Class_1_F66E57A30C8D3AE8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_102* _CustomerActorConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_157* _OrderConfig_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_128* _RequirementConfig_k__BackingField; // 0x20
	::RPG::Client::MechCraft::MechCraftOrderState _State_k__BackingField; // 0x28
	::System::UInt32 _Identifier_k__BackingField; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_157* a2, ::Class_0_16E4307DCC419505_102* a3, ::Class_0_16E4307DCC419505_128* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_157*, ::Class_0_16E4307DCC419505_102*, ::Class_0_16E4307DCC419505_128*))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_157* get_OrderConfig()
	{
		return ((::Class_0_16E4307DCC419505_157*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8_GET_ORDERCONFIG_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_102* get_CustomerActorConfig()
	{
		return ((::Class_0_16E4307DCC419505_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8_GET_CUSTOMERACTORCONFIG_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_128* get_RequirementConfig()
	{
		return ((::Class_0_16E4307DCC419505_128*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8_GET_REQUIREMENTCONFIG_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftOrderState get_State()
	{
		return ((::RPG::Client::MechCraft::MechCraftOrderState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66E57A30C8D3AE8_GET_STATE_OFFSET))(this);
	}
};

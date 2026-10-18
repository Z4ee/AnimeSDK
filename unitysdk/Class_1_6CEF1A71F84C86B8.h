#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/Struct_2_65D7BE12F72F5758.h"
#include "unitysdk/System/Object.h"

class Class_1_B6AB561EB80E0B93;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_6CEF1A71F84C86B8_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xBD073C0)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_1F84989AC57B1767_OFFSET UNITYSDK_OFFSET(0xBD079F0)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_609F20273598CA54_OFFSET UNITYSDK_OFFSET(0xBD07710)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_80705EE783FC2A55_OFFSET UNITYSDK_OFFSET(0xBD07460)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0xBD07830)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_BAAF9C4BE0994A5E_OFFSET UNITYSDK_OFFSET(0xBD073D0)
#define CLASS_1_6CEF1A71F84C86B8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBD07820)
#define CLASS_1_6CEF1A71F84C86B8__CTOR_OFFSET UNITYSDK_OFFSET(0xBD073B0)

inline static constexpr unsigned int Class_1_6CEF1A71F84C86B8_TypeDefinitionIndex = 56889;

class Class_1_6CEF1A71F84C86B8 : public ::System::Object
{
public:
	::RPG::GameCore::BattleEventDataComponent* _Owner_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleEventDataComponent* get_Owner()
	{
		return ((::RPG::GameCore::BattleEventDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_GET_OWNER_OFFSET))(this);
	}

	static ::Class_1_6CEF1A71F84C86B8* Method_1_BAAF9C4BE0994A5E(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::Class_1_6CEF1A71F84C86B8*(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_BAAF9C4BE0994A5E_OFFSET))(a1);
	}

	::System::Void Method_1_80705EE783FC2A55(::Class_1_B6AB561EB80E0B93* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6AB561EB80E0B93*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_80705EE783FC2A55_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_609F20273598CA54(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_609F20273598CA54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_A08DEEEE1A01931E(::Struct_2_65D7BE12F72F5758 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_65D7BE12F72F5758))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F84989AC57B1767(::Struct_2_65D7BE12F72F5758 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_65D7BE12F72F5758))((::PBYTE)hIl2Cpp + CLASS_1_6CEF1A71F84C86B8_METHOD_1_1F84989AC57B1767_OFFSET))(this, a1);
	}
};

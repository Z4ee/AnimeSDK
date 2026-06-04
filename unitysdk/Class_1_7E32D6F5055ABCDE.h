#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2UIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_7E32D6F5055ABCDE_METHOD_1_20E8F279A63249A4_OFFSET UNITYSDK_OFFSET(0xAA0AB10)
#define CLASS_1_7E32D6F5055ABCDE_METHOD_1_2BD8FB8F58921C26_OFFSET UNITYSDK_OFFSET(0xAA0AD00)
#define CLASS_1_7E32D6F5055ABCDE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA0ABD0)
#define CLASS_1_7E32D6F5055ABCDE_METHOD_1_D47DFA01BE0A4EC1_OFFSET UNITYSDK_OFFSET(0xAA0AF00)
#define CLASS_1_7E32D6F5055ABCDE_METHOD_1_E6E1CFE618AFD99C_OFFSET UNITYSDK_OFFSET(0xAA0AC10)
#define CLASS_1_7E32D6F5055ABCDE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0ABC0)

inline static constexpr unsigned int Class_1_7E32D6F5055ABCDE_TypeDefinitionIndex = 70765;

class Class_1_7E32D6F5055ABCDE : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7E32D6F5055ABCDE* Method_1_20E8F279A63249A4(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::Class_1_7E32D6F5055ABCDE*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE_METHOD_1_20E8F279A63249A4_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_E6E1CFE618AFD99C(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE_METHOD_1_E6E1CFE618AFD99C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_2BD8FB8F58921C26(::RPG::Client::DiceCombat::DiceCombatV2UIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE_METHOD_1_2BD8FB8F58921C26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_D47DFA01BE0A4EC1(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_7E32D6F5055ABCDE_METHOD_1_D47DFA01BE0A4EC1_OFFSET))(this, a1);
	}
};

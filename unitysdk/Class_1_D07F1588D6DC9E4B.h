#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2UIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_D07F1588D6DC9E4B_METHOD_1_20E8F279A63249A4_OFFSET UNITYSDK_OFFSET(0x19B4C3E0)
#define CLASS_1_D07F1588D6DC9E4B_METHOD_1_84E69FC94E3FAD84_OFFSET UNITYSDK_OFFSET(0x19B4C4E0)
#define CLASS_1_D07F1588D6DC9E4B_METHOD_1_AE3EE8E6592A8C47_OFFSET UNITYSDK_OFFSET(0x19B4C630)
#define CLASS_1_D07F1588D6DC9E4B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19B4C4A0)
#define CLASS_1_D07F1588D6DC9E4B_METHOD_1_D47DFA01BE0A4EC1_OFFSET UNITYSDK_OFFSET(0x19B4C830)
#define CLASS_1_D07F1588D6DC9E4B__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4C490)

inline static constexpr unsigned int Class_1_D07F1588D6DC9E4B_TypeDefinitionIndex = 75714;

class Class_1_D07F1588D6DC9E4B : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatV2GameFlow* BEGDKHKENMF; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_D07F1588D6DC9E4B* Method_1_20E8F279A63249A4(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::Class_1_D07F1588D6DC9E4B*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B_METHOD_1_20E8F279A63249A4_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_84E69FC94E3FAD84(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B_METHOD_1_84E69FC94E3FAD84_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_AE3EE8E6592A8C47(::RPG::Client::DiceCombat::DiceCombatV2UIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B_METHOD_1_AE3EE8E6592A8C47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_D47DFA01BE0A4EC1(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_D07F1588D6DC9E4B_METHOD_1_D47DFA01BE0A4EC1_OFFSET))(this, a1);
	}
};

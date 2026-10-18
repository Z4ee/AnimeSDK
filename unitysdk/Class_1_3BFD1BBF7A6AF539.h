#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C24DB91A0CEBCF1;
class Class_1_40CD5CE8474BAA94;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatRollDiceEffectParameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_71F791675693F9C2_OFFSET UNITYSDK_OFFSET(0x15599F00)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_7445215661C9D65B_OFFSET UNITYSDK_OFFSET(0x15599C20)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_9ECBD9192187C361_OFFSET UNITYSDK_OFFSET(0x15599CE0)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x15599EC0)
#define CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET UNITYSDK_OFFSET(0x15599C10)

inline static constexpr unsigned int Class_1_3BFD1BBF7A6AF539_TypeDefinitionIndex = 76095;

class Class_1_3BFD1BBF7A6AF539 : public ::System::Object
{
public:
	::UnityEngine::GameObject* PJINGPLNBGA; // 0x10
	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* EJGPIGLDFPG; // 0x18
	::Class_1_1C24DB91A0CEBCF1* PGNKDKLMBJJ; // 0x20
	::Class_1_40CD5CE8474BAA94* LFJOHJEPOKO; // 0x28

	::System::Void _ctor(::Class_1_40CD5CE8474BAA94* a1, ::Class_1_1C24DB91A0CEBCF1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40CD5CE8474BAA94*, ::Class_1_1C24DB91A0CEBCF1*))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_7445215661C9D65B()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_7445215661C9D65B_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9ECBD9192187C361()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_9ECBD9192187C361_OFFSET))(this);
	}

	::Class_1_1C24DB91A0CEBCF1* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1C24DB91A0CEBCF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* Method_1_71F791675693F9C2()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_71F791675693F9C2_OFFSET))(this);
	}
};

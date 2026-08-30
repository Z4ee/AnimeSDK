#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_330;
namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_3946DD14C5E12733_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199935B0)
#define CLASS_1_3946DD14C5E12733_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x19993240)
#define CLASS_1_3946DD14C5E12733__CTOR_OFFSET UNITYSDK_OFFSET(0x19993190)

inline static constexpr unsigned int Class_1_3946DD14C5E12733_TypeDefinitionIndex = 50240;

class Class_1_3946DD14C5E12733 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_330* AGKMDEHIECJ; // 0x10
	::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x18
	::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x20
	::Class_0_16E4307DCC419505_318* MKKLHFCCCNF; // 0x28

	::System::Void _ctor(::RPG::Client::AnimatorButton* a1, ::Class_0_16E4307DCC419505_318* a2, ::Class_0_16E4307DCC419505_330* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*, ::Class_0_16E4307DCC419505_318*, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + CLASS_1_3946DD14C5E12733__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3946DD14C5E12733_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3946DD14C5E12733_DISPOSE_OFFSET))(this);
	}
};

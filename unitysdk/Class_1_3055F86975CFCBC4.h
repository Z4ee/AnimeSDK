#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define CLASS_1_3055F86975CFCBC4_METHOD_1_A57C6DFA0C74D20B_OFFSET UNITYSDK_OFFSET(0xA820AD0)
#define CLASS_1_3055F86975CFCBC4__CTOR_OFFSET UNITYSDK_OFFSET(0xA820A80)

inline static constexpr unsigned int Class_1_3055F86975CFCBC4_TypeDefinitionIndex = 57724;

class Class_1_3055F86975CFCBC4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_648* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_648* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + CLASS_1_3055F86975CFCBC4__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IActivityQuestRewardTabGroupInfo* Method_1_A57C6DFA0C74D20B(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3055F86975CFCBC4_METHOD_1_A57C6DFA0C74D20B_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define CLASS_1_FB5C83310E688CE9_METHOD_1_6CCC6FC10E95995A_OFFSET UNITYSDK_OFFSET(0xBB8DFA0)
#define CLASS_1_FB5C83310E688CE9__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8DF50)

inline static constexpr unsigned int Class_1_FB5C83310E688CE9_TypeDefinitionIndex = 61825;

class Class_1_FB5C83310E688CE9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_722* NCANCCINJDP; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_722* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_FB5C83310E688CE9__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IActivityQuestRewardTabGroupInfo* Method_1_6CCC6FC10E95995A(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5C83310E688CE9_METHOD_1_6CCC6FC10E95995A_OFFSET))(this, a1);
	}
};

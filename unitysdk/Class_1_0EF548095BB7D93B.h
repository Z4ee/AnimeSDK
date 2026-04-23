#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_625;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define CLASS_1_0EF548095BB7D93B_METHOD_1_AA0385204A947D5D_OFFSET UNITYSDK_OFFSET(0xECD2620)
#define CLASS_1_0EF548095BB7D93B__CTOR_OFFSET UNITYSDK_OFFSET(0xECD25D0)

inline static constexpr unsigned int Class_1_0EF548095BB7D93B_TypeDefinitionIndex = 56936;

class Class_1_0EF548095BB7D93B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_625* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_625* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_625*))((::PBYTE)hIl2Cpp + CLASS_1_0EF548095BB7D93B__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IActivityQuestRewardTabGroupInfo* Method_1_AA0385204A947D5D(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0EF548095BB7D93B_METHOD_1_AA0385204A947D5D_OFFSET))(this, a1);
	}
};

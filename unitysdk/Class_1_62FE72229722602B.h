#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_819;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define CLASS_1_62FE72229722602B_METHOD_1_2C1A75AE4389DB54_OFFSET UNITYSDK_OFFSET(0xBA17BB0)
#define CLASS_1_62FE72229722602B__CTOR_OFFSET UNITYSDK_OFFSET(0xBA17B60)

inline static constexpr unsigned int Class_1_62FE72229722602B_TypeDefinitionIndex = 61735;

class Class_1_62FE72229722602B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_819* NCANCCINJDP; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_819* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_819*))((::PBYTE)hIl2Cpp + CLASS_1_62FE72229722602B__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IActivityQuestRewardTabGroupInfo* Method_1_2C1A75AE4389DB54(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FE72229722602B_METHOD_1_2C1A75AE4389DB54_OFFSET))(this, a1);
	}
};

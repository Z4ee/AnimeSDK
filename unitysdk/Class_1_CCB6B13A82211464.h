#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardTabInfo; }

#define CLASS_1_CCB6B13A82211464_CREATE_OFFSET UNITYSDK_OFFSET(0x1378FED0)
#define CLASS_1_CCB6B13A82211464__CTOR_OFFSET UNITYSDK_OFFSET(0x1378FF90)

inline static constexpr unsigned int Class_1_CCB6B13A82211464_TypeDefinitionIndex = 57725;

class Class_1_CCB6B13A82211464 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB6B13A82211464__CTOR_OFFSET))(this);
	}

	::RPG::Client::IActivityQuestRewardTabInfo* Create(::System::UInt32 a1)
	{
		return ((::RPG::Client::IActivityQuestRewardTabInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCB6B13A82211464_CREATE_OFFSET))(this, a1);
	}
};

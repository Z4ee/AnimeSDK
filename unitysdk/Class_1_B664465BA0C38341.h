#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ActivityRewardCountData; }

#define CLASS_1_B664465BA0C38341_METHOD_1_81351BC87F0D2B98_OFFSET UNITYSDK_OFFSET(0xA460220)
#define CLASS_1_B664465BA0C38341__CTOR_OFFSET UNITYSDK_OFFSET(0xA4601D0)

inline static constexpr unsigned int Class_1_B664465BA0C38341_TypeDefinitionIndex = 50145;

class Class_1_B664465BA0C38341 : public ::System::Object
{
public:
	::RPG::Client::ActivityRewardCountCollection* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B664465BA0C38341__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityRewardCountData* Method_1_81351BC87F0D2B98()
	{
		return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B664465BA0C38341_METHOD_1_81351BC87F0D2B98_OFFSET))(this);
	}
};

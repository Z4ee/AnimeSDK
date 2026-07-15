#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ActivityRewardCountData; }

#define CLASS_1_B664465BA0C38341_METHOD_1_AAFC2C42D9E4CCC1_OFFSET UNITYSDK_OFFSET(0x166EE560)
#define CLASS_1_B664465BA0C38341__CTOR_OFFSET UNITYSDK_OFFSET(0x166EE510)

inline static constexpr unsigned int Class_1_B664465BA0C38341_TypeDefinitionIndex = 59043;

class Class_1_B664465BA0C38341 : public ::System::Object
{
public:
	::RPG::Client::ActivityRewardCountCollection* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B664465BA0C38341__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityRewardCountData* Method_1_AAFC2C42D9E4CCC1()
	{
		return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B664465BA0C38341_METHOD_1_AAFC2C42D9E4CCC1_OFFSET))(this);
	}
};

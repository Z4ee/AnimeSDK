#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B664465BA0C38341;
namespace RPG::Client { class ActivityRewardCountCollection; }

#define CLASS_1_355D5C2B1D92981B_METHOD_1_B64782115EFE4597_OFFSET UNITYSDK_OFFSET(0x118753F0)
#define CLASS_1_355D5C2B1D92981B__CTOR_OFFSET UNITYSDK_OFFSET(0x118753A0)

inline static constexpr unsigned int Class_1_355D5C2B1D92981B_TypeDefinitionIndex = 50146;

class Class_1_355D5C2B1D92981B : public ::System::Object
{
public:
	::RPG::Client::ActivityRewardCountCollection* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*))((::PBYTE)hIl2Cpp + CLASS_1_355D5C2B1D92981B__CTOR_OFFSET))(this, a1);
	}

	::Class_1_B664465BA0C38341* Method_1_B64782115EFE4597(::System::UInt32 a1)
	{
		return ((::Class_1_B664465BA0C38341*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_355D5C2B1D92981B_METHOD_1_B64782115EFE4597_OFFSET))(this, a1);
	}
};

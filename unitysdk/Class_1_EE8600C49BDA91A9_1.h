#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace System { class String; }

#define CLASS_1_EE8600C49BDA91A9_1_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xCB3E0F0)
#define CLASS_1_EE8600C49BDA91A9_1_METHOD_1_9A03733F1AEF05A2_OFFSET UNITYSDK_OFFSET(0xCB3E030)
#define CLASS_1_EE8600C49BDA91A9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3E0C0)
#define CLASS_1_EE8600C49BDA91A9_1__ISMEET_B__3_0_OFFSET UNITYSDK_OFFSET(0xCB3E1C0)

inline static constexpr unsigned int Class_1_EE8600C49BDA91A9_1_TypeDefinitionIndex = 53612;

class Class_1_EE8600C49BDA91A9_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_EE8600C49BDA91A9_1* Method_1_9A03733F1AEF05A2(::System::String* a1)
	{
		return ((::Class_1_EE8600C49BDA91A9_1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_1_METHOD_1_9A03733F1AEF05A2_OFFSET))(a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_1_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Boolean _IsMeet_b__3_0(::RPG::Client::MatchThreeGameProp* prop)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_1__ISMEET_B__3_0_OFFSET))(this, prop);
	}
};

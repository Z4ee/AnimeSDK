#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define CLASS_2_0461CF72CBC4B02F_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16200A30)
#define CLASS_2_0461CF72CBC4B02F__CTOR_OFFSET UNITYSDK_OFFSET(0x16200B40)
#define CLASS_2_0461CF72CBC4B02F__ONBIND_OFFSET UNITYSDK_OFFSET(0x16200A90)

inline static constexpr unsigned int Class_2_0461CF72CBC4B02F_TypeDefinitionIndex = 68078;

class Class_2_0461CF72CBC4B02F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0461CF72CBC4B02F__ONBIND_OFFSET))(this);
	}
};

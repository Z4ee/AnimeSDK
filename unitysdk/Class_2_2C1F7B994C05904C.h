#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/Class_2_2C1F7B994C05904C_Struct_2_8D824B745BE0C372.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"

class Class_1_D8203AFB32E9259C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C1F7B994C05904C_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0xC13CF10)
#define CLASS_2_2C1F7B994C05904C_METHOD_2_0F9AAA87B634A146_OFFSET UNITYSDK_OFFSET(0xC13D010)
#define CLASS_2_2C1F7B994C05904C_METHOD_2_8483B0D7A48C33BB_OFFSET UNITYSDK_OFFSET(0xC13D140)
#define CLASS_2_2C1F7B994C05904C_METHOD_2_EDBE0DAF47EEEEED_1_OFFSET UNITYSDK_OFFSET(0xC13CF90)
#define CLASS_2_2C1F7B994C05904C_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xC13CF20)
#define CLASS_2_2C1F7B994C05904C__CTOR_OFFSET UNITYSDK_OFFSET(0xC13D220)

inline static constexpr unsigned int Class_2_2C1F7B994C05904C_TypeDefinitionIndex = 53979;

class Class_2_2C1F7B994C05904C : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::Class_2_2C1F7B994C05904C_Struct_2_8D824B745BE0C372>* LDNHOKKHOCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C_METHOD_2_EDBE0DAF47EEEEED_1_OFFSET))(this);
	}

	::System::Void Method_2_8483B0D7A48C33BB(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillPropertyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C_METHOD_2_8483B0D7A48C33BB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0F9AAA87B634A146()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C1F7B994C05904C_METHOD_2_0F9AAA87B634A146_OFFSET))(this);
	}
};

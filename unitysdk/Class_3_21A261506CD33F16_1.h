#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3A284BE358DB4BF2.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_D17272E82AE804C2_793;
namespace RPG::Client { class RogueKeywordInfo; }

#define CLASS_3_21A261506CD33F16_1_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1183E100)
#define CLASS_3_21A261506CD33F16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1183E0F0)

inline static constexpr unsigned int Class_3_21A261506CD33F16_1_TypeDefinitionIndex = 61795;

class Class_3_21A261506CD33F16_1 : public ::Class_2_3A284BE358DB4BF2
{
public:
	::Class_1_D17272E82AE804C2_793* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueKeywordInfo* a2, ::Class_1_D17272E82AE804C2_793* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueKeywordInfo*, ::Class_1_D17272E82AE804C2_793*))((::PBYTE)hIl2Cpp + CLASS_3_21A261506CD33F16_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21A261506CD33F16_1_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}
};

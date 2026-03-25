#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3A284BE358DB4BF2.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_FA4F4A67B1C04320_754;
namespace RPG::Client { class RogueKeywordInfo; }

#define CLASS_3_21A261506CD33F16_1_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x8AC8B30)
#define CLASS_3_21A261506CD33F16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC8B20)

inline static constexpr unsigned int Class_3_21A261506CD33F16_1_TypeDefinitionIndex = 54607;

class Class_3_21A261506CD33F16_1 : public ::Class_2_3A284BE358DB4BF2
{
public:
	::Class_1_FA4F4A67B1C04320_754* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueKeywordInfo* a2, ::Class_1_FA4F4A67B1C04320_754* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueKeywordInfo*, ::Class_1_FA4F4A67B1C04320_754*))((::PBYTE)hIl2Cpp + CLASS_3_21A261506CD33F16_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21A261506CD33F16_1_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}
};

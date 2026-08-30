#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x165E1C80)
#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x165E1CE0)
#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x165E1C20)
#define CLASS_1_8D1F4CBFE61774F3__CTOR_OFFSET UNITYSDK_OFFSET(0x165E1D30)

inline static constexpr unsigned int Class_1_8D1F4CBFE61774F3_TypeDefinitionIndex = 71453;

class Class_1_8D1F4CBFE61774F3 : public ::System::Object
{
public:
	::System::Boolean CAGCHKJHMPD; // 0x10
	::System::Boolean GBAKKEJICJO; // 0x11
	::System::Boolean NCNEFLDKEHJ; // 0x12
	::RPG::GameCore::SpecialBPDisplayStyle CONJNAGLPDO; // 0x14
	::System::Int32 IFLBAAABKAI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D1F4CBFE61774F3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}
};

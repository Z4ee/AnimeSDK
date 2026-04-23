#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1003B780)
#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1003B7E0)
#define CLASS_1_8D1F4CBFE61774F3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1003B720)
#define CLASS_1_8D1F4CBFE61774F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1003B830)

inline static constexpr unsigned int Class_1_8D1F4CBFE61774F3_TypeDefinitionIndex = 65898;

class Class_1_8D1F4CBFE61774F3 : public ::System::Object
{
public:
	::RPG::GameCore::SpecialBPDisplayStyle Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::Boolean Field_1_4; // 0x15
	::System::Boolean Field_1_1; // 0x16
	::System::Int32 Field_1_3; // 0x18

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleSetNextScoreDelta; }

#define CLASS_2_C604E6AD10C15684_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A472E90)
#define CLASS_2_C604E6AD10C15684_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x1A472DF0)
#define CLASS_2_C604E6AD10C15684__CTOR_OFFSET UNITYSDK_OFFSET(0x1A472DE0)

inline static constexpr unsigned int Class_2_C604E6AD10C15684_TypeDefinitionIndex = 40553;

class Class_2_C604E6AD10C15684 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSetNextScoreDelta* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetNextScoreDelta* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetNextScoreDelta*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_C604E6AD10C15684__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C604E6AD10C15684_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C604E6AD10C15684_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

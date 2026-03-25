#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleSetNextScore; }

#define CLASS_2_BA82AC3ECB657B0B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16960F90)
#define CLASS_2_BA82AC3ECB657B0B_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x16960EF0)
#define CLASS_2_BA82AC3ECB657B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x16960EE0)

inline static constexpr unsigned int Class_2_BA82AC3ECB657B0B_TypeDefinitionIndex = 33185;

class Class_2_BA82AC3ECB657B0B : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleSetNextScore* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetNextScore* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetNextScore*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_BA82AC3ECB657B0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA82AC3ECB657B0B_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA82AC3ECB657B0B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

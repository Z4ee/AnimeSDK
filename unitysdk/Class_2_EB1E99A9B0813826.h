#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleImmuneAttackBack; }

#define CLASS_2_EB1E99A9B0813826_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E3F260)
#define CLASS_2_EB1E99A9B0813826_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x17E3F150)
#define CLASS_2_EB1E99A9B0813826__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F140)

inline static constexpr unsigned int Class_2_EB1E99A9B0813826_TypeDefinitionIndex = 38983;

class Class_2_EB1E99A9B0813826 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleImmuneAttackBack* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleImmuneAttackBack* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleImmuneAttackBack*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_EB1E99A9B0813826__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB1E99A9B0813826_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB1E99A9B0813826_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_6.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_8AC1E618F6014D69;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_A5903EBACBBF95B0_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1CF19CE0)
#define CLASS_3_A5903EBACBBF95B0_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1CF19D30)
#define CLASS_3_A5903EBACBBF95B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF19D20)

inline static constexpr unsigned int Class_3_A5903EBACBBF95B0_TypeDefinitionIndex = 23340;

class Class_3_A5903EBACBBF95B0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* GFNAPNFFGPJ; // 0x20
	::Class_2_8AC1E618F6014D69* EABKOHGCHFP; // 0x28
	::Enum_3_ED790DAC948A65A9_6 GMPGDEINODK; // 0x30
	::System::Boolean GNDCCBNILML; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5903EBACBBF95B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5903EBACBBF95B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5903EBACBBF95B0*&))((::PBYTE)hIl2Cpp + CLASS_3_A5903EBACBBF95B0_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5903EBACBBF95B0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5903EBACBBF95B0*))((::PBYTE)hIl2Cpp + CLASS_3_A5903EBACBBF95B0_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};

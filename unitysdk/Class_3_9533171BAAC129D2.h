#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_8AC1E618F6014D69;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_9533171BAAC129D2_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0xCA3A340)
#define CLASS_3_9533171BAAC129D2_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0xCA3A390)
#define CLASS_3_9533171BAAC129D2__CTOR_OFFSET UNITYSDK_OFFSET(0xCA3A380)

inline static constexpr unsigned int Class_3_9533171BAAC129D2_TypeDefinitionIndex = 23075;

class Class_3_9533171BAAC129D2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Class_2_8AC1E618F6014D69* EABKOHGCHFP; // 0x20
	::System::String* GFNAPNFFGPJ; // 0x28
	::System::Boolean GNDCCBNILML; // 0x30
	::RPG::GameCore::BattleHintToastServiceType GMPGDEINODK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9533171BAAC129D2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9533171BAAC129D2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9533171BAAC129D2*&))((::PBYTE)hIl2Cpp + CLASS_3_9533171BAAC129D2_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9533171BAAC129D2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9533171BAAC129D2*))((::PBYTE)hIl2Cpp + CLASS_3_9533171BAAC129D2_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};

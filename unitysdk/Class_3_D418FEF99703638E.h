#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_D418FEF99703638E_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1BD52B20)
#define CLASS_3_D418FEF99703638E_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1BD52B60)
#define CLASS_3_D418FEF99703638E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD52B50)

inline static constexpr unsigned int Class_3_D418FEF99703638E_TypeDefinitionIndex = 22758;

class Class_3_D418FEF99703638E : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::PredicateConfig* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D418FEF99703638E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D418FEF99703638E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D418FEF99703638E*&))((::PBYTE)hIl2Cpp + CLASS_3_D418FEF99703638E_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D418FEF99703638E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D418FEF99703638E*))((::PBYTE)hIl2Cpp + CLASS_3_D418FEF99703638E_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};

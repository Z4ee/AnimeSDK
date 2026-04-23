#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_11EC94CEE42888F1_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x19156900)
#define CLASS_3_11EC94CEE42888F1_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x19156980)
#define CLASS_3_11EC94CEE42888F1__CTOR_OFFSET UNITYSDK_OFFSET(0x19156950)

inline static constexpr unsigned int Class_3_11EC94CEE42888F1_TypeDefinitionIndex = 21346;

class Class_3_11EC94CEE42888F1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::FloatCurve* Field_3_4; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11EC94CEE42888F1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11EC94CEE42888F1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11EC94CEE42888F1*&))((::PBYTE)hIl2Cpp + CLASS_3_11EC94CEE42888F1_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11EC94CEE42888F1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11EC94CEE42888F1*))((::PBYTE)hIl2Cpp + CLASS_3_11EC94CEE42888F1_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};

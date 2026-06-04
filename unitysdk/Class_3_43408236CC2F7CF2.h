#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_43408236CC2F7CF2_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x18F8A070)
#define CLASS_3_43408236CC2F7CF2_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x18F8A0F0)
#define CLASS_3_43408236CC2F7CF2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8A0C0)

inline static constexpr unsigned int Class_3_43408236CC2F7CF2_TypeDefinitionIndex = 22317;

class Class_3_43408236CC2F7CF2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::PredicateConfig* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43408236CC2F7CF2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_43408236CC2F7CF2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_43408236CC2F7CF2*&))((::PBYTE)hIl2Cpp + CLASS_3_43408236CC2F7CF2_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_43408236CC2F7CF2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_43408236CC2F7CF2*))((::PBYTE)hIl2Cpp + CLASS_3_43408236CC2F7CF2_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};

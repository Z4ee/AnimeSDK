#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_A31285FB5035808B_METHOD_4_BCFF597281DB664F_OFFSET UNITYSDK_OFFSET(0x18978380)
#define CLASS_4_A31285FB5035808B_METHOD_4_C59B8433498732A8_OFFSET UNITYSDK_OFFSET(0x18978450)
#define CLASS_4_A31285FB5035808B__CTOR_OFFSET UNITYSDK_OFFSET(0x18978400)

inline static constexpr unsigned int Class_4_A31285FB5035808B_TypeDefinitionIndex = 19068;

class Class_4_A31285FB5035808B : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x18
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A31285FB5035808B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_BCFF597281DB664F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A31285FB5035808B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A31285FB5035808B*&))((::PBYTE)hIl2Cpp + CLASS_4_A31285FB5035808B_METHOD_4_BCFF597281DB664F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C59B8433498732A8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A31285FB5035808B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A31285FB5035808B*))((::PBYTE)hIl2Cpp + CLASS_4_A31285FB5035808B_METHOD_4_C59B8433498732A8_OFFSET))(a1, a2);
	}
};

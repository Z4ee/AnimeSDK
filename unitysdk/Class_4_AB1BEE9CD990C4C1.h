#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_AB1BEE9CD990C4C1_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x17959C70)
#define CLASS_4_AB1BEE9CD990C4C1_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x17959D40)
#define CLASS_4_AB1BEE9CD990C4C1__CTOR_OFFSET UNITYSDK_OFFSET(0x17959CF0)

inline static constexpr unsigned int Class_4_AB1BEE9CD990C4C1_TypeDefinitionIndex = 20733;

class Class_4_AB1BEE9CD990C4C1 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::FormatString Field_4_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AB1BEE9CD990C4C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_AB1BEE9CD990C4C1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_AB1BEE9CD990C4C1*&))((::PBYTE)hIl2Cpp + CLASS_4_AB1BEE9CD990C4C1_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_AB1BEE9CD990C4C1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_AB1BEE9CD990C4C1*))((::PBYTE)hIl2Cpp + CLASS_4_AB1BEE9CD990C4C1_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};

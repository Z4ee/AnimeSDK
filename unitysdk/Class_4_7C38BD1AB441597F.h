#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_7C38BD1AB441597F_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x18F54220)
#define CLASS_4_7C38BD1AB441597F_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x18F53ED0)
#define CLASS_4_7C38BD1AB441597F_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x18F541A0)
#define CLASS_4_7C38BD1AB441597F_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x18F53FA0)
#define CLASS_4_7C38BD1AB441597F__CTOR_OFFSET UNITYSDK_OFFSET(0x18F53F50)

inline static constexpr unsigned int Class_4_7C38BD1AB441597F_TypeDefinitionIndex = 21319;

class Class_4_7C38BD1AB441597F : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::FormatString Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7C38BD1AB441597F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7C38BD1AB441597F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7C38BD1AB441597F*&))((::PBYTE)hIl2Cpp + CLASS_4_7C38BD1AB441597F_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7C38BD1AB441597F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7C38BD1AB441597F*))((::PBYTE)hIl2Cpp + CLASS_4_7C38BD1AB441597F_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_7C38BD1AB441597F*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7C38BD1AB441597F*&))((::PBYTE)hIl2Cpp + CLASS_4_7C38BD1AB441597F_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_7C38BD1AB441597F* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7C38BD1AB441597F*))((::PBYTE)hIl2Cpp + CLASS_4_7C38BD1AB441597F_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};

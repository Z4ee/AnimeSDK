#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_36DFE95147B6A27A_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1CA9A380)
#define CLASS_3_36DFE95147B6A27A_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1CA9A340)
#define CLASS_3_36DFE95147B6A27A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9A370)

inline static constexpr unsigned int Class_3_36DFE95147B6A27A_TypeDefinitionIndex = 22246;

class Class_3_36DFE95147B6A27A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* KNDOLFNGPIJ; // 0x18
	::System::Boolean ICHFIJBCNKB; // 0x20
	::System::Boolean PGLPJMGJNMO; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36DFE95147B6A27A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_36DFE95147B6A27A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_36DFE95147B6A27A*&))((::PBYTE)hIl2Cpp + CLASS_3_36DFE95147B6A27A_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_36DFE95147B6A27A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_36DFE95147B6A27A*))((::PBYTE)hIl2Cpp + CLASS_3_36DFE95147B6A27A_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_478887A2EA3BC634_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x17929E50)
#define CLASS_3_478887A2EA3BC634_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x17929ED0)
#define CLASS_3_478887A2EA3BC634__CTOR_OFFSET UNITYSDK_OFFSET(0x17929EA0)

inline static constexpr unsigned int Class_3_478887A2EA3BC634_TypeDefinitionIndex = 21057;

class Class_3_478887A2EA3BC634 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::HitBoxConfig* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_478887A2EA3BC634__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_478887A2EA3BC634*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_478887A2EA3BC634*&))((::PBYTE)hIl2Cpp + CLASS_3_478887A2EA3BC634_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_478887A2EA3BC634* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_478887A2EA3BC634*))((::PBYTE)hIl2Cpp + CLASS_3_478887A2EA3BC634_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};

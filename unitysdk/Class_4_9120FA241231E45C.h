#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_9120FA241231E45C_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x16DC0C40)
#define CLASS_4_9120FA241231E45C_METHOD_4_F15654ABB049A0FA_OFFSET UNITYSDK_OFFSET(0x16DC0DA0)
#define CLASS_4_9120FA241231E45C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC0D00)

inline static constexpr unsigned int Class_4_9120FA241231E45C_TypeDefinitionIndex = 21199;

class Class_4_9120FA241231E45C : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_4; // 0x30
	::RPG::GameCore::HPDetailParamType Field_4_1; // 0x38
	::RPG::GameCore::CompareType Field_4_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9120FA241231E45C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9120FA241231E45C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9120FA241231E45C*&))((::PBYTE)hIl2Cpp + CLASS_4_9120FA241231E45C_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F15654ABB049A0FA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9120FA241231E45C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9120FA241231E45C*))((::PBYTE)hIl2Cpp + CLASS_4_9120FA241231E45C_METHOD_4_F15654ABB049A0FA_OFFSET))(a1, a2);
	}
};

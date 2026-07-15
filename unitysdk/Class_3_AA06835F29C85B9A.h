#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AA06835F29C85B9A_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1B9E1E30)
#define CLASS_3_AA06835F29C85B9A_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1B9E1ED0)
#define CLASS_3_AA06835F29C85B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E1E90)

inline static constexpr unsigned int Class_3_AA06835F29C85B9A_TypeDefinitionIndex = 21843;

class Class_3_AA06835F29C85B9A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::PredicateConfig* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::ControlSkillType Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA06835F29C85B9A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AA06835F29C85B9A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AA06835F29C85B9A*&))((::PBYTE)hIl2Cpp + CLASS_3_AA06835F29C85B9A_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AA06835F29C85B9A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AA06835F29C85B9A*))((::PBYTE)hIl2Cpp + CLASS_3_AA06835F29C85B9A_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};

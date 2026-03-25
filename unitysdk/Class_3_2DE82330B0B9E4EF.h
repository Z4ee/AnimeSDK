#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ST_Parkour_ByCompareDistanceToPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2DE82330B0B9E4EF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA19F120)
#define CLASS_3_2DE82330B0B9E4EF_METHOD_3_822D2B219A0A0EAD_OFFSET UNITYSDK_OFFSET(0xA19F2C0)
#define CLASS_3_2DE82330B0B9E4EF_METHOD_3_B4843824D55DE57E_OFFSET UNITYSDK_OFFSET(0xA19F3D0)
#define CLASS_3_2DE82330B0B9E4EF__CTOR_OFFSET UNITYSDK_OFFSET(0xA19F0F0)

inline static constexpr unsigned int Class_3_2DE82330B0B9E4EF_TypeDefinitionIndex = 42152;

class Class_3_2DE82330B0B9E4EF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_2DE82330B0B9E4EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DE82330B0B9E4EF_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_822D2B219A0A0EAD(::RPG::GameCore::ComplexSkillAIValueCompareType a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ComplexSkillAIValueCompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2DE82330B0B9E4EF_METHOD_3_822D2B219A0A0EAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_B4843824D55DE57E(::RPG::GameCore::ComplexSkillAIValueCompareType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ComplexSkillAIValueCompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2DE82330B0B9E4EF_METHOD_3_B4843824D55DE57E_OFFSET))(a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYRELATIONGROUP_METHOD_3_174E7015DDE0DB5B_OFFSET UNITYSDK_OFFSET(0x19C4C5B0)
#define RPG_GAMECORE_SETENTITYRELATIONGROUP_METHOD_3_9FFE570A538BD616_OFFSET UNITYSDK_OFFSET(0x19C4C530)
#define RPG_GAMECORE_SETENTITYRELATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4C580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityRelationGroup_TypeDefinitionIndex = 21582;

	class SetEntityRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::RPG::GameCore::TargetEvaluator* MainTargets; // 0x20
		::RPG::GameCore::TargetEvaluator* SubTargets; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FFE570A538BD616(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityRelationGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityRelationGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP_METHOD_3_9FFE570A538BD616_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_174E7015DDE0DB5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYRELATIONGROUP_METHOD_3_174E7015DDE0DB5B_OFFSET))(a1, a2);
		}
	};
}

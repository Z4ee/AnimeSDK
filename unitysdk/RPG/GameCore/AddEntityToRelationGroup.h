#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_148745B4066CE2B5_OFFSET UNITYSDK_OFFSET(0x1CDB14B0)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_72C3ECB9A5533770_OFFSET UNITYSDK_OFFSET(0x1CDB1470)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB14A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddEntityToRelationGroup_TypeDefinitionIndex = 22572;

	class AddEntityToRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::EntityRelationMemberType MemberType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72C3ECB9A5533770(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToRelationGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToRelationGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_72C3ECB9A5533770_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_148745B4066CE2B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_148745B4066CE2B5_OFFSET))(a1, a2);
		}
	};
}

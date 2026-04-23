#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_148745B4066CE2B5_OFFSET UNITYSDK_OFFSET(0x1863DBC0)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_2624F0AA5E2A96C0_OFFSET UNITYSDK_OFFSET(0x1863DB40)
#define RPG_GAMECORE_ADDENTITYTORELATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1863DB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddEntityToRelationGroup_TypeDefinitionIndex = 21740;

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

		static ::System::Void Method_3_2624F0AA5E2A96C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToRelationGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToRelationGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_2624F0AA5E2A96C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_148745B4066CE2B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTORELATIONGROUP_METHOD_3_148745B4066CE2B5_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_METHOD_3_7EF3FCFD5748B318_OFFSET UNITYSDK_OFFSET(0x1D39EB10)
#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_METHOD_3_A126D156FBE8B801_OFFSET UNITYSDK_OFFSET(0x1D39EAD0)
#define RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39EB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEntityFromRelationGroup_TypeDefinitionIndex = 22573;

	class RemoveEntityFromRelationGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x18
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A126D156FBE8B801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEntityFromRelationGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_METHOD_3_A126D156FBE8B801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EF3FCFD5748B318(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEntityFromRelationGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMRELATIONGROUP_METHOD_3_7EF3FCFD5748B318_OFFSET))(a1, a2);
		}
	};
}

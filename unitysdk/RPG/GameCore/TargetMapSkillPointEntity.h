#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_11FE2083D846A5C2_OFFSET UNITYSDK_OFFSET(0x19D14990)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_1884732C7C743BEC_OFFSET UNITYSDK_OFFSET(0x19D14750)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_944E041F182C7A7B_OFFSET UNITYSDK_OFFSET(0x19D14940)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_AA112902E5586378_OFFSET UNITYSDK_OFFSET(0x19D14880)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D14860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillPointEntity_TypeDefinitionIndex = 22632;

	class TargetMapSkillPointEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Nullable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1884732C7C743BEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_1884732C7C743BEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA112902E5586378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_AA112902E5586378_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_944E041F182C7A7B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_944E041F182C7A7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11FE2083D846A5C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_11FE2083D846A5C2_OFFSET))(a1, a2);
		}
	};
}

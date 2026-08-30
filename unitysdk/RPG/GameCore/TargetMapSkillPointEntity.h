#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_8E2C7B937F1B85A4_OFFSET UNITYSDK_OFFSET(0x1D5B4D10)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_AA112902E5586378_OFFSET UNITYSDK_OFFSET(0x1D5B4C20)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_C25F67AFED5DF7B5_OFFSET UNITYSDK_OFFSET(0x1D5B4B40)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_F253D5962D391CED_OFFSET UNITYSDK_OFFSET(0x1D5B4CE0)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B4C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillPointEntity_TypeDefinitionIndex = 23675;

	class TargetMapSkillPointEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Nullable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C25F67AFED5DF7B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_C25F67AFED5DF7B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA112902E5586378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_AA112902E5586378_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F253D5962D391CED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_F253D5962D391CED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E2C7B937F1B85A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_8E2C7B937F1B85A4_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_1884732C7C743BEC_OFFSET UNITYSDK_OFFSET(0x18EE9380)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_METHOD_3_AA112902E5586378_OFFSET UNITYSDK_OFFSET(0x18EE94B0)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillPointEntity_TypeDefinitionIndex = 22941;

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
	};
}

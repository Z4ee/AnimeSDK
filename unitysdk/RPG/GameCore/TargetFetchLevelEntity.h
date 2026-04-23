#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET UNITYSDK_OFFSET(0x18EDDCF0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_A45AF61F26C38A5F_OFFSET UNITYSDK_OFFSET(0x18EE4950)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDDCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLevelEntity_TypeDefinitionIndex = 22916;

	class TargetFetchLevelEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A45AF61F26C38A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_A45AF61F26C38A5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74B34E2E4D56C881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET))(a1, a2);
		}
	};
}

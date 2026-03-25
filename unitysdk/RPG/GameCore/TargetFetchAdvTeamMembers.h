#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_3706E2686308BE7B_OFFSET UNITYSDK_OFFSET(0x177BC960)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_63315671B3CEEEAD_OFFSET UNITYSDK_OFFSET(0x177BCA70)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS__CTOR_OFFSET UNITYSDK_OFFSET(0x177BCA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamMembers_TypeDefinitionIndex = 22130;

	class TargetFetchAdvTeamMembers : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3706E2686308BE7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_3706E2686308BE7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63315671B3CEEEAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_63315671B3CEEEAD_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_METHOD_3_0C387A365781197D_OFFSET UNITYSDK_OFFSET(0x1BE05400)
#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_METHOD_3_831D25ED39BB3FFE_OFFSET UNITYSDK_OFFSET(0x1BE053C0)
#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE053F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddEntityToTeamFormation_TypeDefinitionIndex = 21822;

	class AddEntityToTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_831D25ED39BB3FFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_METHOD_3_831D25ED39BB3FFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C387A365781197D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddEntityToTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddEntityToTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_METHOD_3_0C387A365781197D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_6884BA27D3B1A01A_OFFSET UNITYSDK_OFFSET(0x1CBD01F0)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_94C1EA5FA0BBBCBB_OFFSET UNITYSDK_OFFSET(0x1CBD01B0)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD01E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlignTargetToTeamCenter_TypeDefinitionIndex = 22250;

	class AlignTargetToTeamCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlignFaceDir; // 0x20
		::System::Boolean UseNormalFormation; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94C1EA5FA0BBBCBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlignTargetToTeamCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlignTargetToTeamCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_94C1EA5FA0BBBCBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6884BA27D3B1A01A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlignTargetToTeamCenter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlignTargetToTeamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_6884BA27D3B1A01A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_5E34461DFAB2DD6B_OFFSET UNITYSDK_OFFSET(0x18690590)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_6884BA27D3B1A01A_OFFSET UNITYSDK_OFFSET(0x18690610)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x186905E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlignTargetToTeamCenter_TypeDefinitionIndex = 21382;

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

		static ::System::Void Method_3_5E34461DFAB2DD6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlignTargetToTeamCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlignTargetToTeamCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_5E34461DFAB2DD6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6884BA27D3B1A01A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlignTargetToTeamCenter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlignTargetToTeamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_METHOD_3_6884BA27D3B1A01A_OFFSET))(a1, a2);
		}
	};
}

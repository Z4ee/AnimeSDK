#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_1B966749E8C0B42D_OFFSET UNITYSDK_OFFSET(0x1E1B76D0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_4C9FA014538360C0_OFFSET UNITYSDK_OFFSET(0x1E1B75C0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_85D4026C9C41F8EA_OFFSET UNITYSDK_OFFSET(0x1E1B76A0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_DF28F6B6D53B0833_OFFSET UNITYSDK_OFFSET(0x1E1B7600)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B75F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTeamEntity_TypeDefinitionIndex = 23638;

	class TargetFetchTeamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4C9FA014538360C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_4C9FA014538360C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF28F6B6D53B0833(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_DF28F6B6D53B0833_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85D4026C9C41F8EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_85D4026C9C41F8EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B966749E8C0B42D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_1B966749E8C0B42D_OFFSET))(a1, a2);
		}
	};
}

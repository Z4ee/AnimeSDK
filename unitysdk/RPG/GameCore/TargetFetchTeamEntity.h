#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_208BE62F81936136_OFFSET UNITYSDK_OFFSET(0x1DB38A00)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_4C9FA014538360C0_OFFSET UNITYSDK_OFFSET(0x1DB388F0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_B563B0EC32426EED_OFFSET UNITYSDK_OFFSET(0x1DB389D0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_DF28F6B6D53B0833_OFFSET UNITYSDK_OFFSET(0x1DB38930)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTeamEntity_TypeDefinitionIndex = 23912;

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

		static ::System::Void Method_4_B563B0EC32426EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_B563B0EC32426EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_208BE62F81936136(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_METHOD_4_208BE62F81936136_OFFSET))(a1, a2);
		}
	};
}

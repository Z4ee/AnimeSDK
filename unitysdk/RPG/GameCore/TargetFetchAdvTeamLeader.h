#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_2AE73EC246B2F8A8_OFFSET UNITYSDK_OFFSET(0x1E16B040)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_45348A4E122BC312_OFFSET UNITYSDK_OFFSET(0x1E16AF50)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_BCE3B25AF1A3FC51_OFFSET UNITYSDK_OFFSET(0x1E16B010)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_CC9D11AD4123FD8F_OFFSET UNITYSDK_OFFSET(0x1E16AE70)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16AF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamLeader_TypeDefinitionIndex = 23590;

	class TargetFetchAdvTeamLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean FetchLatestTeamLeader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC9D11AD4123FD8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_CC9D11AD4123FD8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45348A4E122BC312(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_45348A4E122BC312_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BCE3B25AF1A3FC51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_BCE3B25AF1A3FC51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AE73EC246B2F8A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_2AE73EC246B2F8A8_OFFSET))(a1, a2);
		}
	};
}

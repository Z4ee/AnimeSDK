#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_45348A4E122BC312_OFFSET UNITYSDK_OFFSET(0x19CF6470)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_66AF6F25CADE5FD5_OFFSET UNITYSDK_OFFSET(0x19D0A3D0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_BCE3B25AF1A3FC51_OFFSET UNITYSDK_OFFSET(0x19D03C50)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_C8B2C9AC5FB94126_OFFSET UNITYSDK_OFFSET(0x19D0A520)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF6420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamLeader_TypeDefinitionIndex = 22547;

	class TargetFetchAdvTeamLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean FetchLatestTeamLeader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66AF6F25CADE5FD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_66AF6F25CADE5FD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45348A4E122BC312(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_45348A4E122BC312_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BCE3B25AF1A3FC51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_BCE3B25AF1A3FC51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C8B2C9AC5FB94126(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_C8B2C9AC5FB94126_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_45348A4E122BC312_OFFSET UNITYSDK_OFFSET(0x18EDA0C0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_METHOD_4_66AF6F25CADE5FD5_OFFSET UNITYSDK_OFFSET(0x18EE2850)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDA070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamLeader_TypeDefinitionIndex = 22847;

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
	};
}

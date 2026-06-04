#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_CB324A9699BD3DCA_OFFSET UNITYSDK_OFFSET(0x19CB7CC0)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_EF77D8683F3DC38B_OFFSET UNITYSDK_OFFSET(0x19CB7D40)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB7D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMarblePVEChallengeMatch_TypeDefinitionIndex = 20103;

	class StartMarblePVEChallengeMatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MatchID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccImmediately; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailImmediately; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB324A9699BD3DCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMarblePVEChallengeMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_CB324A9699BD3DCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF77D8683F3DC38B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_EF77D8683F3DC38B_OFFSET))(a1, a2);
		}
	};
}

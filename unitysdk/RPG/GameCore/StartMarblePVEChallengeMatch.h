#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_6E4FC183DFAC163A_OFFSET UNITYSDK_OFFSET(0x1CAF5330)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_EF77D8683F3DC38B_OFFSET UNITYSDK_OFFSET(0x1CAF5370)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF5360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMarblePVEChallengeMatch_TypeDefinitionIndex = 21027;

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

		static ::System::Void Method_3_6E4FC183DFAC163A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMarblePVEChallengeMatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_6E4FC183DFAC163A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF77D8683F3DC38B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_METHOD_3_EF77D8683F3DC38B_OFFSET))(a1, a2);
		}
	};
}

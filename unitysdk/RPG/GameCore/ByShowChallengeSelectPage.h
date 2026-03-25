#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET UNITYSDK_OFFSET(0x1703A990)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_90D6BE26CFB010A3_OFFSET UNITYSDK_OFFSET(0x1703A8C0)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByShowChallengeSelectPage_TypeDefinitionIndex = 18772;

	class ByShowChallengeSelectPage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90D6BE26CFB010A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_90D6BE26CFB010A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30F48E026D1F8A29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET))(a1, a2);
		}
	};
}

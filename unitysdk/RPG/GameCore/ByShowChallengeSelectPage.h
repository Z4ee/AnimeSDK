#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_08AD0CD5F90A87A2_OFFSET UNITYSDK_OFFSET(0x1B2B8A30)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET UNITYSDK_OFFSET(0x1B2B8A70)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_92D17F883C104AD3_OFFSET UNITYSDK_OFFSET(0x1B2B8BB0)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_FAD709A09D0DDA86_OFFSET UNITYSDK_OFFSET(0x1B2B8BE0)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B8A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByShowChallengeSelectPage_TypeDefinitionIndex = 19690;

	class ByShowChallengeSelectPage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_08AD0CD5F90A87A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_08AD0CD5F90A87A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30F48E026D1F8A29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92D17F883C104AD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_92D17F883C104AD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAD709A09D0DDA86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_FAD709A09D0DDA86_OFFSET))(a1, a2);
		}
	};
}

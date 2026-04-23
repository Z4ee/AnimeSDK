#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeTurnLimitType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_METHOD_3_656347DAADC7C16D_OFFSET UNITYSDK_OFFSET(0x18E36780)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_METHOD_3_83C5868FBDE16B6E_OFFSET UNITYSDK_OFFSET(0x18E36700)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E36750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevelChallengeTurnLimit_TypeDefinitionIndex = 22078;

	class SetLevelChallengeTurnLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChallengeTurnLimitType LimitType; // 0x18
		::RPG::GameCore::DynamicFloat* LimitCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83C5868FBDE16B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevelChallengeTurnLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_METHOD_3_83C5868FBDE16B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_656347DAADC7C16D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevelChallengeTurnLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_METHOD_3_656347DAADC7C16D_OFFSET))(a1, a2);
		}
	};
}

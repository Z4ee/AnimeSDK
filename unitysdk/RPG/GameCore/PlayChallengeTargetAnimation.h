#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_METHOD_3_000725440F672C6F_OFFSET UNITYSDK_OFFSET(0x1D347840)
#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_METHOD_3_F5836DC97638DAF2_OFFSET UNITYSDK_OFFSET(0x1D347770)
#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayChallengeTargetAnimation_TypeDefinitionIndex = 21371;

	class PlayChallengeTargetAnimation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5836DC97638DAF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayChallengeTargetAnimation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayChallengeTargetAnimation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_METHOD_3_F5836DC97638DAF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_000725440F672C6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayChallengeTargetAnimation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayChallengeTargetAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_METHOD_3_000725440F672C6F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_METHOD_3_7973221F4DB92A3F_OFFSET UNITYSDK_OFFSET(0x198DEDB0)
#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_METHOD_3_B8FACA5C15526B0E_OFFSET UNITYSDK_OFFSET(0x198DED30)
#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x198DED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarkTargetForFutureReviveAbility_TypeDefinitionIndex = 22420;

	class MarkTargetForFutureReviveAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8FACA5C15526B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_METHOD_3_B8FACA5C15526B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7973221F4DB92A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_METHOD_3_7973221F4DB92A3F_OFFSET))(a1, a2);
		}
	};
}

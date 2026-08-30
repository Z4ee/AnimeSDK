#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_METHOD_3_05A8527DC1987A36_OFFSET UNITYSDK_OFFSET(0x1E00FE90)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_METHOD_3_6D7621E8B0B54AA7_OFFSET UNITYSDK_OFFSET(0x1E00FF30)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00FF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Self_TypeDefinitionIndex = 15588;

	class ChenLingBattleTargetEvaluator_Self : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05A8527DC1987A36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_METHOD_3_05A8527DC1987A36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D7621E8B0B54AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_METHOD_3_6D7621E8B0B54AA7_OFFSET))(a1, a2);
		}
	};
}

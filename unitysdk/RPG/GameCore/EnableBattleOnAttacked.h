#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEBATTLEONATTACKED_METHOD_3_6A8FAC608280E3C3_OFFSET UNITYSDK_OFFSET(0x17197050)
#define RPG_GAMECORE_ENABLEBATTLEONATTACKED_METHOD_3_903C911D85F51C67_OFFSET UNITYSDK_OFFSET(0x171970D0)
#define RPG_GAMECORE_ENABLEBATTLEONATTACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x171970A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableBattleOnAttacked_TypeDefinitionIndex = 19927;

	class EnableBattleOnAttacked : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enabled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A8FAC608280E3C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableBattleOnAttacked*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableBattleOnAttacked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED_METHOD_3_6A8FAC608280E3C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_903C911D85F51C67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableBattleOnAttacked* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableBattleOnAttacked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED_METHOD_3_903C911D85F51C67_OFFSET))(a1, a2);
		}
	};
}

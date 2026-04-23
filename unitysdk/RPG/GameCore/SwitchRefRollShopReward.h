#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_METHOD_3_32758402A454F3F6_OFFSET UNITYSDK_OFFSET(0x18EC0110)
#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_METHOD_3_5FE57A24454483EE_OFFSET UNITYSDK_OFFSET(0x18EBFA60)
#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBFA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefRollShopReward_TypeDefinitionIndex = 16641;

	class SwitchRefRollShopReward : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32758402A454F3F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefRollShopReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefRollShopReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_METHOD_3_32758402A454F3F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FE57A24454483EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefRollShopReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefRollShopReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_METHOD_3_5FE57A24454483EE_OFFSET))(a1, a2);
		}
	};
}

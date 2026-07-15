#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_METHOD_2_B6EBD3005E7550C6_OFFSET UNITYSDK_OFFSET(0x1C378C30)
#define RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C378D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAnimationConfig_TypeDefinitionIndex = 15083;

	class ChenLingBattleAnimationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* TriggerToAnimationLength; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6EBD3005E7550C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAnimationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAnimationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_METHOD_2_B6EBD3005E7550C6_OFFSET))(a1, a2);
		}
	};
}

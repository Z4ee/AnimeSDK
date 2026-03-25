#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_60179C75C48A23D0_OFFSET UNITYSDK_OFFSET(0x16F3BC70)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_64838D4482E6F6C0_OFFSET UNITYSDK_OFFSET(0x16F3BCF0)
#define RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerPushDownProp_TypeDefinitionIndex = 20429;

	class AdvPlayerPushDownProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitStage; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitMonster; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60179C75C48A23D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerPushDownProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerPushDownProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_60179C75C48A23D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64838D4482E6F6C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERPUSHDOWNPROP_METHOD_3_64838D4482E6F6C0_OFFSET))(a1, a2);
		}
	};
}

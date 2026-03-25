#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_METHOD_3_0BC08D0DB09066DE_OFFSET UNITYSDK_OFFSET(0x178BDC60)
#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_METHOD_3_E3BCF9DFB9111755_OFFSET UNITYSDK_OFFSET(0x178BDBE0)
#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x178BDC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAetherDivideBattle_TypeDefinitionIndex = 19863;

	class TriggerAetherDivideBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3BCF9DFB9111755(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAetherDivideBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAetherDivideBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_METHOD_3_E3BCF9DFB9111755_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BC08D0DB09066DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_METHOD_3_0BC08D0DB09066DE_OFFSET))(a1, a2);
		}
	};
}

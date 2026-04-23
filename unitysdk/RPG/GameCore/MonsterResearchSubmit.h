#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_74EB08ED8126A983_OFFSET UNITYSDK_OFFSET(0x18B5E590)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_9E21A8F026822E62_OFFSET UNITYSDK_OFFSET(0x18B5E610)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5E5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterResearchSubmit_TypeDefinitionIndex = 20074;

	class MonsterResearchSubmit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ActivityMonsterResearchID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion1; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion2; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion3; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74EB08ED8126A983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterResearchSubmit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResearchSubmit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_74EB08ED8126A983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E21A8F026822E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_9E21A8F026822E62_OFFSET))(a1, a2);
		}
	};
}

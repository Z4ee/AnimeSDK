#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG_METHOD_3_70F757E4CD506C8C_OFFSET UNITYSDK_OFFSET(0x175DCCE0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG_METHOD_3_C858AB60A5F32108_OFFSET UNITYSDK_OFFSET(0x175DCC90)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175DCC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetMiracleConfig_TypeDefinitionIndex = 16439;

	class RogueAdventureWolfGunSpecialTargetMiracleConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70F757E4CD506C8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG_METHOD_3_70F757E4CD506C8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C858AB60A5F32108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETMIRACLECONFIG_METHOD_3_C858AB60A5F32108_OFFSET))(a1, a2);
		}
	};
}

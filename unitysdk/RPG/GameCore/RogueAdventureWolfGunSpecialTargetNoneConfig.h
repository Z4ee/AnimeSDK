#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_METHOD_3_446A6948713F7A3D_OFFSET UNITYSDK_OFFSET(0x175DCCB0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_METHOD_3_F414D3D9D7153FF9_OFFSET UNITYSDK_OFFSET(0x175DCD20)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175DCCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetNoneConfig_TypeDefinitionIndex = 16438;

	class RogueAdventureWolfGunSpecialTargetNoneConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F414D3D9D7153FF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_METHOD_3_F414D3D9D7153FF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_446A6948713F7A3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_METHOD_3_446A6948713F7A3D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_METHOD_2_34661C25CBF181B5_OFFSET UNITYSDK_OFFSET(0x1D3BDEF0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_METHOD_2_A01FF84123BF5BDC_OFFSET UNITYSDK_OFFSET(0x1D3BDD20)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BDD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetConfigBase_TypeDefinitionIndex = 17684;

	class RogueAdventureWolfGunSpecialTargetConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A01FF84123BF5BDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_METHOD_2_A01FF84123BF5BDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_34661C25CBF181B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_METHOD_2_34661C25CBF181B5_OFFSET))(a1, a2);
		}
	};
}

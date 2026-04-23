#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_METHOD_2_A61DD8FAB3BDFE86_OFFSET UNITYSDK_OFFSET(0x18870C90)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18870D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorRollConfig_TypeDefinitionIndex = 15297;

	class DiceCombatPresetTurnActorRollConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A61DD8FAB3BDFE86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_METHOD_2_A61DD8FAB3BDFE86_OFFSET))(a1, a2);
		}
	};
}

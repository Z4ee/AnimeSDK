#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_75D8ED821D7B13E3_OFFSET UNITYSDK_OFFSET(0x1D0373A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_D7E4988344A2CD62_OFFSET UNITYSDK_OFFSET(0x1D037440)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D037430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StartCardCutin_TypeDefinitionIndex = 15871;

	class DiceCombatTaskConfig_StartCardCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75D8ED821D7B13E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_75D8ED821D7B13E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7E4988344A2CD62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_D7E4988344A2CD62_OFFSET))(a1, a2);
		}
	};
}

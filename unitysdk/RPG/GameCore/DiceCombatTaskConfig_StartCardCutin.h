#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_D7E4988344A2CD62_OFFSET UNITYSDK_OFFSET(0x196B54E0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_EB76D2B71AFC2E59_OFFSET UNITYSDK_OFFSET(0x196B9F30)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x196B5490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StartCardCutin_TypeDefinitionIndex = 15270;

	class DiceCombatTaskConfig_StartCardCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB76D2B71AFC2E59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_EB76D2B71AFC2E59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7E4988344A2CD62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_METHOD_3_D7E4988344A2CD62_OFFSET))(a1, a2);
		}
	};
}

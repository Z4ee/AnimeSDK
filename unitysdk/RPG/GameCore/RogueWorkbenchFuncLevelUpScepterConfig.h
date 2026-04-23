#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_METHOD_3_7F8A81E32D42FAA3_OFFSET UNITYSDK_OFFSET(0x18D80FB0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_METHOD_3_A4CB667F92B9F127_OFFSET UNITYSDK_OFFSET(0x18D80D70)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D80D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncLevelUpScepterConfig_TypeDefinitionIndex = 17130;

	class RogueWorkbenchFuncLevelUpScepterConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F8A81E32D42FAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_METHOD_3_7F8A81E32D42FAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4CB667F92B9F127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_METHOD_3_A4CB667F92B9F127_OFFSET))(a1, a2);
		}
	};
}

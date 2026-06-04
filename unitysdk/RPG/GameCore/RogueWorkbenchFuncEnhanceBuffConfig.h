#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG_METHOD_3_C2036D6AE1F3CC95_OFFSET UNITYSDK_OFFSET(0x19BD42D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG_METHOD_3_DEAFF592860BD271_OFFSET UNITYSDK_OFFSET(0x19BD44D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD42C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncEnhanceBuffConfig_TypeDefinitionIndex = 17127;

	class RogueWorkbenchFuncEnhanceBuffConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEAFF592860BD271(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncEnhanceBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncEnhanceBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG_METHOD_3_DEAFF592860BD271_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2036D6AE1F3CC95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncEnhanceBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncEnhanceBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCENHANCEBUFFCONFIG_METHOD_3_C2036D6AE1F3CC95_OFFSET))(a1, a2);
		}
	};
}

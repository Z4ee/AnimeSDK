#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_6_3D3F0E18ADB6A2AF_OFFSET UNITYSDK_OFFSET(0x1C4AE930)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_6_86CE11F2F72C9473_OFFSET UNITYSDK_OFFSET(0x1C4AE980)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AE970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBrokenMiracleCountConfig_TypeDefinitionIndex = 19032;

	class RogueCondBrokenMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3D3F0E18ADB6A2AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_6_3D3F0E18ADB6A2AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_86CE11F2F72C9473(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_6_86CE11F2F72C9473_OFFSET))(a1, a2);
		}
	};
}

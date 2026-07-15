#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_METHOD_2_663A84BFDFBB0EEE_OFFSET UNITYSDK_OFFSET(0x1CFBA4D0)
#define RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBA510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMainStoryEventConfig_TypeDefinitionIndex = 17278;

	class RogueMainStoryEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_663A84BFDFBB0EEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMainStoryEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMainStoryEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTCONFIG_METHOD_2_663A84BFDFBB0EEE_OFFSET))(a1, a2);
		}
	};
}

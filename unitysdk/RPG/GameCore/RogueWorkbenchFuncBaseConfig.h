#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_METHOD_2_418BB5EC1EAAB603_OFFSET UNITYSDK_OFFSET(0x1D493150)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_METHOD_2_876E697A9F997D3A_OFFSET UNITYSDK_OFFSET(0x1D4934D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4934C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncBaseConfig_TypeDefinitionIndex = 17805;

	class RogueWorkbenchFuncBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_418BB5EC1EAAB603(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_METHOD_2_418BB5EC1EAAB603_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_876E697A9F997D3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_METHOD_2_876E697A9F997D3A_OFFSET))(a1, a2);
		}
	};
}

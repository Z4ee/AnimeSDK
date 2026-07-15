#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_METHOD_3_286FFA7F31FCA01D_OFFSET UNITYSDK_OFFSET(0x1BB82060)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_METHOD_3_62C3A00C080F3859_OFFSET UNITYSDK_OFFSET(0x1BB821D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncComposeMagicUnitConfig_TypeDefinitionIndex = 17302;

	class RogueWorkbenchFuncComposeMagicUnitConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62C3A00C080F3859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_METHOD_3_62C3A00C080F3859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_286FFA7F31FCA01D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_METHOD_3_286FFA7F31FCA01D_OFFSET))(a1, a2);
		}
	};
}

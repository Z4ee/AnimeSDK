#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_METHOD_2_02AE8D330A549B1B_OFFSET UNITYSDK_OFFSET(0x1BB82250)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncConfig_TypeDefinitionIndex = 17307;

	class RogueWorkbenchFuncConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_02AE8D330A549B1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCONFIG_METHOD_2_02AE8D330A549B1B_OFFSET))(a1, a2);
		}
	};
}

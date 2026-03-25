#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_6_45FE769AE0D0C159_OFFSET UNITYSDK_OFFSET(0x17651960)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_6_C321777059D5777F_OFFSET UNITYSDK_OFFSET(0x176516B0)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17651830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamSavedValueConfig_TypeDefinitionIndex = 18173;

	class RogueParamSavedValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C321777059D5777F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_6_C321777059D5777F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_45FE769AE0D0C159(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_6_45FE769AE0D0C159_OFFSET))(a1, a2);
		}
	};
}

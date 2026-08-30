#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_6_962CAAA6B8B5CE2D_OFFSET UNITYSDK_OFFSET(0x1E545860)
#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_6_D4C0B1F47A1788A9_OFFSET UNITYSDK_OFFSET(0x1E545810)
#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamMagicUnitCountConfig_TypeDefinitionIndex = 19601;

	class RogueParamMagicUnitCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D4C0B1F47A1788A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamMagicUnitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamMagicUnitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_6_D4C0B1F47A1788A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_962CAAA6B8B5CE2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_6_962CAAA6B8B5CE2D_OFFSET))(a1, a2);
		}
	};
}

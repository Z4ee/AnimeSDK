#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_0E1A6CAE2445CC80_OFFSET UNITYSDK_OFFSET(0x1D3ED090)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET UNITYSDK_OFFSET(0x1D3ED0E0)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ED0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondTrueConfig_TypeDefinitionIndex = 19350;

	class RogueMagicCondTrueConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_0E1A6CAE2445CC80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_0E1A6CAE2445CC80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7C301402A1EA8B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET))(a1, a2);
		}
	};
}

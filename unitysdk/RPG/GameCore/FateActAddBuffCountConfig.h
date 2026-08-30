#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_8854D9E7188E8811_OFFSET UNITYSDK_OFFSET(0x1D08B720)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_FC775AFDE0A652AD_OFFSET UNITYSDK_OFFSET(0x1D08B6D0)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08B710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddBuffCountConfig_TypeDefinitionIndex = 18996;

	class FateActAddBuffCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FC775AFDE0A652AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_FC775AFDE0A652AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8854D9E7188E8811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_8854D9E7188E8811_OFFSET))(a1, a2);
		}
	};
}

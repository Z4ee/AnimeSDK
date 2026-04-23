#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_8854D9E7188E8811_OFFSET UNITYSDK_OFFSET(0x188CDA70)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_EA8861A9A754508A_OFFSET UNITYSDK_OFFSET(0x188CD900)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188CD9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddBuffCountConfig_TypeDefinitionIndex = 18264;

	class FateActAddBuffCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EA8861A9A754508A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_EA8861A9A754508A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8854D9E7188E8811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_6_8854D9E7188E8811_OFFSET))(a1, a2);
		}
	};
}

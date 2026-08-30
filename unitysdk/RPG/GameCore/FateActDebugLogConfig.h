#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_6_000F76E947E859FB_OFFSET UNITYSDK_OFFSET(0x1E0CC250)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_6_49216F1D9CC2EF17_OFFSET UNITYSDK_OFFSET(0x1E0CC200)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActDebugLogConfig_TypeDefinitionIndex = 18993;

	class FateActDebugLogConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_49216F1D9CC2EF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActDebugLogConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActDebugLogConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_6_49216F1D9CC2EF17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_000F76E947E859FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActDebugLogConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActDebugLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_6_000F76E947E859FB_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_9A3E21459A625A5E_OFFSET UNITYSDK_OFFSET(0x1C075050)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_F4DA78330F76479A_OFFSET UNITYSDK_OFFSET(0x1C0750A0)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C075090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterJingliuConfig_TypeDefinitionIndex = 18535;

	class FateModifierMasterJingliuConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A3E21459A625A5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterJingliuConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_9A3E21459A625A5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4DA78330F76479A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterJingliuConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_F4DA78330F76479A_OFFSET))(a1, a2);
		}
	};
}

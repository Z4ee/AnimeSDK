#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_0751B484DE9A47E3_OFFSET UNITYSDK_OFFSET(0x197126C0)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_F4DA78330F76479A_OFFSET UNITYSDK_OFFSET(0x19710FD0)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19710F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterJingliuConfig_TypeDefinitionIndex = 18300;

	class FateModifierMasterJingliuConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0751B484DE9A47E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterJingliuConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_0751B484DE9A47E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4DA78330F76479A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterJingliuConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_METHOD_3_F4DA78330F76479A_OFFSET))(a1, a2);
		}
	};
}

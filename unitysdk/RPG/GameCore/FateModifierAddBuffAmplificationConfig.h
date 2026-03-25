#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_METHOD_3_65C9A4EF76164183_OFFSET UNITYSDK_OFFSET(0x171C55B0)
#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_METHOD_3_ABAC587DF70508BA_OFFSET UNITYSDK_OFFSET(0x171C5680)
#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddBuffAmplificationConfig_TypeDefinitionIndex = 17697;

	class FateModifierAddBuffAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65C9A4EF76164183(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_METHOD_3_65C9A4EF76164183_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABAC587DF70508BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_METHOD_3_ABAC587DF70508BA_OFFSET))(a1, a2);
		}
	};
}

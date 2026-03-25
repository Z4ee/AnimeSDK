#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_METHOD_3_209B1B1BFFB7539D_OFFSET UNITYSDK_OFFSET(0x171C8180)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_METHOD_3_AFC3501543DEB324_OFFSET UNITYSDK_OFFSET(0x171C8F80)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C8130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierRandomAddBuffAmplificationByMainTraitConfig_TypeDefinitionIndex = 17698;

	class FateModifierRandomAddBuffAmplificationByMainTraitConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFC3501543DEB324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_METHOD_3_AFC3501543DEB324_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_209B1B1BFFB7539D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_METHOD_3_209B1B1BFFB7539D_OFFSET))(a1, a2);
		}
	};
}

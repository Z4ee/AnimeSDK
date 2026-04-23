#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_METHOD_3_07B5B05231007E17_OFFSET UNITYSDK_OFFSET(0x188D6A50)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_METHOD_3_CD235DC3EC84C9EE_OFFSET UNITYSDK_OFFSET(0x188D5E90)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierTransferMainTraitWithTraitBuffActivatedConfig_TypeDefinitionIndex = 18325;

	class FateModifierTransferMainTraitWithTraitBuffActivatedConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07B5B05231007E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_METHOD_3_07B5B05231007E17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD235DC3EC84C9EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_METHOD_3_CD235DC3EC84C9EE_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_METHOD_3_719F47562FDEBFDF_OFFSET UNITYSDK_OFFSET(0x1C074EE0)
#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_METHOD_3_96E0F17E104B9FE3_OFFSET UNITYSDK_OFFSET(0x1C074F30)
#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C074F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierEnableSpecialAvatarConfig_TypeDefinitionIndex = 18512;

	class FateModifierEnableSpecialAvatarConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_719F47562FDEBFDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_METHOD_3_719F47562FDEBFDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96E0F17E104B9FE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_METHOD_3_96E0F17E104B9FE3_OFFSET))(a1, a2);
		}
	};
}

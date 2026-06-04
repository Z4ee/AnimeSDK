#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_METHOD_3_1EBE28BCCE5FC6A6_OFFSET UNITYSDK_OFFSET(0x198968A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_METHOD_3_7F97A4A5509CB5EE_OFFSET UNITYSDK_OFFSET(0x19896840)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorUnionConfig_TypeDefinitionIndex = 20196;

	class LittleGameAbilityTargetSelectorUnionConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F97A4A5509CB5EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_METHOD_3_7F97A4A5509CB5EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EBE28BCCE5FC6A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_METHOD_3_1EBE28BCCE5FC6A6_OFFSET))(a1, a2);
		}
	};
}

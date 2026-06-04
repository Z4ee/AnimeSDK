#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_METHOD_3_63BE27A756B87CB8_OFFSET UNITYSDK_OFFSET(0x198960B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_METHOD_3_D739E0FFB795BDC8_OFFSET UNITYSDK_OFFSET(0x19896110)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorIntersectConfig_TypeDefinitionIndex = 20197;

	class LittleGameAbilityTargetSelectorIntersectConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_63BE27A756B87CB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_METHOD_3_63BE27A756B87CB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D739E0FFB795BDC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_METHOD_3_D739E0FFB795BDC8_OFFSET))(a1, a2);
		}
	};
}

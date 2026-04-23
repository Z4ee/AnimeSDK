#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_METHOD_3_6D5DD02446DBE7C9_OFFSET UNITYSDK_OFFSET(0x188D6650)
#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_METHOD_3_D89EF8E87C427060_OFFSET UNITYSDK_OFFSET(0x188D5790)
#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyReijuRandomWeightConfig_TypeDefinitionIndex = 18319;

	class FateModifierModifyReijuRandomWeightConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D5DD02446DBE7C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_METHOD_3_6D5DD02446DBE7C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D89EF8E87C427060(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_METHOD_3_D89EF8E87C427060_OFFSET))(a1, a2);
		}
	};
}

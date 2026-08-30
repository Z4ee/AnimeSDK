#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_METHOD_3_5BB38ADE4FD91208_OFFSET UNITYSDK_OFFSET(0x1E3334E0)
#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_METHOD_3_65FFE7FD80CDF64F_OFFSET UNITYSDK_OFFSET(0x1E333550)
#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E333540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelExtremeValueSelectorConfig_TypeDefinitionIndex = 15767;

	class ChimeraDuelExtremeValueSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelValueSelectorType ValueSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x14
		::System::Boolean IsLowest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5BB38ADE4FD91208(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_METHOD_3_5BB38ADE4FD91208_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65FFE7FD80CDF64F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_METHOD_3_65FFE7FD80CDF64F_OFFSET))(a1, a2);
		}
	};
}

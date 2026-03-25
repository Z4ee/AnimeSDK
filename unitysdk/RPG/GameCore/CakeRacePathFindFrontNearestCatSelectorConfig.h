#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_METHOD_3_0A8FC143E3B22A0D_OFFSET UNITYSDK_OFFSET(0x1704E0F0)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_METHOD_3_771B794AF0106AA8_OFFSET UNITYSDK_OFFSET(0x1704E070)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1704E0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePathFindFrontNearestCatSelectorConfig_TypeDefinitionIndex = 16889;

	class CakeRacePathFindFrontNearestCatSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_771B794AF0106AA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_METHOD_3_771B794AF0106AA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A8FC143E3B22A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_METHOD_3_0A8FC143E3B22A0D_OFFSET))(a1, a2);
		}
	};
}

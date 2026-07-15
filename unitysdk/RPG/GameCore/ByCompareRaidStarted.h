#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_60FD2D45359FC923_OFFSET UNITYSDK_OFFSET(0x1A89CC40)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_A44F1A3D92250B1F_OFFSET UNITYSDK_OFFSET(0x1A89CBF0)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRaidStarted_TypeDefinitionIndex = 20435;

	class ByCompareRaidStarted : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A44F1A3D92250B1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidStarted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidStarted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_A44F1A3D92250B1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60FD2D45359FC923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidStarted* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_60FD2D45359FC923_OFFSET))(a1, a2);
		}
	};
}

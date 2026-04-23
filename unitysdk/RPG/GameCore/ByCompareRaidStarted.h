#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_5FD698DE1229616A_OFFSET UNITYSDK_OFFSET(0x18738B10)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_60FD2D45359FC923_OFFSET UNITYSDK_OFFSET(0x18738BE0)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED__CTOR_OFFSET UNITYSDK_OFFSET(0x18738B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRaidStarted_TypeDefinitionIndex = 20207;

	class ByCompareRaidStarted : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5FD698DE1229616A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidStarted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidStarted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_5FD698DE1229616A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60FD2D45359FC923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidStarted* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_METHOD_4_60FD2D45359FC923_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARERAIDFINISHED_METHOD_4_BA84894764BD1DE4_OFFSET UNITYSDK_OFFSET(0x1BBB4750)
#define RPG_GAMECORE_BYCOMPARERAIDFINISHED_METHOD_4_F396954FFC6408A8_OFFSET UNITYSDK_OFFSET(0x1BBB4700)
#define RPG_GAMECORE_BYCOMPARERAIDFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB4740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRaidFinished_TypeDefinitionIndex = 20558;

	class ByCompareRaidFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F396954FFC6408A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED_METHOD_4_F396954FFC6408A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA84894764BD1DE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRaidFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRaidFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED_METHOD_4_BA84894764BD1DE4_OFFSET))(a1, a2);
		}
	};
}

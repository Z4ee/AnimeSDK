#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_870928E515CF609C_OFFSET UNITYSDK_OFFSET(0x1872C830)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_BDC165359FE99D16_OFFSET UNITYSDK_OFFSET(0x1872C900)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1872C8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFirstPerformance_TypeDefinitionIndex = 20070;

	class ByCompareFirstPerformance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_870928E515CF609C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_870928E515CF609C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDC165359FE99D16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_BDC165359FE99D16_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHPERFORMANCE_METHOD_3_22DA3AD210C44253_OFFSET UNITYSDK_OFFSET(0x171D7D60)
#define RPG_GAMECORE_FINISHPERFORMANCE_METHOD_3_5971A8675252A25A_OFFSET UNITYSDK_OFFSET(0x171D7CE0)
#define RPG_GAMECORE_FINISHPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x171D7D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishPerformance_TypeDefinitionIndex = 19398;

	class FinishPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5971A8675252A25A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE_METHOD_3_5971A8675252A25A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22DA3AD210C44253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE_METHOD_3_22DA3AD210C44253_OFFSET))(a1, a2);
		}
	};
}

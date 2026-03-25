#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_228CD69F1FED04A9_OFFSET UNITYSDK_OFFSET(0x17011FB0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_EDBE211D78919DE1_OFFSET UNITYSDK_OFFSET(0x17011EE0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17011F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePerformanceResult_TypeDefinitionIndex = 20107;

	class ByComparePerformanceResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EDBE211D78919DE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_EDBE211D78919DE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_228CD69F1FED04A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_228CD69F1FED04A9_OFFSET))(a1, a2);
		}
	};
}

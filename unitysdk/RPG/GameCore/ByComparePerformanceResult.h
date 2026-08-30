#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_228CD69F1FED04A9_OFFSET UNITYSDK_OFFSET(0x1BBADA80)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_25D72336A00E22A0_OFFSET UNITYSDK_OFFSET(0x1BBADA40)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_615D2AAF76CF81E0_OFFSET UNITYSDK_OFFSET(0x1BBADC70)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_624A0BEA5BEC3B57_OFFSET UNITYSDK_OFFSET(0x1BBADC40)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBADA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePerformanceResult_TypeDefinitionIndex = 21687;

	class ByComparePerformanceResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_25D72336A00E22A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_25D72336A00E22A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_228CD69F1FED04A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_228CD69F1FED04A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_624A0BEA5BEC3B57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_624A0BEA5BEC3B57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_615D2AAF76CF81E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCERESULT_METHOD_4_615D2AAF76CF81E0_OFFSET))(a1, a2);
		}
	};
}

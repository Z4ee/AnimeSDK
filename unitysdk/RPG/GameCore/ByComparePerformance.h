#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_01047C2314DC0962_OFFSET UNITYSDK_OFFSET(0x19526160)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_063D82B0A89455C4_OFFSET UNITYSDK_OFFSET(0x19526090)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_883E67E69B325643_OFFSET UNITYSDK_OFFSET(0x195262F0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_D5AD56492193C862_OFFSET UNITYSDK_OFFSET(0x19526370)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19526110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePerformance_TypeDefinitionIndex = 19176;

	class ByComparePerformance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* PerformanceID_DS; // 0x20
		::System::UInt32 PerformanceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_063D82B0A89455C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_063D82B0A89455C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01047C2314DC0962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_01047C2314DC0962_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_883E67E69B325643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_883E67E69B325643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5AD56492193C862(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_D5AD56492193C862_OFFSET))(a1, a2);
		}
	};
}

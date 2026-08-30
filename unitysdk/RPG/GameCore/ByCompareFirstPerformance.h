#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_091519BBABE7344F_OFFSET UNITYSDK_OFFSET(0x1CEC26C0)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_393A43275D828BA8_OFFSET UNITYSDK_OFFSET(0x1CEC2690)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_66981692B9CB2D7B_OFFSET UNITYSDK_OFFSET(0x1CEC24E0)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_BDC165359FE99D16_OFFSET UNITYSDK_OFFSET(0x1CEC2520)
#define RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC2510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFirstPerformance_TypeDefinitionIndex = 20850;

	class ByCompareFirstPerformance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66981692B9CB2D7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_66981692B9CB2D7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDC165359FE99D16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_BDC165359FE99D16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_393A43275D828BA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_393A43275D828BA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_091519BBABE7344F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIRSTPERFORMANCE_METHOD_4_091519BBABE7344F_OFFSET))(a1, a2);
		}
	};
}

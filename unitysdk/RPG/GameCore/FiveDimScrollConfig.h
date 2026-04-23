#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurveWithMultiplier; }
namespace RPG::GameCore { class FloatCurveWithYMultiplier; }

#define RPG_GAMECORE_FIVEDIMSCROLLCONFIG_METHOD_2_167BD1C33B74A907_OFFSET UNITYSDK_OFFSET(0x189193C0)
#define RPG_GAMECORE_FIVEDIMSCROLLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18919510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimScrollConfig_TypeDefinitionIndex = 15789;

	class FiveDimScrollConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollLeft; // 0x10
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollRight; // 0x18
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollUp; // 0x20
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollDown; // 0x28
		::RPG::GameCore::FloatCurveWithMultiplier* EdgeDampingLeft; // 0x30
		::RPG::GameCore::FloatCurveWithMultiplier* EdgeDampingRight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_167BD1C33B74A907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimScrollConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimScrollConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLCONFIG_METHOD_2_167BD1C33B74A907_OFFSET))(a1, a2);
		}
	};
}

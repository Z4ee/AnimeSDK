#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_579A2E3EADF5CE17_OFFSET UNITYSDK_OFFSET(0x1D5D42F0)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_6F772A375F21D33C_OFFSET UNITYSDK_OFFSET(0x1D5D4250)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D42B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleHitCountUITop_TypeDefinitionIndex = 22895;

	class ToggleHitCountUITop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x20
		::RPG::GameCore::DynamicFloat* PastCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F772A375F21D33C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleHitCountUITop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleHitCountUITop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_6F772A375F21D33C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_579A2E3EADF5CE17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_579A2E3EADF5CE17_OFFSET))(a1, a2);
		}
	};
}

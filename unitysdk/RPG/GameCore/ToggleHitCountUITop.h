#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_579A2E3EADF5CE17_OFFSET UNITYSDK_OFFSET(0x19DEA8F0)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_FEC5E0E7D69183C7_OFFSET UNITYSDK_OFFSET(0x19DEA820)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEA8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleHitCountUITop_TypeDefinitionIndex = 21899;

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

		static ::System::Void Method_3_FEC5E0E7D69183C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleHitCountUITop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleHitCountUITop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_FEC5E0E7D69183C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_579A2E3EADF5CE17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_METHOD_3_579A2E3EADF5CE17_OFFSET))(a1, a2);
		}
	};
}

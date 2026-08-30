#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_METHOD_3_9DA017B6982CFF6B_OFFSET UNITYSDK_OFFSET(0x1E344BF0)
#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_METHOD_3_F04EE940FFF5082A_OFFSET UNITYSDK_OFFSET(0x1E344C40)
#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E344C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CirclePointGeneratorConfig_TypeDefinitionIndex = 15453;

	class CirclePointGeneratorConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::Single StartAngle; // 0x18
		::System::Single DistanceInerval; // 0x1C
		::System::Single AngleInterval; // 0x20
		::System::UInt32 DistanceInervalRepeatCount; // 0x24
		::System::Single MaxAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DA017B6982CFF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CirclePointGeneratorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CirclePointGeneratorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_METHOD_3_9DA017B6982CFF6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F04EE940FFF5082A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CirclePointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CirclePointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_METHOD_3_F04EE940FFF5082A_OFFSET))(a1, a2);
		}
	};
}

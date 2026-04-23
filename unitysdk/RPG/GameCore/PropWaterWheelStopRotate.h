#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_METHOD_3_231C5BB02AD4BBC2_OFFSET UNITYSDK_OFFSET(0x18C7CFC0)
#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_METHOD_3_E05690554F380F99_OFFSET UNITYSDK_OFFSET(0x18C7D1D0)
#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7D0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropWaterWheelStopRotate_TypeDefinitionIndex = 21021;

	class PropWaterWheelStopRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetStopPoint; // 0x20
		::RPG::GameCore::DynamicString* DockPointIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_231C5BB02AD4BBC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWaterWheelStopRotate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWaterWheelStopRotate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_METHOD_3_231C5BB02AD4BBC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E05690554F380F99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_METHOD_3_E05690554F380F99_OFFSET))(a1, a2);
		}
	};
}

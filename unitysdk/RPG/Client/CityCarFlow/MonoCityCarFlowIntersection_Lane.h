#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_Rule; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_LANE__CTOR_OFFSET UNITYSDK_OFFSET(0x93E00D0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_Lane_TypeDefinitionIndex = 64547;

	class MonoCityCarFlowIntersection_Lane : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x10
		::System::String* Name; // 0x18
		::System::Single Offset; // 0x20
		::System::Boolean Positive; // 0x24
		::System::Boolean IgnoreTrafficRules; // 0x25
		::System::Single SpeedMultiplier; // 0x28
		::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_Rule* Rule; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_LANE__CTOR_OFFSET))(this);
		}
	};
}

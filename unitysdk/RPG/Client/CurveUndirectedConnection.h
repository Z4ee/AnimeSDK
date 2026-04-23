#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_CURVEUNDIRECTEDCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E8BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedConnection_TypeDefinitionIndex = 63227;

	class CurveUndirectedConnection : public ::System::Object
	{
	public:
		::RPG::Client::ECurveEdgePoint point; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDCONNECTION__CTOR_OFFSET))(this);
		}
	};
}

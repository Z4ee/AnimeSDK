#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_CURVEEDGEPOINTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x138960)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveEdgePointSetting_TypeDefinitionIndex = 64145;

	struct alignas(8) CurveEdgePointSetting
	{
		::RPG::Client::ECurveEdgePoint point; // 0x10
		::System::String* edgeName; // 0x18

		/*
		::System::Void _ctor(::RPG::Client::CurveEdgePoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINTSETTING__CTOR_OFFSET))(this, a1);
		}
		*/
	};
}

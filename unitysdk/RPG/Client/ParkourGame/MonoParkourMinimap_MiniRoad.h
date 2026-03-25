#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP_MINIROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F01920)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourMinimap_MiniRoad_TypeDefinitionIndex = 60810;

	class MonoParkourMinimap_MiniRoad : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP_MINIROAD__CTOR_OFFSET))(this);
		}
	};
}

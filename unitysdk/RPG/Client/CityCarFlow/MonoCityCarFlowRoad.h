#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowRoad_Lane; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_AWAKE_OFFSET UNITYSDK_OFFSET(0x93E0120)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x93E01E0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowRoad_TypeDefinitionIndex = 64552;

	class MonoCityCarFlowRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x18
		::BansheeGz::BGSpline::Components::BGCcMath* Math; // 0x20
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowRoad_Lane*>* Lanes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_AWAKE_OFFSET))(this);
		}
	};
}

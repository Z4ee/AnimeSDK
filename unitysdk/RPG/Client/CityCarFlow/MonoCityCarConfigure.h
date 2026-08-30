#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityCarFlow/MonoCityCarConfigure_QualitySetting.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_660;
namespace RPG::Client::CityCarFlow { class MonoCityCarEmitter; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowRoad; }
namespace RPG::Client::CityCarFlow { class MonoCityCarIRI; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONFIGURE_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0x1BBFDA90)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFDB20)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarConfigure_TypeDefinitionIndex = 80840;

	class MonoCityCarConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 WorldUpAxis; // 0x18
		::RPG::Client::CityCarFlow::MonoCityCarIRI* IRI; // 0x28
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarEmitter*>* Emitters; // 0x30
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowRoad*>* Roads; // 0x38
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection*>* Intersections; // 0x40
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarConfigure_QualitySetting>* QualitySettings; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONFIGURE__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_660* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_660*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONFIGURE_CREATEMANAGER_OFFSET))(this, a1, a2);
		}
	};
}

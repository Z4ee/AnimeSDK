#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_0AAA29E827EB555D;
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_Lane; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_SignRule; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA08DBB0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_TypeDefinitionIndex = 72593;

	class MonoCityCarFlowIntersection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_Lane*>* Lanes; // 0x18
		::System::String* SignName; // 0x20
		::System::Single SignRuleTimeOffset; // 0x28
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRule*>* SignRules; // 0x30
		::Class_1_0AAA29E827EB555D* Proxy; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION__CTOR_OFFSET))(this);
		}
	};
}

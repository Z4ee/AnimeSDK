#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_RULE__CTOR_OFFSET UNITYSDK_OFFSET(0x93E0220)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowRoad_Rule_TypeDefinitionIndex = 64554;

	class MonoCityCarFlowRoad_Rule : public ::System::Object
	{
	public:
		::System::String* IntersectionName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_RULE__CTOR_OFFSET))(this);
		}
	};
}

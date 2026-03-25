#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_RULE__CTOR_OFFSET UNITYSDK_OFFSET(0x93E00E0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_Rule_TypeDefinitionIndex = 64548;

	class MonoCityCarFlowIntersection_Rule : public ::System::Object
	{
	public:
		::System::String* ConnectRoadName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_RULE__CTOR_OFFSET))(this);
		}
	};
}

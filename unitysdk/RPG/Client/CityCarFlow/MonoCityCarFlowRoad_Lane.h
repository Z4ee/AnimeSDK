#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CityCarFlow { class MonoCityCarFlowRoad_Rule; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_LANE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC23FF0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowRoad_Lane_TypeDefinitionIndex = 80854;

	class MonoCityCarFlowRoad_Lane : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean Positive; // 0x18
		::System::Single Offset; // 0x1C
		::System::Single Width; // 0x20
		::System::Single Weight; // 0x24
		::System::Single SpeedMultiplier; // 0x28
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowRoad_Rule*>* Rules; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_LANE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_NAVMESHLINKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1826FEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int NavMeshLinkParams_TypeDefinitionIndex = 68605;

	class NavMeshLinkParams : public ::System::Object
	{
	public:
		::System::Int32 AgentType; // 0x10
		::UnityEngine::Vector3 StartPoint; // 0x14
		::UnityEngine::Vector3 EndPoint; // 0x20
		::System::Single Width; // 0x2C
		::System::Int32 CostModifier; // 0x30
		::System::Boolean AutoUpdatePosition; // 0x34
		::System::Boolean Bidirectional; // 0x35
		::System::Int32 AreaType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMESHLINKPARAMS__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardWayPointMutexStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardIdentifier; }

#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9B9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexConfig_TypeDefinitionIndex = 55782;

	class BillboardWayPointMutexConfig : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardIdentifier* BillboardIdentifier; // 0x10
		::RPG::Client::BillboardWayPointMutexStatus Status; // 0x18
		::System::Boolean IsActive; // 0x1C
		::System::Boolean IsPlayingAnim; // 0x1D

		::System::Void _ctor(::RPG::Client::BillboardWayPointMutexStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardWayPointMutexStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXCONFIG__CTOR_OFFSET))(this, status);
		}
	};
}

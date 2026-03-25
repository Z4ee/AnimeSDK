#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardIdentifier; }

#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_MUTEXCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x91F3740)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_MUTEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x91F2A80)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexManager_MutexConfig_TypeDefinitionIndex = 48990;

	class BillboardWayPointMutexManager_MutexConfig : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardIdentifier* BillboardIdentifier; // 0x10
		::System::Boolean Status; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_MUTEXCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::Billboard::BillboardIdentifier* billboardIdentifier, ::System::Boolean status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_MUTEXCONFIG__CTOR_1_OFFSET))(this, billboardIdentifier, status);
		}
	};
}

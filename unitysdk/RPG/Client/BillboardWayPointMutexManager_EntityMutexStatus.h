#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_ENTITYMUTEXSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0xC95CAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexManager_EntityMutexStatus_TypeDefinitionIndex = 60600;

	class BillboardWayPointMutexManager_EntityMutexStatus : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* MutexStatus; // 0x10
		::Il2CppArray<::System::Boolean>* PlayingAnimStatus; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_ENTITYMUTEXSTATUS__CTOR_OFFSET))(this);
		}
	};
}

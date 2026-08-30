#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_ROADRASHFIREPROJECTILELAUNCHEDNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFF860)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashFireProjectileLaunchedNotifyData_TypeDefinitionIndex = 80347;

	class RoadRashFireProjectileLaunchedNotifyData : public ::System::Object
	{
	public:
		::System::Int32 OwnerEntityId; // 0x10
		::System::Int32 ActualFireLevel; // 0x14
		::Il2CppArray<::System::Int32>* TargetEntityIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_ROADRASHFIREPROJECTILELAUNCHEDNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}

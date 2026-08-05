#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7E4880)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E4820)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E4890)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E48E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E4940)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_CrowdPoolKey_TypeDefinitionIndex = 48991;

	struct alignas(4) NPCCrowdSpawnManager_CrowdPoolKey
	{
		::System::Int32 TagID; // 0x10
		::System::Int32 AvatarID; // 0x14

		::System::Void _ctor(::System::Int32 tagID, ::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY__CTOR_OFFSET))(this, tagID, avatarID);
		}

		::System::Boolean Equals(::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CROWDPOOLKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

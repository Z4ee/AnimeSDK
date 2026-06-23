#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_ADD_OFFSET UNITYSDK_OFFSET(0x1178C000)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1178C170)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1178C1D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1178BF90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_MovePlatformAttachSparseCache_TypeDefinitionIndex = 51075;

	class NPCAbilityManager_MovePlatformAttachSparseCache : public ::System::Object
	{
	public:
		::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment> AttachedTransforms; // 0x10
		::Unity::Collections::NativeList_1<::System::Int32> AttachedIndices; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Int32 abilityIdx, ::NPCCrowd::Ability::FTransformFragment& transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_ADD_OFFSET))(this, abilityIdx, transform);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_MOVEPLATFORMATTACHSPARSECACHE_DISPOSE_OFFSET))(this);
		}
	};
}

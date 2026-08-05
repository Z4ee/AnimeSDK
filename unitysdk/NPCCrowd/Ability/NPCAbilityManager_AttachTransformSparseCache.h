#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_ADDORREPLACE_OFFSET UNITYSDK_OFFSET(0x12603AC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_ADD_OFFSET UNITYSDK_OFFSET(0x12603940)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12603EC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12603F20)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_TRYGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12603CD0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x126038D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_AttachTransformSparseCache_TypeDefinitionIndex = 78961;

	class NPCAbilityManager_AttachTransformSparseCache : public ::System::Object
	{
	public:
		::Unity::Collections::NativeList_1<::System::Int32> AttachedIndices; // 0x10
		::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment> AttachedTransforms; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Int32 abilityIdx, ::NPCCrowd::Ability::FTransformFragment& transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_ADD_OFFSET))(this, abilityIdx, transform);
		}

		::System::Void AddOrReplace(::System::Int32 abilityIdx, ::NPCCrowd::Ability::FTransformFragment& transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_ADDORREPLACE_OFFSET))(this, abilityIdx, transform);
		}

		::System::Boolean TryGetTransform(::System::Int32 abilityIdx, ::NPCCrowd::Ability::FTransformFragment& transform)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_TRYGETTRANSFORM_OFFSET))(this, abilityIdx, transform);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ATTACHTRANSFORMSPARSECACHE_DISPOSE_OFFSET))(this);
		}
	};
}

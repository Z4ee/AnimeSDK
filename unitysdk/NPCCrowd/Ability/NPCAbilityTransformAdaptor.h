#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_GET_ACCESSARRAY_OFFSET UNITYSDK_OFFSET(0xE559270)
#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xE5594D0)
#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_REBUILD_OFFSET UNITYSDK_OFFSET(0xE5592C0)
#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_REPLACE_OFFSET UNITYSDK_OFFSET(0xE559390)
#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_SAFEDISPOSE_OFFSET UNITYSDK_OFFSET(0xE559460)
#define NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE559220)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityTransformAdaptor_TypeDefinitionIndex = 88717;

	class NPCAbilityTransformAdaptor : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* _transformArray; // 0x10
		::UnityEngine::Jobs::TransformAccessArray _transform; // 0x18
		::System::Boolean _shouldRebuild; // 0x20

		::System::Void _ctor(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR__CTOR_OFFSET))(this, size);
		}

		::UnityEngine::Jobs::TransformAccessArray get_AccessArray()
		{
			return ((::UnityEngine::Jobs::TransformAccessArray(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_GET_ACCESSARRAY_OFFSET))(this);
		}

		::System::Void Replace(::System::Int32 index, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_REPLACE_OFFSET))(this, index, transform);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_REBUILD_OFFSET))(this);
		}

		::System::Void SafeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_SAFEDISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Item(::System::Int32 abilityIndex)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYTRANSFORMADAPTOR_GET_ITEM_OFFSET))(this, abilityIndex);
		}
	};
}

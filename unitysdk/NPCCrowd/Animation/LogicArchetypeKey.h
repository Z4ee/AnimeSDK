#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6AA640)
#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x6AA5D0)
#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6AA650)
#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6AA700)
#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6AA6A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int LogicArchetypeKey_TypeDefinitionIndex = 81957;

	struct alignas(1) LogicArchetypeKey
	{
		::System::Boolean UseStateMachine; // 0x10
		::System::Boolean UseMontage; // 0x11

		::System::Boolean Equals(::NPCCrowd::Animation::LogicArchetypeKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::LogicArchetypeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

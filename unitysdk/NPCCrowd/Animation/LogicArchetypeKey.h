#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x570CD0)
#define NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x570CE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int LogicArchetypeKey_TypeDefinitionIndex = 73253;

	struct alignas(1) LogicArchetypeKey
	{
		::System::Boolean UseStateMachine; // 0x10
		::System::Boolean UseMontage; // 0x11

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_LOGICARCHETYPEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_STATETREEHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x625290)
#define NPCCROWD_ABILITY_STATETREEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8AC2A0)
#define NPCCROWD_ABILITY_STATETREEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeHandle_TypeDefinitionIndex = 80250;

	struct alignas(4) StateTreeHandle
	{
		static ::NPCCrowd::Ability::StateTreeHandle* StaticGet_Invalid()
		{
			return (::NPCCrowd::Ability::StateTreeHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeHandle_TypeDefinitionIndex)->GetStaticField(0xF4B0);
		}
		::System::Int32 Index; // 0x10

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEHANDLE__CTOR_OFFSET))(this, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEHANDLE_GET_ISVALID_OFFSET))(this);
		}
	};
}

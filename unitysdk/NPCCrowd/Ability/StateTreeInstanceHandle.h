#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x5B2130)
#define NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C42A0)
#define NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeInstanceHandle_TypeDefinitionIndex = 59812;

	struct alignas(4) StateTreeInstanceHandle
	{
		static ::NPCCrowd::Ability::StateTreeInstanceHandle* StaticGet_Invalid()
		{
			return (::NPCCrowd::Ability::StateTreeInstanceHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeInstanceHandle_TypeDefinitionIndex)->GetStaticField(0xF4C0);
		}
		::System::Int32 Index; // 0x10

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE__CTOR_OFFSET))(this, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEINSTANCEHANDLE_GET_ISVALID_OFFSET))(this);
		}
	};
}

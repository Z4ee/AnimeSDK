#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_ENVIRONMENTSYSTEM_KEYWORDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem_KeywordGroup_TypeDefinitionIndex = 69748;

	struct alignas(8) EnvironmentSystem_KeywordGroup
	{
		::System::String* prefix; // 0x10
		::Il2CppArray<::System::String*>* keywords; // 0x18

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_KEYWORDGROUP__CTOR_OFFSET))(this, a1, a2);
		}
	};
}

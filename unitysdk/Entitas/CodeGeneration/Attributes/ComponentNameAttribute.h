#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_COMPONENTNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7DE0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int ComponentNameAttribute_TypeDefinitionIndex = 9734;

	class ComponentNameAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* componentNames; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_COMPONENTNAMEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}

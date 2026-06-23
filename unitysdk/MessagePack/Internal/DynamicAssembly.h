#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection::Emit { class AssemblyBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_1_OFFSET UNITYSDK_OFFSET(0x1BC54140)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_2_OFFSET UNITYSDK_OFFSET(0x1BC54160)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x1BC54120)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC540D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssembly_TypeDefinitionIndex = 29461;

	class DynamicAssembly : public ::System::Object
	{
	public:
		::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder; // 0x10
		::System::Reflection::Emit::ModuleBuilder* moduleBuilder; // 0x18

		::System::Void _ctor(::System::String* moduleName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET))(this, moduleName);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* name, ::System::Reflection::TypeAttributes attr)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET))(this, name, attr);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_1(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_1_OFFSET))(this, name, attr, parent);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_2(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent, ::Il2CppArray<::System::Type*>* interfaces)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_2_OFFSET))(this, name, attr, parent, interfaces);
		}
	};
}

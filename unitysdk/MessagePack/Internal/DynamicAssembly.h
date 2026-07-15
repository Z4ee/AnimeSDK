#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class AssemblyBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x14F82990)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F829C0)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x14F82940)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssembly_TypeDefinitionIndex = 7250;

	class DynamicAssembly : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AvoidDynamicCode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicAssembly_TypeDefinitionIndex)->GetStaticField(0x40E0);
		}
		::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder; // 0x10
		::System::Reflection::Emit::ModuleBuilder* moduleBuilder; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CCTOR_OFFSET))();
		}

		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* a1, ::System::Reflection::TypeAttributes a2, ::System::Type* a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}

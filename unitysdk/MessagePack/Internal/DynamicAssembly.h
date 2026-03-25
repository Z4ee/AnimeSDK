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

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x15D47000)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D47030)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x15D46FB0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssembly_TypeDefinitionIndex = 9144;

	class DynamicAssembly : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AvoidDynamicCode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicAssembly_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder; // 0x10
		::System::Reflection::Emit::ModuleBuilder* moduleBuilder; // 0x18

		::System::Void _ctor(::System::String* moduleName, ::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>* skipVisibilityChecksTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CTOR_OFFSET))(this, moduleName, skipVisibilityChecksTo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY__CCTOR_OFFSET))();
		}

		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent, ::Il2CppArray<::System::Type*>* interfaces)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET))(this, name, attr, parent, interfaces);
		}
	};
}

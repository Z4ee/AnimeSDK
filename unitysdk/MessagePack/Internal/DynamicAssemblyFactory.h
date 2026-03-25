#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Reflection { class AssemblyName; }

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY_GETDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x15D47110)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x15D47040)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__GETDYNAMICASSEMBLY_G__NEWASSEMBLY_4_0_OFFSET UNITYSDK_OFFSET(0x15D47470)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssemblyFactory_TypeDefinitionIndex = 9145;

	class DynamicAssemblyFactory : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>* lastCreatedDynamicAssemblySkipVisibilityChecks; // 0x10
		::MessagePack::Internal::DynamicAssembly* singletonAssembly; // 0x18
		::System::String* moduleName; // 0x20

		::System::Void _ctor(::System::String* moduleName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__CTOR_OFFSET))(this, moduleName);
		}

		::MessagePack::Internal::DynamicAssembly* GetDynamicAssembly(::System::Type* type, ::System::Boolean allowPrivate)
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY_GETDYNAMICASSEMBLY_OFFSET))(this, type, allowPrivate);
		}

		::MessagePack::Internal::DynamicAssembly* _GetDynamicAssembly_g__NewAssembly_4_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__GETDYNAMICASSEMBLY_G__NEWASSEMBLY_4_0_OFFSET))(this);
		}
	};
}

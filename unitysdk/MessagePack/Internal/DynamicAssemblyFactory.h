#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Reflection { class AssemblyName; }

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY_GETDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1B68D070)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68CF30)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__GETDYNAMICASSEMBLY_G__NEWASSEMBLY_4_0_OFFSET UNITYSDK_OFFSET(0x1B68D3D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssemblyFactory_TypeDefinitionIndex = 7237;

	class DynamicAssemblyFactory : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>* lastCreatedDynamicAssemblySkipVisibilityChecks; // 0x10
		::System::String* moduleName; // 0x18
		::MessagePack::Internal::DynamicAssembly* singletonAssembly; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__CTOR_OFFSET))(this, a1);
		}

		::MessagePack::Internal::DynamicAssembly* GetDynamicAssembly(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY_GETDYNAMICASSEMBLY_OFFSET))(this, a1, a2);
		}

		::MessagePack::Internal::DynamicAssembly* _GetDynamicAssembly_g__NewAssembly_4_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLYFACTORY__GETDYNAMICASSEMBLY_G__NEWASSEMBLY_4_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_RESOLVERTYPE_OFFSET UNITYSDK_OFFSET(0x15D5D8F0)
#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5D8E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int GeneratedAssemblyMessagePackResolverAttribute_TypeDefinitionIndex = 9147;

	class GeneratedAssemblyMessagePackResolverAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _ResolverType_k__BackingField; // 0x10
		::System::Int32 _MajorVersion_k__BackingField; // 0x18
		::System::Int32 _MinorVersion_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Type* resolverType, ::System::Int32 majorVersion, ::System::Int32 minorVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET))(this, resolverType, majorVersion, minorVersion);
		}

		::System::Type* get_ResolverType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_RESOLVERTYPE_OFFSET))(this);
		}
	};
}

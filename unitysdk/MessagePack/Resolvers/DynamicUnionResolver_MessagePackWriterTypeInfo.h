#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x181912B0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex = 7218;

	class DynamicUnionResolver_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xA3C0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xA3C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xA3D0);
		}
		static ::System::Reflection::TypeInfo** StaticGet_WriterTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xA3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

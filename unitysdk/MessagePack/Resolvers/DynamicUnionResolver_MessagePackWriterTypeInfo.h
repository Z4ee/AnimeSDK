#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17386860)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex = 9315;

	class DynamicUnionResolver_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo** StaticGet_WriterTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45260);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45268);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45270);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

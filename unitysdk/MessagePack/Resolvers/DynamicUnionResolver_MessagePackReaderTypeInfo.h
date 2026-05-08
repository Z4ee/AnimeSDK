#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19859480)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex = 27181;

	class DynamicUnionResolver_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo** StaticGet_ReaderTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205C0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadString()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205D8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205E8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x205F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

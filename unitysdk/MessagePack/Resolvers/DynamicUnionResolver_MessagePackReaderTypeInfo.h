#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17386480)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex = 9314;

	class DynamicUnionResolver_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo** StaticGet_ReaderTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x452F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x452F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadString()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45300);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45308);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45310);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45318);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45320);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x45328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

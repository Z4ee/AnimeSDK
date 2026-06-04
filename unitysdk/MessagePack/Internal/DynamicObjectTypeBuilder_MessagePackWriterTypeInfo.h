#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18167EC0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex = 7267;

	class DynamicObjectTypeBuilder_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9650);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9658);
		}
		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9660);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9668);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9670);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0x9678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

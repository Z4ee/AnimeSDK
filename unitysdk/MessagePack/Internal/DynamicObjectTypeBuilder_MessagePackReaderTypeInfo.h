#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D802BF0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex = 29296;

	class DynamicObjectTypeBuilder_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23D80);
		}
		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23D88);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23D90);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23D98);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23DA0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x23DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

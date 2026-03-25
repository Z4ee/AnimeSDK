#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D5CF80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex = 9168;

	class DynamicObjectTypeBuilder_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B78);
		}
		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B88);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B90);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x21B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

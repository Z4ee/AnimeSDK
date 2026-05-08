#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F64A0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr_TypeDefinitionIndex = 26702;

	class DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_Arguments()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr_TypeDefinitionIndex)->GetStaticField(0x1FCB0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_FormatterType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr_TypeDefinitionIndex)->GetStaticField(0x1FCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR__CCTOR_OFFSET))();
		}
	};
}

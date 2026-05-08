#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_CODEGENHELPERSTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A850BD0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_CodeGenHelpersTypeInfo_TypeDefinitionIndex = 26719;

	class DynamicObjectTypeBuilder_CodeGenHelpersTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedStringBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_CodeGenHelpersTypeInfo_TypeDefinitionIndex)->GetStaticField(0x201F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_CODEGENHELPERSTYPEINFO__CCTOR_OFFSET))();
		}
	};
}

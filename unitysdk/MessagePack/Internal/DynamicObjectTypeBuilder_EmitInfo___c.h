#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4095C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D409600)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo___c_TypeDefinitionIndex = 29288;

	class DynamicObjectTypeBuilder_EmitInfo___c : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::DynamicObjectTypeBuilder_EmitInfo___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicObjectTypeBuilder_EmitInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo___c_TypeDefinitionIndex)->GetStaticField(0x244E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CTOR_OFFSET))(this);
		}
	};
}

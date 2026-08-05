#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BAB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BAF0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___c_TypeDefinitionIndex = 31047;

	class DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___c : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___c_TypeDefinitionIndex)->GetStaticField(0x26120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_MESSAGEPACKFORMATTERATTR___C__CTOR_OFFSET))(this);
		}
	};
}

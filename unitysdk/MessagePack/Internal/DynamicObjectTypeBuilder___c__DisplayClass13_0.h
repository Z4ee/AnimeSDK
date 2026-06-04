#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS13_0__BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x18165450)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18162010)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass13_0_TypeDefinitionIndex = 7274;

	class DynamicObjectTypeBuilder___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildDeserializeInternalCreateInstanceWithArguments_b__0(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS13_0__BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_B__0_OFFSET))(this, a1);
		}
	};
}

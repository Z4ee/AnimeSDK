#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_B__0_OFFSET UNITYSDK_OFFSET(0x166A2280)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1669D9D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass14_0_TypeDefinitionIndex = 7267;

	class DynamicObjectTypeBuilder___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildDeserializeInternalDeserializationInfoArrayStringKey_b__0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_B__0_OFFSET))(this, a1);
		}
	};
}

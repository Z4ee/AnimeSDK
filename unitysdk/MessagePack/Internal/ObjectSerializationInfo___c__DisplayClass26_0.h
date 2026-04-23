#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1735BDD0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS26_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1735CDA0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c__DisplayClass26_0_TypeDefinitionIndex = 9389;

	class ObjectSerializationInfo___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS26_0___CTOR_B__0_OFFSET))(this, cp);
		}
	};
}

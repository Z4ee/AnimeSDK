#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_1__CREATEORNULL_B__12_OFFSET UNITYSDK_OFFSET(0x1A2A2470)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A2460)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c__DisplayClass29_1_TypeDefinitionIndex = 27834;

	class ObjectSerializationInfo___c__DisplayClass29_1 : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* m; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateOrNull_b__12(::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_1__CREATEORNULL_B__12_OFFSET))(this, p);
		}
	};
}

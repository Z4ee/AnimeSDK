#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CREATEORNULL_B__11_OFFSET UNITYSDK_OFFSET(0x1BC5A7B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CREATEORNULL_B__1_OFFSET UNITYSDK_OFFSET(0x1BC5A750)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5A520)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c__DisplayClass29_0_TypeDefinitionIndex = 30390;

	class ObjectSerializationInfo___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* constructorParameters; // 0x10
		::System::Boolean allowPrivate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateOrNull_b__1(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CREATEORNULL_B__1_OFFSET))(this, x);
		}

		::System::Boolean _CreateOrNull_b__11(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS29_0__CREATEORNULL_B__11_OFFSET))(this, m);
		}
	};
}

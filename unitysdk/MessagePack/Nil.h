#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESSAGEPACK_NIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x48CD40)
#define MESSAGEPACK_NIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x949200)
#define MESSAGEPACK_NIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x304470)
#define MESSAGEPACK_NIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x949250)
#define MESSAGEPACK_NIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF27CE0)

namespace MessagePack
{
	inline static constexpr unsigned int Nil_TypeDefinitionIndex = 26872;

	struct alignas(1) Nil
	{
		static ::MessagePack::Nil* StaticGet_Default()
		{
			return (::MessagePack::Nil*)Il2CppClass::FromTypeDefinitionIndex(Nil_TypeDefinitionIndex)->GetStaticField(0x49E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::MessagePack::Nil other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Nil))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_TOSTRING_OFFSET))(this);
		}
	};
}

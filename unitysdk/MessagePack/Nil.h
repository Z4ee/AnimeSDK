#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESSAGEPACK_NIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BFAAD0)
#define MESSAGEPACK_NIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3828390)
#define MESSAGEPACK_NIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define MESSAGEPACK_NIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38283E0)

namespace MessagePack
{
	inline static constexpr unsigned int Nil_TypeDefinitionIndex = 7189;

	struct alignas(1) Nil
	{
		static ::MessagePack::Nil* StaticGet_Default()
		{
			return (::MessagePack::Nil*)Il2CppClass::FromTypeDefinitionIndex(Nil_TypeDefinitionIndex)->GetStaticField(0x43A0);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MessagePack::Nil a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Nil))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_1_OFFSET))(this, a1);
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

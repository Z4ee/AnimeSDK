#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C6EC30)
#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6EBC0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C6EC20)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x3C6EB90)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xB59640)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET UNITYSDK_OFFSET(0x182E0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EE14C70)
#define SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C6EC50)
#define SYSTEM_BUFFERS_STANDARDFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6EBB0)

namespace System::Buffers
{
	inline static constexpr unsigned int StandardFormat_TypeDefinitionIndex = 4996;

	struct alignas(1) StandardFormat
	{
		::System::Byte _format; // 0x10
		::System::Byte _precision; // 0x11

		::System::Void _ctor(::System::Char a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Char get_Symbol()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET))(this);
		}

		::System::Byte get_Precision()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET))(this);
		}

		static ::System::Buffers::StandardFormat op_Implicit(::System::Char a1)
		{
			return ((::System::Buffers::StandardFormat(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Buffers::StandardFormat a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::StandardFormat))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET))(this);
		}
	};
}

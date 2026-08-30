#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define R3_UNIT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B727B0)
#define R3_UNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7B0D0)
#define R3_UNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E002B0)
#define R3_UNIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B72800)
#define R3_UNIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF19FB0)

namespace R3
{
	inline static constexpr unsigned int Unit_TypeDefinitionIndex = 35287;

	struct alignas(1) Unit
	{
		static ::System::Object** StaticGet_Box()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Unit_TypeDefinitionIndex)->GetStaticField(0xDB0);
		}
		static ::R3::Unit* StaticGet_Default()
		{
			return (::R3::Unit*)Il2CppClass::FromTypeDefinitionIndex(Unit_TypeDefinitionIndex)->GetStaticField(0x710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_UNIT__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::R3::Unit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + R3_UNIT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + R3_UNIT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_UNIT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_UNIT_TOSTRING_OFFSET))(this);
		}
	};
}

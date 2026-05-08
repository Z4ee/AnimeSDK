#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_37738F4372A852AF___C_METHOD_1_19AD88039E2EEBF8_OFFSET UNITYSDK_OFFSET(0xE8F0A70)
#define CLASS_3_37738F4372A852AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8F0A20)
#define CLASS_3_37738F4372A852AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F0A60)

inline static constexpr unsigned int Class_3_37738F4372A852AF___c_TypeDefinitionIndex = 79912;

class Class_3_37738F4372A852AF___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Single>** StaticGet___9__50_0()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_37738F4372A852AF___c_TypeDefinitionIndex)->GetStaticField(0x36790);
	}
	static ::Class_3_37738F4372A852AF___c** StaticGet___9()
	{
		return (::Class_3_37738F4372A852AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_37738F4372A852AF___c_TypeDefinitionIndex)->GetStaticField(0x36798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_19AD88039E2EEBF8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF___C_METHOD_1_19AD88039E2EEBF8_OFFSET))(this, a1, a2);
	}
};

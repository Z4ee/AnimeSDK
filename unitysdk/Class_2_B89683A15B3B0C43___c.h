#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B89683A15B3B0C43___C_METHOD_1_120F62204ABB4330_OFFSET UNITYSDK_OFFSET(0x13DC3240)
#define CLASS_2_B89683A15B3B0C43___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13DC3350)
#define CLASS_2_B89683A15B3B0C43___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DC31F0)
#define CLASS_2_B89683A15B3B0C43___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC3230)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43___c_TypeDefinitionIndex = 58981;

class Class_2_B89683A15B3B0C43___c : public ::System::Object
{
public:
	static ::Class_2_B89683A15B3B0C43___c** StaticGet___9()
	{
		return (::Class_2_B89683A15B3B0C43___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B89683A15B3B0C43___c_TypeDefinitionIndex)->GetStaticField(0x43F20);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__113_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B89683A15B3B0C43___c_TypeDefinitionIndex)->GetStaticField(0x43F28);
	}
	static ::System::Action** StaticGet___9__118_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B89683A15B3B0C43___c_TypeDefinitionIndex)->GetStaticField(0x43F30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_120F62204ABB4330(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43___C_METHOD_1_120F62204ABB4330_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};

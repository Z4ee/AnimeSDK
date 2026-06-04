#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FBC1BDB6569C7597___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B686B0)
#define CLASS_1_FBC1BDB6569C7597___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B686E0)
#define CLASS_1_FBC1BDB6569C7597___C__FROMHTTP_B__2_0_OFFSET UNITYSDK_OFFSET(0x13B68700)
#define CLASS_1_FBC1BDB6569C7597___C__FROMSERVERARCHIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x13B686F0)

inline static constexpr unsigned int Class_1_FBC1BDB6569C7597___c_TypeDefinitionIndex = 63158;

class Class_1_FBC1BDB6569C7597___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBC1BDB6569C7597___c_TypeDefinitionIndex)->GetStaticField(0x61EB0);
	}
	static ::Class_1_FBC1BDB6569C7597___c** StaticGet___9()
	{
		return (::Class_1_FBC1BDB6569C7597___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBC1BDB6569C7597___c_TypeDefinitionIndex)->GetStaticField(0x61EB8);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBC1BDB6569C7597___c_TypeDefinitionIndex)->GetStaticField(0x61EC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBC1BDB6569C7597___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBC1BDB6569C7597___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FromServerArchive_b__1_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBC1BDB6569C7597___C__FROMSERVERARCHIVE_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 _FromHttp_b__2_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBC1BDB6569C7597___C__FROMHTTP_B__2_0_OFFSET))(this, a1);
	}
};

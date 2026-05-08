#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6D9BF697BF40AC3D___C_METHOD_1_91C6006919B4F395_OFFSET UNITYSDK_OFFSET(0xF0B7200)
#define CLASS_2_6D9BF697BF40AC3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0B71B0)
#define CLASS_2_6D9BF697BF40AC3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B71F0)

inline static constexpr unsigned int Class_2_6D9BF697BF40AC3D___c_TypeDefinitionIndex = 70644;

class Class_2_6D9BF697BF40AC3D___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Char>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D9BF697BF40AC3D___c_TypeDefinitionIndex)->GetStaticField(0x35E90);
	}
	static ::Class_2_6D9BF697BF40AC3D___c** StaticGet___9()
	{
		return (::Class_2_6D9BF697BF40AC3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D9BF697BF40AC3D___c_TypeDefinitionIndex)->GetStaticField(0x35E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D9BF697BF40AC3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9BF697BF40AC3D___C__CTOR_OFFSET))(this);
	}

	::System::Char Method_1_91C6006919B4F395(::System::String* a1)
	{
		return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D9BF697BF40AC3D___C_METHOD_1_91C6006919B4F395_OFFSET))(this, a1);
	}
};

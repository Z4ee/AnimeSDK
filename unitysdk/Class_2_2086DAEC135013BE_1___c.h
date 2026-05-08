#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_2086DAEC135013BE_1___C_METHOD_1_43C1F46AF7E34CCB_OFFSET UNITYSDK_OFFSET(0x161DDC80)
#define CLASS_2_2086DAEC135013BE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161DDC30)
#define CLASS_2_2086DAEC135013BE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161DDC70)

inline static constexpr unsigned int Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex = 58342;

class Class_2_2086DAEC135013BE_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_1E89A1A01EA84819*, ::Class_2_1E89A1A01EA84819*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_1E89A1A01EA84819*, ::Class_2_1E89A1A01EA84819*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex)->GetStaticField(0x33D10);
	}
	static ::Class_2_2086DAEC135013BE_1___c** StaticGet___9()
	{
		return (::Class_2_2086DAEC135013BE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex)->GetStaticField(0x33D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C__CTOR_OFFSET))(this);
	}

	::Class_2_1E89A1A01EA84819* Method_1_43C1F46AF7E34CCB(::Class_2_1E89A1A01EA84819* a1)
	{
		return ((::Class_2_1E89A1A01EA84819*(*)(::PVOID, ::Class_2_1E89A1A01EA84819*))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C_METHOD_1_43C1F46AF7E34CCB_OFFSET))(this, a1);
	}
};

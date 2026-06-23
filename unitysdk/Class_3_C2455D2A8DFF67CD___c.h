#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C2455D2A8DFF67CD___C_METHOD_1_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x14837330)
#define CLASS_3_C2455D2A8DFF67CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148372E0)
#define CLASS_3_C2455D2A8DFF67CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14837320)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex = 78642;

class Class_3_C2455D2A8DFF67CD___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex)->GetStaticField(0x3B9D0);
	}
	static ::Class_3_C2455D2A8DFF67CD___c** StaticGet___9()
	{
		return (::Class_3_C2455D2A8DFF67CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex)->GetStaticField(0x3B9D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BDCD8817E21E5A1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C_METHOD_1_4BDCD8817E21E5A1_OFFSET))(this, a1);
	}
};

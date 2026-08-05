#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E3A7B298AF84D5C8;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A42664BCA86380DE___C_METHOD_1_3C8F24D16D1FC933_OFFSET UNITYSDK_OFFSET(0x14E979B0)
#define CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET UNITYSDK_OFFSET(0x14E979E0)
#define CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E97960)
#define CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E979A0)

inline static constexpr unsigned int Class_3_A42664BCA86380DE___c_TypeDefinitionIndex = 85242;

class Class_3_A42664BCA86380DE___c : public ::System::Object
{
public:
	static ::Class_3_A42664BCA86380DE___c** StaticGet___9()
	{
		return (::Class_3_A42664BCA86380DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x44720);
	}
	static ::System::Action_1<::Class_3_E3A7B298AF84D5C8*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::Class_3_E3A7B298AF84D5C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x44728);
	}
	static ::System::Action_1<::Class_3_E3A7B298AF84D5C8*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_E3A7B298AF84D5C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x44730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C8F24D16D1FC933(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_3C8F24D16D1FC933_OFFSET))(this, a1);
	}

	::System::Void Method_1_C805032703A305D8(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET))(this, a1);
	}
};

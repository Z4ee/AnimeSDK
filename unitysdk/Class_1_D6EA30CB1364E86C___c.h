#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_D6EA30CB1364E86C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x106B2630)
#define CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x106B2680)
#define CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_1_OFFSET UNITYSDK_OFFSET(0x106B2720)
#define CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_2_OFFSET UNITYSDK_OFFSET(0x106B27C0)
#define CLASS_1_D6EA30CB1364E86C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106B2670)

inline static constexpr unsigned int Class_1_D6EA30CB1364E86C___c_TypeDefinitionIndex = 53236;

class Class_1_D6EA30CB1364E86C___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6EA30CB1364E86C___c_TypeDefinitionIndex)->GetStaticField(0x28160);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6EA30CB1364E86C___c_TypeDefinitionIndex)->GetStaticField(0x28168);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6EA30CB1364E86C___c_TypeDefinitionIndex)->GetStaticField(0x28170);
	}
	static ::Class_1_D6EA30CB1364E86C___c** StaticGet___9()
	{
		return (::Class_1_D6EA30CB1364E86C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6EA30CB1364E86C___c_TypeDefinitionIndex)->GetStaticField(0x28178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_0_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_1_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C___C__CREATEITEM_B__1_2_OFFSET))(this);
	}
};

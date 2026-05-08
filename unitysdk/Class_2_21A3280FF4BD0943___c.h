#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_21A3280FF4BD0943___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13D88700)
#define CLASS_2_21A3280FF4BD0943___C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13D886F0)
#define CLASS_2_21A3280FF4BD0943___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13D886E0)
#define CLASS_2_21A3280FF4BD0943___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D88690)
#define CLASS_2_21A3280FF4BD0943___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D886D0)

inline static constexpr unsigned int Class_2_21A3280FF4BD0943___c_TypeDefinitionIndex = 37999;

class Class_2_21A3280FF4BD0943___c : public ::System::Object
{
public:
	static ::Class_2_21A3280FF4BD0943___c** StaticGet___9()
	{
		return (::Class_2_21A3280FF4BD0943___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_21A3280FF4BD0943___c_TypeDefinitionIndex)->GetStaticField(0x43E90);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__5_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_21A3280FF4BD0943___c_TypeDefinitionIndex)->GetStaticField(0x43E98);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_21A3280FF4BD0943___c_TypeDefinitionIndex)->GetStaticField(0x43EA0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_21A3280FF4BD0943___c_TypeDefinitionIndex)->GetStaticField(0x43EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_21A3280FF4BD0943___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A3280FF4BD0943___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A3280FF4BD0943___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A3280FF4BD0943___C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A3280FF4BD0943___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};

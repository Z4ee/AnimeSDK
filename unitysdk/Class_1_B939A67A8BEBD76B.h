#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_668;
class Class_0_16E4307DCC419505_669;
namespace System { class String; }

#define CLASS_1_B939A67A8BEBD76B_METHOD_1_606CF306365F7210_OFFSET UNITYSDK_OFFSET(0xBB13000)
#define CLASS_1_B939A67A8BEBD76B__CTOR_OFFSET UNITYSDK_OFFSET(0xBB13100)

inline static constexpr unsigned int Class_1_B939A67A8BEBD76B_TypeDefinitionIndex = 60044;

class Class_1_B939A67A8BEBD76B : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_668** StaticGet_IFCMENDDFIK()
	{
		return (::Class_0_16E4307DCC419505_668**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B939A67A8BEBD76B_TypeDefinitionIndex)->GetStaticField(0x5D050);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_669* Method_1_606CF306365F7210(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_669*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B_METHOD_1_606CF306365F7210_OFFSET))(a1);
	}
};

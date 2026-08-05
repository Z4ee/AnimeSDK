#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_1_8DB0BC4CF3861904;

#define CLASS_1_9D9D96158B00B343_METHOD_1_649D28FEDD0DD3B7_OFFSET UNITYSDK_OFFSET(0x1F17FCE0)
#define CLASS_1_9D9D96158B00B343_METHOD_1_D2A7A1B34A5F43DA_OFFSET UNITYSDK_OFFSET(0x1F17FDB0)
#define CLASS_1_9D9D96158B00B343__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F17FC70)

inline static constexpr unsigned int Class_1_9D9D96158B00B343_TypeDefinitionIndex = 18927;

class Class_1_9D9D96158B00B343 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D9D96158B00B343_TypeDefinitionIndex)->GetStaticField(0x8530);
	}
	static ::Class_1_8DB0BC4CF3861904** StaticGet_Field_1_0()
	{
		return (::Class_1_8DB0BC4CF3861904**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D9D96158B00B343_TypeDefinitionIndex)->GetStaticField(0x8538);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D9D96158B00B343_TypeDefinitionIndex)->GetStaticField(0x8540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D9D96158B00B343__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_649D28FEDD0DD3B7(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_9D9D96158B00B343_METHOD_1_649D28FEDD0DD3B7_OFFSET))(a1);
	}

	static ::System::Void Method_1_D2A7A1B34A5F43DA(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_9D9D96158B00B343_METHOD_1_D2A7A1B34A5F43DA_OFFSET))(a1);
	}
};

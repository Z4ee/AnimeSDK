#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7867CEBC50DBC44;
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C8367C6C0668EB79_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13132780)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_39D4F84D0349CD99_OFFSET UNITYSDK_OFFSET(0x13131F60)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x13132160)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_8F5ABF259CA85596_OFFSET UNITYSDK_OFFSET(0x13131BB0)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_941387B1DB30440A_OFFSET UNITYSDK_OFFSET(0x13131F00)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_BE253ACF49BE36BD_OFFSET UNITYSDK_OFFSET(0x13131C60)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x13131FC0)
#define CLASS_1_C8367C6C0668EB79_METHOD_1_CAE55E803FE789DB_OFFSET UNITYSDK_OFFSET(0x131327C0)
#define CLASS_1_C8367C6C0668EB79__CCTOR_OFFSET UNITYSDK_OFFSET(0x131316D0)
#define CLASS_1_C8367C6C0668EB79__CTOR_OFFSET UNITYSDK_OFFSET(0x131316C0)

inline static constexpr unsigned int Class_1_C8367C6C0668EB79_TypeDefinitionIndex = 45843;

class Class_1_C8367C6C0668EB79 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8367C6C0668EB79_TypeDefinitionIndex)->GetStaticField(0x42590);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8367C6C0668EB79_TypeDefinitionIndex)->GetStaticField(0x42598);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_8F5ABF259CA85596()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_8F5ABF259CA85596_OFFSET))();
	}

	static ::System::Boolean Method_1_BE253ACF49BE36BD(::Class_1_D7867CEBC50DBC44* a1)
	{
		return ((::System::Boolean(*)(::Class_1_D7867CEBC50DBC44*))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_BE253ACF49BE36BD_OFFSET))(a1);
	}

	static ::System::Void Method_1_941387B1DB30440A(::IFix::Core::VirtualMachine* a1)
	{
		return ((::System::Void(*)(::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_941387B1DB30440A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_1_39D4F84D0349CD99()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_39D4F84D0349CD99_OFFSET))();
	}

	static ::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_C782C60E11964C7F_OFFSET))();
	}

	static ::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_62167C28EC14CC63_OFFSET))();
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::Void Method_1_CAE55E803FE789DB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79_METHOD_1_CAE55E803FE789DB_OFFSET))(a1);
	}
};

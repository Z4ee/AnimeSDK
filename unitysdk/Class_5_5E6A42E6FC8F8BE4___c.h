#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_5_5E6A42E6FC8F8BE4___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A895400)
#define CLASS_5_5E6A42E6FC8F8BE4___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A8953C0)
#define CLASS_5_5E6A42E6FC8F8BE4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A895370)
#define CLASS_5_5E6A42E6FC8F8BE4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8953B0)

inline static constexpr unsigned int Class_5_5E6A42E6FC8F8BE4___c_TypeDefinitionIndex = 63519;

class Class_5_5E6A42E6FC8F8BE4___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__0_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5E6A42E6FC8F8BE4___c_TypeDefinitionIndex)->GetStaticField(0x499A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5E6A42E6FC8F8BE4___c_TypeDefinitionIndex)->GetStaticField(0x499A8);
	}
	static ::Class_5_5E6A42E6FC8F8BE4___c** StaticGet___9()
	{
		return (::Class_5_5E6A42E6FC8F8BE4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5E6A42E6FC8F8BE4___c_TypeDefinitionIndex)->GetStaticField(0x499B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_5E6A42E6FC8F8BE4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5E6A42E6FC8F8BE4___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5E6A42E6FC8F8BE4___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5E6A42E6FC8F8BE4___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};

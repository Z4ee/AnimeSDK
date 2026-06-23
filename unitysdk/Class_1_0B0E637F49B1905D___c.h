#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0B0E637F49B1905D___C_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x153E9840)
#define CLASS_1_0B0E637F49B1905D___C_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x153E9770)
#define CLASS_1_0B0E637F49B1905D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153E9720)
#define CLASS_1_0B0E637F49B1905D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153E9760)

inline static constexpr unsigned int Class_1_0B0E637F49B1905D___c_TypeDefinitionIndex = 74251;

class Class_1_0B0E637F49B1905D___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0E637F49B1905D___c_TypeDefinitionIndex)->GetStaticField(0x49730);
	}
	static ::Class_1_0B0E637F49B1905D___c** StaticGet___9()
	{
		return (::Class_1_0B0E637F49B1905D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0E637F49B1905D___c_TypeDefinitionIndex)->GetStaticField(0x49738);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0E637F49B1905D___c_TypeDefinitionIndex)->GetStaticField(0x49740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D___C_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D___C_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1104;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_44D5AE5377975AEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7304C0)
#define CLASS_1_44D5AE5377975AEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA730500)
#define CLASS_1_44D5AE5377975AEE___C__GETLENGTH_B__7_0_OFFSET UNITYSDK_OFFSET(0xA730510)

inline static constexpr unsigned int Class_1_44D5AE5377975AEE___c_TypeDefinitionIndex = 69615;

class Class_1_44D5AE5377975AEE___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_1104*, ::System::Single>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1104*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D5AE5377975AEE___c_TypeDefinitionIndex)->GetStaticField(0x5C2C0);
	}
	static ::Class_1_44D5AE5377975AEE___c** StaticGet___9()
	{
		return (::Class_1_44D5AE5377975AEE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D5AE5377975AEE___c_TypeDefinitionIndex)->GetStaticField(0x5C2C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE___C__CTOR_OFFSET))(this);
	}

	::System::Single _GetLength_b__7_0(::Class_0_16E4307DCC419505_1104* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_1104*))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE___C__GETLENGTH_B__7_0_OFFSET))(this, a1);
	}
};

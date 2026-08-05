#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_311;
namespace System { template <typename T> class Func_1; }

#define CLASS_5_BFFF8608392BE06B___C_METHOD_1_3AC0B24BC571B68F_OFFSET UNITYSDK_OFFSET(0x127682A0)
#define CLASS_5_BFFF8608392BE06B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12768250)
#define CLASS_5_BFFF8608392BE06B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12768290)

inline static constexpr unsigned int Class_5_BFFF8608392BE06B___c_TypeDefinitionIndex = 73177;

class Class_5_BFFF8608392BE06B___c : public ::System::Object
{
public:
	static ::Class_5_BFFF8608392BE06B___c** StaticGet___9()
	{
		return (::Class_5_BFFF8608392BE06B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_BFFF8608392BE06B___c_TypeDefinitionIndex)->GetStaticField(0x3C660);
	}
	static ::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_311*>*>** StaticGet___9__25_0()
	{
		return (::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_311*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_BFFF8608392BE06B___c_TypeDefinitionIndex)->GetStaticField(0x3C668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_311*>* Method_1_3AC0B24BC571B68F()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_311*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B___C_METHOD_1_3AC0B24BC571B68F_OFFSET))(this);
	}
};

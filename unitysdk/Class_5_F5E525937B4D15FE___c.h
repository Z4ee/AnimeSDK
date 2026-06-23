#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_423;
namespace System { template <typename T> class Func_1; }

#define CLASS_5_F5E525937B4D15FE___C_METHOD_1_5860B139996D8FB8_OFFSET UNITYSDK_OFFSET(0x1689DA50)
#define CLASS_5_F5E525937B4D15FE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1689DA00)
#define CLASS_5_F5E525937B4D15FE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1689DA40)

inline static constexpr unsigned int Class_5_F5E525937B4D15FE___c_TypeDefinitionIndex = 58173;

class Class_5_F5E525937B4D15FE___c : public ::System::Object
{
public:
	static ::Class_5_F5E525937B4D15FE___c** StaticGet___9()
	{
		return (::Class_5_F5E525937B4D15FE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_F5E525937B4D15FE___c_TypeDefinitionIndex)->GetStaticField(0x32430);
	}
	static ::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_423*>*>** StaticGet___9__20_0()
	{
		return (::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_423*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_F5E525937B4D15FE___c_TypeDefinitionIndex)->GetStaticField(0x32438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_423*>* Method_1_5860B139996D8FB8()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_423*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE___C_METHOD_1_5860B139996D8FB8_OFFSET))(this);
	}
};

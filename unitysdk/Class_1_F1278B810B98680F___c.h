#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1332;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F1278B810B98680F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8ECDC0)
#define CLASS_1_F1278B810B98680F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ECE00)
#define CLASS_1_F1278B810B98680F___C__GETLENGTH_B__7_0_OFFSET UNITYSDK_OFFSET(0xB8ECE10)

inline static constexpr unsigned int Class_1_F1278B810B98680F___c_TypeDefinitionIndex = 74565;

class Class_1_F1278B810B98680F___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::System::Single>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1278B810B98680F___c_TypeDefinitionIndex)->GetStaticField(0x6F670);
	}
	static ::Class_1_F1278B810B98680F___c** StaticGet___9()
	{
		return (::Class_1_F1278B810B98680F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1278B810B98680F___c_TypeDefinitionIndex)->GetStaticField(0x6F678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1278B810B98680F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1278B810B98680F___C__CTOR_OFFSET))(this);
	}

	::System::Single _GetLength_b__7_0(::Class_0_16E4307DCC419505_1332* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_1332*))((::PBYTE)hIl2Cpp + CLASS_1_F1278B810B98680F___C__GETLENGTH_B__7_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_993FB8DDEDFEC00B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D0082CD0866F05AB___C_METHOD_1_5776FB86FEF8CA51_OFFSET UNITYSDK_OFFSET(0x150BECB0)
#define CLASS_2_D0082CD0866F05AB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150BEC60)
#define CLASS_2_D0082CD0866F05AB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150BECA0)

inline static constexpr unsigned int Class_2_D0082CD0866F05AB___c_TypeDefinitionIndex = 68434;

class Class_2_D0082CD0866F05AB___c : public ::System::Object
{
public:
	static ::Class_2_D0082CD0866F05AB___c** StaticGet___9()
	{
		return (::Class_2_D0082CD0866F05AB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D0082CD0866F05AB___c_TypeDefinitionIndex)->GetStaticField(0x39930);
	}
	static ::System::Func_2<::Class_3_993FB8DDEDFEC00B*, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_3_993FB8DDEDFEC00B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D0082CD0866F05AB___c_TypeDefinitionIndex)->GetStaticField(0x39938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5776FB86FEF8CA51(::Class_3_993FB8DDEDFEC00B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_993FB8DDEDFEC00B*))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB___C_METHOD_1_5776FB86FEF8CA51_OFFSET))(this, a1);
	}
};

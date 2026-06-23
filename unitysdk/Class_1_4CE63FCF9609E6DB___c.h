#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4EFF6F1C717C208B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4CE63FCF9609E6DB___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x133615B0)
#define CLASS_1_4CE63FCF9609E6DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13361560)
#define CLASS_1_4CE63FCF9609E6DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133615A0)

inline static constexpr unsigned int Class_1_4CE63FCF9609E6DB___c_TypeDefinitionIndex = 65022;

class Class_1_4CE63FCF9609E6DB___c : public ::System::Object
{
public:
	static ::Class_1_4CE63FCF9609E6DB___c** StaticGet___9()
	{
		return (::Class_1_4CE63FCF9609E6DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CE63FCF9609E6DB___c_TypeDefinitionIndex)->GetStaticField(0x47540);
	}
	static ::System::Func_2<::Class_3_4EFF6F1C717C208B*, ::System::UInt32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_3_4EFF6F1C717C208B*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CE63FCF9609E6DB___c_TypeDefinitionIndex)->GetStaticField(0x47548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_4EFF6F1C717C208B* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_4EFF6F1C717C208B*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}
};

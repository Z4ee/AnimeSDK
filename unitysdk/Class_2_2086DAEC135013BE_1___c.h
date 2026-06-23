#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_2086DAEC135013BE_1___C_METHOD_1_43C1F46AF7E34CCB_OFFSET UNITYSDK_OFFSET(0x1719F8D0)
#define CLASS_2_2086DAEC135013BE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1719F880)
#define CLASS_2_2086DAEC135013BE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1719F8C0)

inline static constexpr unsigned int Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex = 74226;

class Class_2_2086DAEC135013BE_1___c : public ::System::Object
{
public:
	static ::Class_2_2086DAEC135013BE_1___c** StaticGet___9()
	{
		return (::Class_2_2086DAEC135013BE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex)->GetStaticField(0x33070);
	}
	static ::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::Class_2_01B22E9930E7BB4D*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::Class_2_01B22E9930E7BB4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE_1___c_TypeDefinitionIndex)->GetStaticField(0x33078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C__CTOR_OFFSET))(this);
	}

	::Class_2_01B22E9930E7BB4D* Method_1_43C1F46AF7E34CCB(::Class_2_01B22E9930E7BB4D* a1)
	{
		return ((::Class_2_01B22E9930E7BB4D*(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE_1___C_METHOD_1_43C1F46AF7E34CCB_OFFSET))(this, a1);
	}
};

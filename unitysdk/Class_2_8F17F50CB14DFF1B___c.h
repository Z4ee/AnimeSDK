#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_8F17F50CB14DFF1B___C_METHOD_1_4636681D9702C9A9_OFFSET UNITYSDK_OFFSET(0x145E99D0)
#define CLASS_2_8F17F50CB14DFF1B___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x145E9B20)
#define CLASS_2_8F17F50CB14DFF1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145E9980)
#define CLASS_2_8F17F50CB14DFF1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145E99C0)

inline static constexpr unsigned int Class_2_8F17F50CB14DFF1B___c_TypeDefinitionIndex = 69161;

class Class_2_8F17F50CB14DFF1B___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int64>** StaticGet___9__25_5()
	{
		return (::System::Func_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8F17F50CB14DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x33050);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_18()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8F17F50CB14DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x33058);
	}
	static ::Class_2_8F17F50CB14DFF1B___c** StaticGet___9()
	{
		return (::Class_2_8F17F50CB14DFF1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8F17F50CB14DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x33060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8F17F50CB14DFF1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F17F50CB14DFF1B___C__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_4636681D9702C9A9()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F17F50CB14DFF1B___C_METHOD_1_4636681D9702C9A9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F17F50CB14DFF1B___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

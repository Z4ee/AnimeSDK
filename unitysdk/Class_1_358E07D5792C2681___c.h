#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_358E07D5792C2681___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1407A8A0)
#define CLASS_1_358E07D5792C2681___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1407A850)
#define CLASS_1_358E07D5792C2681___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1407A890)

inline static constexpr unsigned int Class_1_358E07D5792C2681___c_TypeDefinitionIndex = 45540;

class Class_1_358E07D5792C2681___c : public ::System::Object
{
public:
	static ::Class_1_358E07D5792C2681___c** StaticGet___9()
	{
		return (::Class_1_358E07D5792C2681___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_358E07D5792C2681___c_TypeDefinitionIndex)->GetStaticField(0x3C4E0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_358E07D5792C2681___c_TypeDefinitionIndex)->GetStaticField(0x3C4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

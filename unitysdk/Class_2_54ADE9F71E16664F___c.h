#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_54ADE9F71E16664F___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14DE32E0)
#define CLASS_2_54ADE9F71E16664F___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14DE32F0)
#define CLASS_2_54ADE9F71E16664F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE3290)
#define CLASS_2_54ADE9F71E16664F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE32D0)

inline static constexpr unsigned int Class_2_54ADE9F71E16664F___c_TypeDefinitionIndex = 67989;

class Class_2_54ADE9F71E16664F___c : public ::System::Object
{
public:
	static ::Class_2_54ADE9F71E16664F___c** StaticGet___9()
	{
		return (::Class_2_54ADE9F71E16664F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54ADE9F71E16664F___c_TypeDefinitionIndex)->GetStaticField(0x30150);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54ADE9F71E16664F___c_TypeDefinitionIndex)->GetStaticField(0x30158);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54ADE9F71E16664F___c_TypeDefinitionIndex)->GetStaticField(0x30160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54ADE9F71E16664F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54ADE9F71E16664F___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54ADE9F71E16664F___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54ADE9F71E16664F___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_75B55FBF5B9BC90B;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E4311406D870152B___C_METHOD_1_97428D6179B1CFD2_OFFSET UNITYSDK_OFFSET(0x13428F60)
#define CLASS_1_E4311406D870152B___C_METHOD_1_EFF06B62A00737C8_OFFSET UNITYSDK_OFFSET(0x134289D0)
#define CLASS_1_E4311406D870152B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13428980)
#define CLASS_1_E4311406D870152B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134289C0)

inline static constexpr unsigned int Class_1_E4311406D870152B___c_TypeDefinitionIndex = 84268;

class Class_1_E4311406D870152B___c : public ::System::Object
{
public:
	static ::Class_1_E4311406D870152B___c** StaticGet___9()
	{
		return (::Class_1_E4311406D870152B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x40980);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x40988);
	}
	static ::System::Comparison_1<::Class_2_75B55FBF5B9BC90B*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_75B55FBF5B9BC90B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x40990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EFF06B62A00737C8(::Class_2_75B55FBF5B9BC90B* a1, ::Class_2_75B55FBF5B9BC90B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_75B55FBF5B9BC90B*, ::Class_2_75B55FBF5B9BC90B*))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C_METHOD_1_EFF06B62A00737C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97428D6179B1CFD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C_METHOD_1_97428D6179B1CFD2_OFFSET))(this);
	}
};

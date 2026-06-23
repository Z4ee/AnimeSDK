#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A1AD10FD6B58ED3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A6EE282B5C3CDD41___C_METHOD_1_110495AB56079231_OFFSET UNITYSDK_OFFSET(0x1CCD7410)
#define CLASS_1_A6EE282B5C3CDD41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD73C0)
#define CLASS_1_A6EE282B5C3CDD41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD7400)

inline static constexpr unsigned int Class_1_A6EE282B5C3CDD41___c_TypeDefinitionIndex = 88311;

class Class_1_A6EE282B5C3CDD41___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_4A1AD10FD6B58ED3*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_1_4A1AD10FD6B58ED3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6EE282B5C3CDD41___c_TypeDefinitionIndex)->GetStaticField(0x4DBD0);
	}
	static ::Class_1_A6EE282B5C3CDD41___c** StaticGet___9()
	{
		return (::Class_1_A6EE282B5C3CDD41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6EE282B5C3CDD41___c_TypeDefinitionIndex)->GetStaticField(0x4DBD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_110495AB56079231(::Class_1_4A1AD10FD6B58ED3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4A1AD10FD6B58ED3*))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41___C_METHOD_1_110495AB56079231_OFFSET))(this, a1);
	}
};

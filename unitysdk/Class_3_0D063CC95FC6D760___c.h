#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_906601D3016C0790;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0D063CC95FC6D760___C_METHOD_1_3F5EDC63A3258E1D_OFFSET UNITYSDK_OFFSET(0x109F3EB0)
#define CLASS_3_0D063CC95FC6D760___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F3E60)
#define CLASS_3_0D063CC95FC6D760___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109F3EA0)

inline static constexpr unsigned int Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex = 55701;

class Class_3_0D063CC95FC6D760___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_906601D3016C0790*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_906601D3016C0790*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex)->GetStaticField(0x3EF60);
	}
	static ::Class_3_0D063CC95FC6D760___c** StaticGet___9()
	{
		return (::Class_3_0D063CC95FC6D760___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex)->GetStaticField(0x3EF68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F5EDC63A3258E1D(::Class_3_906601D3016C0790* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_906601D3016C0790*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C_METHOD_1_3F5EDC63A3258E1D_OFFSET))(this, a1, a2);
	}
};

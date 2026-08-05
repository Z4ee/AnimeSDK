#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8026BF886B2570E0;
class Class_3_DE95B800D57EC6D2;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_244BC53C42B59106___C_METHOD_1_331A2272D8C0851A_OFFSET UNITYSDK_OFFSET(0x15BB4E40)
#define CLASS_3_244BC53C42B59106___C_METHOD_1_CA252EB53D5BC15A_OFFSET UNITYSDK_OFFSET(0x15BB4E50)
#define CLASS_3_244BC53C42B59106___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BB4DF0)
#define CLASS_3_244BC53C42B59106___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4E30)

inline static constexpr unsigned int Class_3_244BC53C42B59106___c_TypeDefinitionIndex = 69316;

class Class_3_244BC53C42B59106___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_DE95B800D57EC6D2*>** StaticGet___9__40_0()
	{
		return (::System::Action_1<::Class_3_DE95B800D57EC6D2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_244BC53C42B59106___c_TypeDefinitionIndex)->GetStaticField(0x415B0);
	}
	static ::System::Action_1<::Class_2_8026BF886B2570E0*>** StaticGet___9__48_0()
	{
		return (::System::Action_1<::Class_2_8026BF886B2570E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_244BC53C42B59106___c_TypeDefinitionIndex)->GetStaticField(0x415B8);
	}
	static ::Class_3_244BC53C42B59106___c** StaticGet___9()
	{
		return (::Class_3_244BC53C42B59106___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_244BC53C42B59106___c_TypeDefinitionIndex)->GetStaticField(0x415C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_244BC53C42B59106___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_244BC53C42B59106___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_331A2272D8C0851A(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_244BC53C42B59106___C_METHOD_1_331A2272D8C0851A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA252EB53D5BC15A(::Class_3_DE95B800D57EC6D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DE95B800D57EC6D2*))((::PBYTE)hIl2Cpp + CLASS_3_244BC53C42B59106___C_METHOD_1_CA252EB53D5BC15A_OFFSET))(this, a1);
	}
};

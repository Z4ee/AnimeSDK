#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F8EB4D9464ADCCA1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_92233E353C45B039___C_METHOD_1_8EEE6B9DDA765056_OFFSET UNITYSDK_OFFSET(0x15477280)
#define CLASS_1_92233E353C45B039___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15477230)
#define CLASS_1_92233E353C45B039___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15477270)

inline static constexpr unsigned int Class_1_92233E353C45B039___c_TypeDefinitionIndex = 68454;

class Class_1_92233E353C45B039___c : public ::System::Object
{
public:
	static ::Class_1_92233E353C45B039___c** StaticGet___9()
	{
		return (::Class_1_92233E353C45B039___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92233E353C45B039___c_TypeDefinitionIndex)->GetStaticField(0x32760);
	}
	static ::System::Func_2<::System::Int32, ::Class_2_F8EB4D9464ADCCA1*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::System::Int32, ::Class_2_F8EB4D9464ADCCA1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92233E353C45B039___c_TypeDefinitionIndex)->GetStaticField(0x32768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C__CTOR_OFFSET))(this);
	}

	::Class_2_F8EB4D9464ADCCA1* Method_1_8EEE6B9DDA765056(::System::Int32 a1)
	{
		return ((::Class_2_F8EB4D9464ADCCA1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C_METHOD_1_8EEE6B9DDA765056_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_29F61A604A7569ED;
class Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_39C37B9D2785D71C___C_METHOD_1_43AC2078E6BFCAB4_OFFSET UNITYSDK_OFFSET(0x17DAD010)
#define CLASS_3_39C37B9D2785D71C___C_METHOD_1_CF35346D555254A8_OFFSET UNITYSDK_OFFSET(0x17DAD170)
#define CLASS_3_39C37B9D2785D71C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DACFC0)
#define CLASS_3_39C37B9D2785D71C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAD000)

inline static constexpr unsigned int Class_3_39C37B9D2785D71C___c_TypeDefinitionIndex = 55404;

class Class_3_39C37B9D2785D71C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_29F61A604A7569ED*, ::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*>** StaticGet___9__19_1()
	{
		return (::System::Func_2<::Class_2_29F61A604A7569ED*, ::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_39C37B9D2785D71C___c_TypeDefinitionIndex)->GetStaticField(0x33090);
	}
	static ::Class_3_39C37B9D2785D71C___c** StaticGet___9()
	{
		return (::Class_3_39C37B9D2785D71C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_39C37B9D2785D71C___c_TypeDefinitionIndex)->GetStaticField(0x33098);
	}
	static ::System::Comparison_1<::Class_2_29F61A604A7569ED*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_2_29F61A604A7569ED*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_39C37B9D2785D71C___c_TypeDefinitionIndex)->GetStaticField(0x330A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_39C37B9D2785D71C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39C37B9D2785D71C___C__CTOR_OFFSET))(this);
	}

	::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7* Method_1_43AC2078E6BFCAB4(::Class_2_29F61A604A7569ED* a1)
	{
		return ((::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*(*)(::PVOID, ::Class_2_29F61A604A7569ED*))((::PBYTE)hIl2Cpp + CLASS_3_39C37B9D2785D71C___C_METHOD_1_43AC2078E6BFCAB4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CF35346D555254A8(::Class_2_29F61A604A7569ED* a1, ::Class_2_29F61A604A7569ED* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_29F61A604A7569ED*, ::Class_2_29F61A604A7569ED*))((::PBYTE)hIl2Cpp + CLASS_3_39C37B9D2785D71C___C_METHOD_1_CF35346D555254A8_OFFSET))(this, a1, a2);
	}
};

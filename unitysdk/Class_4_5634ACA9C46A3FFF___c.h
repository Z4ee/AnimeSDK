#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_29F61A604A7569ED;
class Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_514DBEE9CB42F822_OFFSET UNITYSDK_OFFSET(0x1631ACA0)
#define CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_CF35346D555254A8_OFFSET UNITYSDK_OFFSET(0x1631AAE0)
#define CLASS_4_5634ACA9C46A3FFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1631AA90)
#define CLASS_4_5634ACA9C46A3FFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1631AAD0)

inline static constexpr unsigned int Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex = 62464;

class Class_4_5634ACA9C46A3FFF___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_29F61A604A7569ED*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_29F61A604A7569ED*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x2FA30);
	}
	static ::Class_4_5634ACA9C46A3FFF___c** StaticGet___9()
	{
		return (::Class_4_5634ACA9C46A3FFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x2FA38);
	}
	static ::System::Func_2<::Class_2_29F61A604A7569ED*, ::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::Class_2_29F61A604A7569ED*, ::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x2FA40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF35346D555254A8(::Class_2_29F61A604A7569ED* a1, ::Class_2_29F61A604A7569ED* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_29F61A604A7569ED*, ::Class_2_29F61A604A7569ED*))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_CF35346D555254A8_OFFSET))(this, a1, a2);
	}

	::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7* Method_1_514DBEE9CB42F822(::Class_2_29F61A604A7569ED* a1)
	{
		return ((::Class_3_39C37B9D2785D71C_Class_1_0755F51D2CF0D842_7*(*)(::PVOID, ::Class_2_29F61A604A7569ED*))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_514DBEE9CB42F822_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_45578855C7710D8B;
class Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_514DBEE9CB42F822_OFFSET UNITYSDK_OFFSET(0x171B02C0)
#define CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_CF35346D555254A8_OFFSET UNITYSDK_OFFSET(0x171B0320)
#define CLASS_4_5634ACA9C46A3FFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171B0270)
#define CLASS_4_5634ACA9C46A3FFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171B02B0)

inline static constexpr unsigned int Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex = 90328;

class Class_4_5634ACA9C46A3FFF___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_45578855C7710D8B*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_45578855C7710D8B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x382D0);
	}
	static ::Class_4_5634ACA9C46A3FFF___c** StaticGet___9()
	{
		return (::Class_4_5634ACA9C46A3FFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x382D8);
	}
	static ::System::Func_2<::Class_2_45578855C7710D8B*, ::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::Class_2_45578855C7710D8B*, ::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_5634ACA9C46A3FFF___c_TypeDefinitionIndex)->GetStaticField(0x382E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C__CTOR_OFFSET))(this);
	}

	::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1* Method_1_514DBEE9CB42F822(::Class_2_45578855C7710D8B* a1)
	{
		return ((::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*(*)(::PVOID, ::Class_2_45578855C7710D8B*))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_514DBEE9CB42F822_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CF35346D555254A8(::Class_2_45578855C7710D8B* a1, ::Class_2_45578855C7710D8B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_45578855C7710D8B*, ::Class_2_45578855C7710D8B*))((::PBYTE)hIl2Cpp + CLASS_4_5634ACA9C46A3FFF___C_METHOD_1_CF35346D555254A8_OFFSET))(this, a1, a2);
	}
};

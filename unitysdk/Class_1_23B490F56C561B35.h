#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_2_636B2F59931721BC;
class Class_2_8C27D73A0DAA64D4;

#define CLASS_1_23B490F56C561B35_METHOD_1_592A855A9A9B40C1_OFFSET UNITYSDK_OFFSET(0xA6D25F0)
#define CLASS_1_23B490F56C561B35_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0xA6D2520)
#define CLASS_1_23B490F56C561B35_METHOD_1_AA587310953A5C5C_OFFSET UNITYSDK_OFFSET(0xA6D2690)
#define CLASS_1_23B490F56C561B35__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6D2880)

inline static constexpr unsigned int Class_1_23B490F56C561B35_TypeDefinitionIndex = 39892;

class Class_1_23B490F56C561B35 : public ::System::Object
{
public:
	static ::Class_2_8C27D73A0DAA64D4** StaticGet_Field_1_0()
	{
		return (::Class_2_8C27D73A0DAA64D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23B490F56C561B35_TypeDefinitionIndex)->GetStaticField(0x486C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23B490F56C561B35__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_23B490F56C561B35_METHOD_1_AA041EC2967F998A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_310* Method_1_592A855A9A9B40C1()
	{
		return ((::Class_0_16E4307DCC419505_310*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23B490F56C561B35_METHOD_1_592A855A9A9B40C1_OFFSET))();
	}

	static ::System::Void Method_1_AA587310953A5C5C(::Class_2_636B2F59931721BC* a1)
	{
		return ((::System::Void(*)(::Class_2_636B2F59931721BC*))((::PBYTE)hIl2Cpp + CLASS_1_23B490F56C561B35_METHOD_1_AA587310953A5C5C_OFFSET))(a1);
	}
};

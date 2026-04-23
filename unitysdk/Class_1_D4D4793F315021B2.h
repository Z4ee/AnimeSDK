#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_2_8C27D73A0DAA64D4;
class Class_3_301DB96170A54A53;

#define CLASS_1_D4D4793F315021B2_METHOD_1_0F42D2784451DA2A_OFFSET UNITYSDK_OFFSET(0x123ABAC0)
#define CLASS_1_D4D4793F315021B2_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x123AB9F0)
#define CLASS_1_D4D4793F315021B2_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x123ABB40)
#define CLASS_1_D4D4793F315021B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x123ABD20)

inline static constexpr unsigned int Class_1_D4D4793F315021B2_TypeDefinitionIndex = 45800;

class Class_1_D4D4793F315021B2 : public ::System::Object
{
public:
	static ::Class_2_8C27D73A0DAA64D4** StaticGet_Field_1_0()
	{
		return (::Class_2_8C27D73A0DAA64D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4D4793F315021B2_TypeDefinitionIndex)->GetStaticField(0x6B250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4D4793F315021B2__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4D4793F315021B2_METHOD_1_AA041EC2967F998A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_318* Method_1_0F42D2784451DA2A()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4D4793F315021B2_METHOD_1_0F42D2784451DA2A_OFFSET))();
	}

	static ::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_301DB96170A54A53* a1)
	{
		return ((::System::Void(*)(::Class_3_301DB96170A54A53*))((::PBYTE)hIl2Cpp + CLASS_1_D4D4793F315021B2_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(a1);
	}
};

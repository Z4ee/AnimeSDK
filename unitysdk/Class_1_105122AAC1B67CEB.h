#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_1_AAFD4F462EFCCE4D;
class Class_2_8C27D73A0DAA64D4;

#define CLASS_1_105122AAC1B67CEB_METHOD_1_51521C74BCE1597B_OFFSET UNITYSDK_OFFSET(0x115E27C0)
#define CLASS_1_105122AAC1B67CEB_METHOD_1_592A855A9A9B40C1_OFFSET UNITYSDK_OFFSET(0x115E2720)
#define CLASS_1_105122AAC1B67CEB_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x115E2650)
#define CLASS_1_105122AAC1B67CEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x115E28E0)

inline static constexpr unsigned int Class_1_105122AAC1B67CEB_TypeDefinitionIndex = 39893;

class Class_1_105122AAC1B67CEB : public ::System::Object
{
public:
	static ::Class_2_8C27D73A0DAA64D4** StaticGet_Field_1_0()
	{
		return (::Class_2_8C27D73A0DAA64D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_105122AAC1B67CEB_TypeDefinitionIndex)->GetStaticField(0x45670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_105122AAC1B67CEB__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_105122AAC1B67CEB_METHOD_1_AA041EC2967F998A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_310* Method_1_592A855A9A9B40C1()
	{
		return ((::Class_0_16E4307DCC419505_310*(*)())((::PBYTE)hIl2Cpp + CLASS_1_105122AAC1B67CEB_METHOD_1_592A855A9A9B40C1_OFFSET))();
	}

	static ::System::Void Method_1_51521C74BCE1597B(::Class_1_AAFD4F462EFCCE4D* a1)
	{
		return ((::System::Void(*)(::Class_1_AAFD4F462EFCCE4D*))((::PBYTE)hIl2Cpp + CLASS_1_105122AAC1B67CEB_METHOD_1_51521C74BCE1597B_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F74DA0BE72316445_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x19210D40)
#define CLASS_1_F74DA0BE72316445_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x19210FA0)
#define CLASS_1_F74DA0BE72316445__CCTOR_OFFSET UNITYSDK_OFFSET(0x19210D30)

inline static constexpr unsigned int Class_1_F74DA0BE72316445_TypeDefinitionIndex = 51990;

class Class_1_F74DA0BE72316445 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F74DA0BE72316445_TypeDefinitionIndex)->GetStaticField(0x11930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F74DA0BE72316445__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F74DA0BE72316445_METHOD_1_455E250D679F9642_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F74DA0BE72316445_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_71839714FF924929___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x13E7D080)
#define CLASS_2_71839714FF924929___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E7D030)
#define CLASS_2_71839714FF924929___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E7D070)

inline static constexpr unsigned int Class_2_71839714FF924929___c_TypeDefinitionIndex = 44079;

class Class_2_71839714FF924929___c : public ::System::Object
{
public:
	static ::Class_2_71839714FF924929___c** StaticGet___9()
	{
		return (::Class_2_71839714FF924929___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71839714FF924929___c_TypeDefinitionIndex)->GetStaticField(0x36100);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__2_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71839714FF924929___c_TypeDefinitionIndex)->GetStaticField(0x36108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};

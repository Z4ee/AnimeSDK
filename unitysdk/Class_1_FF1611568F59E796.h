#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_336;
class Class_1_6FA17C56E9FF6BCE;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FF1611568F59E796_METHOD_1_1FC5FC1D2650E472_OFFSET UNITYSDK_OFFSET(0x141CDE00)
#define CLASS_1_FF1611568F59E796_METHOD_1_C212108A028462A1_OFFSET UNITYSDK_OFFSET(0x141CDBF0)
#define CLASS_1_FF1611568F59E796__CCTOR_OFFSET UNITYSDK_OFFSET(0x141CDFE0)

inline static constexpr unsigned int Class_1_FF1611568F59E796_TypeDefinitionIndex = 46589;

class Class_1_FF1611568F59E796 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_6FA17C56E9FF6BCE*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_6FA17C56E9FF6BCE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF1611568F59E796_TypeDefinitionIndex)->GetStaticField(0x15C70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF1611568F59E796__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_336* Method_1_C212108A028462A1(::System::Single a1)
	{
		return ((::Class_0_16E4307DCC419505_336*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FF1611568F59E796_METHOD_1_C212108A028462A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1FC5FC1D2650E472(::Class_0_16E4307DCC419505_336* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_1_FF1611568F59E796_METHOD_1_1FC5FC1D2650E472_OFFSET))(a1);
	}
};

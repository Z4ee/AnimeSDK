#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A52FBC3F77FB1B3.h"
#include "unitysdk/System/Object.h"

class Class_1_1D257F0D6462A2AD;
class Class_2_208CC9941471731A_166;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET UNITYSDK_OFFSET(0x147D4C50)
#define CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x147D4CC0)
#define CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET UNITYSDK_OFFSET(0x147D4C40)

inline static constexpr unsigned int Class_2_03F4D9B3111E6159_Class_1_9C5E3FF38EA712A3_TypeDefinitionIndex = 62042;

class Class_2_03F4D9B3111E6159_Class_1_9C5E3FF38EA712A3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_1D257F0D6462A2AD* Field_1_2; // 0x18
	::Enum_3_4A52FBC3F77FB1B3 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1E895D3FF72E5431(::Class_2_208CC9941471731A_166* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_166*))((::PBYTE)hIl2Cpp + CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03F4D9B3111E6159_CLASS_1_9C5E3FF38EA712A3_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54D6B0A8C18161F6.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;
class Class_2_208CC9941471731A_53;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A5FC45CC23522FB5_METHOD_1_2E7C0D86C81DC9BF_OFFSET UNITYSDK_OFFSET(0x1792D490)
#define CLASS_1_A5FC45CC23522FB5_METHOD_1_9972509F8DA79F42_OFFSET UNITYSDK_OFFSET(0x1792D560)
#define CLASS_1_A5FC45CC23522FB5_METHOD_1_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0x1792D6A0)
#define CLASS_1_A5FC45CC23522FB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1792D410)

inline static constexpr unsigned int Class_1_A5FC45CC23522FB5_TypeDefinitionIndex = 60292;

class Class_1_A5FC45CC23522FB5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_53* Field_1_4; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::Enum_3_54D6B0A8C18161F6 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_2E7C0D86C81DC9BF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_2E7C0D86C81DC9BF_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_53* Method_1_9972509F8DA79F42()
	{
		return ((::Class_2_208CC9941471731A_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_9972509F8DA79F42_OFFSET))(this);
	}

	::System::Int32 Method_1_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_D0B3EB3192C70900_OFFSET))(this);
	}
};

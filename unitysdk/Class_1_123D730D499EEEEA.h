#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_315;
class Class_1_6FA17C56E9FF6BCE;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_123D730D499EEEEA_METHOD_1_C212108A028462A1_OFFSET UNITYSDK_OFFSET(0x8A75120)
#define CLASS_1_123D730D499EEEEA_METHOD_1_FD17DE856A0F658D_OFFSET UNITYSDK_OFFSET(0x8A75330)
#define CLASS_1_123D730D499EEEEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A754F0)

inline static constexpr unsigned int Class_1_123D730D499EEEEA_TypeDefinitionIndex = 40097;

class Class_1_123D730D499EEEEA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_6FA17C56E9FF6BCE*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_6FA17C56E9FF6BCE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_123D730D499EEEEA_TypeDefinitionIndex)->GetStaticField(0x36510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_123D730D499EEEEA__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_315* Method_1_C212108A028462A1(::System::Single a1)
	{
		return ((::Class_0_16E4307DCC419505_315*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_123D730D499EEEEA_METHOD_1_C212108A028462A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FD17DE856A0F658D(::Class_0_16E4307DCC419505_315* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_315*))((::PBYTE)hIl2Cpp + CLASS_1_123D730D499EEEEA_METHOD_1_FD17DE856A0F658D_OFFSET))(a1);
	}
};

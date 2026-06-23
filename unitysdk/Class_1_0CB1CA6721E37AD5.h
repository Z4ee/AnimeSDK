#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_542578800FFE89AA;
class Class_1_5E8D7F836DA392F9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CB1CA6721E37AD5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DFF9010)
#define CLASS_1_0CB1CA6721E37AD5_METHOD_1_45E10D749EF38FBE_OFFSET UNITYSDK_OFFSET(0x1DFF9120)
#define CLASS_1_0CB1CA6721E37AD5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DFF9090)
#define CLASS_1_0CB1CA6721E37AD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8F90)

inline static constexpr unsigned int Class_1_0CB1CA6721E37AD5_TypeDefinitionIndex = 29066;

class Class_1_0CB1CA6721E37AD5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_542578800FFE89AA*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB1CA6721E37AD5__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB1CA6721E37AD5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB1CA6721E37AD5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_45E10D749EF38FBE(::Class_1_5E8D7F836DA392F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + CLASS_1_0CB1CA6721E37AD5_METHOD_1_45E10D749EF38FBE_OFFSET))(this, a1);
	}
};

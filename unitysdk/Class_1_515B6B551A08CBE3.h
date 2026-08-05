#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_542578800FFE89AA;
class Class_1_5E8D7F836DA392F9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_515B6B551A08CBE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F370610)
#define CLASS_1_515B6B551A08CBE3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1F3714F0)
#define CLASS_1_515B6B551A08CBE3_METHOD_1_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x1F370690)
#define CLASS_1_515B6B551A08CBE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F370590)

inline static constexpr unsigned int Class_1_515B6B551A08CBE3_TypeDefinitionIndex = 29417;

class Class_1_515B6B551A08CBE3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_542578800FFE89AA*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_515B6B551A08CBE3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_515B6B551A08CBE3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D7B57D4A6E55D8F9(::Class_1_5E8D7F836DA392F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + CLASS_1_515B6B551A08CBE3_METHOD_1_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_515B6B551A08CBE3_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};

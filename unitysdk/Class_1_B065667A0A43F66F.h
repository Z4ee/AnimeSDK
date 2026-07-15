#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DC40F265DBC51CAA;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_B065667A0A43F66F_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x192355F0)
#define CLASS_1_B065667A0A43F66F_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x19235590)
#define CLASS_1_B065667A0A43F66F_METHOD_1_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x19235690)
#define CLASS_1_B065667A0A43F66F__CTOR_OFFSET UNITYSDK_OFFSET(0x19235640)

inline static constexpr unsigned int Class_1_B065667A0A43F66F_TypeDefinitionIndex = 59831;

class Class_1_B065667A0A43F66F : public ::System::Object
{
public:
	::Class_1_DC40F265DBC51CAA* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_DC40F265DBC51CAA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC40F265DBC51CAA*))((::PBYTE)hIl2Cpp + CLASS_1_B065667A0A43F66F__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B065667A0A43F66F_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B065667A0A43F66F_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_8D0A2531C88B32B1(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_B065667A0A43F66F_METHOD_1_8D0A2531C88B32B1_OFFSET))(this, a1);
	}
};

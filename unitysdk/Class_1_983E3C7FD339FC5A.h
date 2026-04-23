#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
class Class_1_DDB796240B07BA45;
namespace System { class String; }

#define CLASS_1_983E3C7FD339FC5A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x91C30B0)
#define CLASS_1_983E3C7FD339FC5A_METHOD_1_6D91D848EE09BED1_OFFSET UNITYSDK_OFFSET(0x91C3100)
#define CLASS_1_983E3C7FD339FC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x91C3340)

inline static constexpr unsigned int Class_1_983E3C7FD339FC5A_TypeDefinitionIndex = 54709;

class Class_1_983E3C7FD339FC5A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0
	::System::String* RetMessage; // 0x10
	::System::Int32 RetCode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983E3C7FD339FC5A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983E3C7FD339FC5A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_6D91D848EE09BED1(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_DDB796240B07BA45* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + CLASS_1_983E3C7FD339FC5A_METHOD_1_6D91D848EE09BED1_OFFSET))(this, a1, a2);
	}
};

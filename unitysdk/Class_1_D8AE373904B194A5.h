#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_AC6C63F15E9794D3;
namespace System { class String; }

#define CLASS_1_D8AE373904B194A5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15A3F420)
#define CLASS_1_D8AE373904B194A5_METHOD_1_CD1359F199DD00D4_OFFSET UNITYSDK_OFFSET(0x15A3F470)
#define CLASS_1_D8AE373904B194A5__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3F660)

inline static constexpr unsigned int Class_1_D8AE373904B194A5_TypeDefinitionIndex = 59458;

class Class_1_D8AE373904B194A5 : public ::System::Object
{
public:
	// static const ::System::Int32 LMKLBNBJENJ = 0x0; // 0x0
	::System::String* RetMessage; // 0x10
	::System::Int32 RetCode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8AE373904B194A5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8AE373904B194A5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CD1359F199DD00D4(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_296A7AC90F028539* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + CLASS_1_D8AE373904B194A5_METHOD_1_CD1359F199DD00D4_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E97E53C074A278AA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18EF20A0)
#define CLASS_1_E97E53C074A278AA_METHOD_1_211CD2B2BFC133C6_OFFSET UNITYSDK_OFFSET(0x18EF26E0)
#define CLASS_1_E97E53C074A278AA_METHOD_1_5A8F6A8A05490D33_OFFSET UNITYSDK_OFFSET(0x18EF2D60)
#define CLASS_1_E97E53C074A278AA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF1FC0)

inline static constexpr unsigned int Class_1_E97E53C074A278AA_TypeDefinitionIndex = 73982;

class Class_1_E97E53C074A278AA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_6B60059019300BAD*>* Field_1_0; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18
	::Class_2_2090B77B5C7838F2* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_E97E53C074A278AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97E53C074A278AA_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_211CD2B2BFC133C6(::Class_2_6B60059019300BAD* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E97E53C074A278AA_METHOD_1_211CD2B2BFC133C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A8F6A8A05490D33(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_E97E53C074A278AA_METHOD_1_5A8F6A8A05490D33_OFFSET))(this, a1);
	}
};

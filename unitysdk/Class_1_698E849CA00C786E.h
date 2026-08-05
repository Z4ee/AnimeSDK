#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BC98C2F5F2265D2;
class Class_1_698E849CA00C786E_Class_1_04A718CFB2B0DB18_1;
class Class_2_208CC9941471731A_286;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_698E849CA00C786E_METHOD_1_1754A6BBAA1C72DD_OFFSET UNITYSDK_OFFSET(0x17F9C910)
#define CLASS_1_698E849CA00C786E_METHOD_1_46825D7D3AB9AE18_OFFSET UNITYSDK_OFFSET(0x17F9CE90)
#define CLASS_1_698E849CA00C786E_METHOD_1_F9B57DBF3518EF48_OFFSET UNITYSDK_OFFSET(0x17F9CE80)
#define CLASS_1_698E849CA00C786E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9C880)

inline static constexpr unsigned int Class_1_698E849CA00C786E_TypeDefinitionIndex = 10250;

class Class_1_698E849CA00C786E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_698E849CA00C786E_Class_1_04A718CFB2B0DB18_1*>* Field_1_0; // 0x10
	::Class_1_0BC98C2F5F2265D2* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_698E849CA00C786E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1754A6BBAA1C72DD(::Class_1_0BC98C2F5F2265D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BC98C2F5F2265D2*))((::PBYTE)hIl2Cpp + CLASS_1_698E849CA00C786E_METHOD_1_1754A6BBAA1C72DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9B57DBF3518EF48(::Class_1_0BC98C2F5F2265D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BC98C2F5F2265D2*))((::PBYTE)hIl2Cpp + CLASS_1_698E849CA00C786E_METHOD_1_F9B57DBF3518EF48_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_286* Method_1_46825D7D3AB9AE18(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_286*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_698E849CA00C786E_METHOD_1_46825D7D3AB9AE18_OFFSET))(this, a1, a2);
	}
};

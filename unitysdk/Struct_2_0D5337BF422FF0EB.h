#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x77C980)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_61C6859C0A5E0475_OFFSET UNITYSDK_OFFSET(0x77CBB0)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_7FEB365F45BA0DEA_OFFSET UNITYSDK_OFFSET(0x77CA90)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x77CB40)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_C6318B92385B24A9_OFFSET UNITYSDK_OFFSET(0x77C970)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77CB50)
#define STRUCT_2_0D5337BF422FF0EB_METHOD_2_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x77C9D0)

inline static constexpr unsigned int Struct_2_0D5337BF422FF0EB_TypeDefinitionIndex = 46254;

struct alignas(8) Struct_2_0D5337BF422FF0EB
{
	::System::UInt64 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x18
	::System::UInt64 Field_2_2; // 0x20
	::System::UInt64 Field_2_3; // 0x28
	::System::UInt64 Field_2_4; // 0x30
	::System::UInt64 Field_2_5; // 0x38
	::System::UInt64 Field_2_6; // 0x40
	::System::UInt64 Field_2_7; // 0x48
	::System::Byte Field_2_8; // 0x50

	::System::UInt64 Method_2_C6318B92385B24A9(::System::Int32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_C6318B92385B24A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FEB365F45BA0DEA(::System::UInt64& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_7FEB365F45BA0DEA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_61C6859C0A5E0475(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_0D5337BF422FF0EB_METHOD_2_61C6859C0A5E0475_OFFSET))(this, a1, a2);
	}
};

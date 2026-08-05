#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_92D8D5F818B7334A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_34F9DF1DF9CF8BDA_OFFSET UNITYSDK_OFFSET(0x17D1AA60)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17D1A880)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_3DD4D1DE715B4775_OFFSET UNITYSDK_OFFSET(0x17D1A330)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_41541A33EEEE8620_OFFSET UNITYSDK_OFFSET(0x17D1A9B0)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17D1A930)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_93C96B23B5C97B28_OFFSET UNITYSDK_OFFSET(0x17D1A6D0)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17D1A8D0)
#define CLASS_1_FB1F886AC36EE9C0_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x17D1A7F0)
#define CLASS_1_FB1F886AC36EE9C0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1A200)

inline static constexpr unsigned int Class_1_FB1F886AC36EE9C0_TypeDefinitionIndex = 40988;

class Class_1_FB1F886AC36EE9C0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_1; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Single Field_1_7; // 0x38
	::System::Int32 Field_1_11; // 0x3C
	::Enum_3_92D8D5F818B7334A Field_1_15; // 0x40
	::System::Boolean Field_1_9; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93C96B23B5C97B28(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_93C96B23B5C97B28_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41541A33EEEE8620(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_41541A33EEEE8620_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DD4D1DE715B4775(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_3DD4D1DE715B4775_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_34F9DF1DF9CF8BDA(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB1F886AC36EE9C0_METHOD_1_34F9DF1DF9CF8BDA_OFFSET))(this, a1);
	}
};

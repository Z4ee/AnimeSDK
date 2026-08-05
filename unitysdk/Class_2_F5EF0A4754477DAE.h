#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F3CBC7F3887FCE9.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_769471637ABAF003;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_F5EF0A4754477DAE_METHOD_2_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x12ACEA50)
#define CLASS_2_F5EF0A4754477DAE_METHOD_2_60D4E3CEBC073B2E_OFFSET UNITYSDK_OFFSET(0x12ACEE90)
#define CLASS_2_F5EF0A4754477DAE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12ACEDF0)
#define CLASS_2_F5EF0A4754477DAE__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACEA40)

inline static constexpr unsigned int Class_2_F5EF0A4754477DAE_TypeDefinitionIndex = 65208;

class Class_2_F5EF0A4754477DAE : public ::Class_1_0F3CBC7F3887FCE9
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_2_6; // 0x28
	::System::Func_1<::System::Boolean>* Field_2_7; // 0x30
	::System::Threading::CancellationToken Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_769471637ABAF003* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_769471637ABAF003*, ::System::Func_1<::System::Boolean>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_F5EF0A4754477DAE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5EF0A4754477DAE_METHOD_2_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5EF0A4754477DAE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_60D4E3CEBC073B2E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5EF0A4754477DAE_METHOD_2_60D4E3CEBC073B2E_OFFSET))(this, a1);
	}
};

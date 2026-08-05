#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_21CBD932FB56D3A8.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_30B210AEDB34BA56;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D92ADC48CDFCC09B_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x113B96A0)
#define CLASS_3_D92ADC48CDFCC09B_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x113B9710)
#define CLASS_3_D92ADC48CDFCC09B_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x113B91D0)
#define CLASS_3_D92ADC48CDFCC09B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x113B91B0)

inline static constexpr unsigned int Class_3_D92ADC48CDFCC09B_3_TypeDefinitionIndex = 60773;

class Class_3_D92ADC48CDFCC09B_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_30B210AEDB34BA56* Invoke(::Struct_2_21CBD932FB56D3A8 a1)
	{
		return ((::Class_1_30B210AEDB34BA56*(*)(::PVOID, ::Struct_2_21CBD932FB56D3A8))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_21CBD932FB56D3A8 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_21CBD932FB56D3A8, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_30B210AEDB34BA56* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_30B210AEDB34BA56*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_3_ENDINVOKE_OFFSET))(this, a1);
	}
};

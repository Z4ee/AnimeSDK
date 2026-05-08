#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D92ADC48CDFCC09B_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11DC48B0)
#define CLASS_3_D92ADC48CDFCC09B_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11DC4920)
#define CLASS_3_D92ADC48CDFCC09B_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x11DC44E0)
#define CLASS_3_D92ADC48CDFCC09B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC44D0)

inline static constexpr unsigned int Class_3_D92ADC48CDFCC09B_1_TypeDefinitionIndex = 39709;

class Class_3_D92ADC48CDFCC09B_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_45B62668F0BA5CF8 Invoke(::Struct_2_EB409772687773A2& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_EB409772687773A2& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_EB409772687773A2&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_45B62668F0BA5CF8 EndInvoke(::Struct_2_EB409772687773A2& a1, ::System::IAsyncResult* a2)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};

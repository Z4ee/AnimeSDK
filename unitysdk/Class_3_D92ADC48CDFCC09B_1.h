#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B54C5CD6E9CE5A0.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D92ADC48CDFCC09B_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18160E60)
#define CLASS_3_D92ADC48CDFCC09B_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18160ED0)
#define CLASS_3_D92ADC48CDFCC09B_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x18160B70)
#define CLASS_3_D92ADC48CDFCC09B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18160B50)

inline static constexpr unsigned int Class_3_D92ADC48CDFCC09B_1_TypeDefinitionIndex = 42606;

class Class_3_D92ADC48CDFCC09B_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_2B54C5CD6E9CE5A0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2B54C5CD6E9CE5A0&))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_2B54C5CD6E9CE5A0& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_2B54C5CD6E9CE5A0&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_2B54C5CD6E9CE5A0& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2B54C5CD6E9CE5A0&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_1_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D92ADC48CDFCC09B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C92A450)
#define CLASS_3_D92ADC48CDFCC09B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C92A4C0)
#define CLASS_3_D92ADC48CDFCC09B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C90E950)
#define CLASS_3_D92ADC48CDFCC09B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C911F00)

inline static constexpr unsigned int Class_3_D92ADC48CDFCC09B_TypeDefinitionIndex = 34590;

class Class_3_D92ADC48CDFCC09B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_C8629618711DF8B3& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_C8629618711DF8B3&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_C8629618711DF8B3& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};

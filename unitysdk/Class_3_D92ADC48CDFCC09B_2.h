#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D92ADC48CDFCC09B_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14E85350)
#define CLASS_3_D92ADC48CDFCC09B_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14E853C0)
#define CLASS_3_D92ADC48CDFCC09B_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14E84F80)
#define CLASS_3_D92ADC48CDFCC09B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14E84F60)

inline static constexpr unsigned int Class_3_D92ADC48CDFCC09B_2_TypeDefinitionIndex = 87631;

class Class_3_D92ADC48CDFCC09B_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_45B62668F0BA5CF8 Invoke(::Struct_2_EB409772687773A2_1& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_EB409772687773A2_1& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_EB409772687773A2_1&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_45B62668F0BA5CF8 EndInvoke(::Struct_2_EB409772687773A2_1& a1, ::System::IAsyncResult* a2)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D92ADC48CDFCC09B_2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define QWER_SSENDORPOOSTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace QWER
{
	inline static constexpr unsigned int SSendOrPoostCallbackInfo_TypeDefinitionIndex = 85849;

	struct alignas(8) SSendOrPoostCallbackInfo
	{
		::System::Threading::SendOrPostCallback* d; // 0x10
		::System::Object* state; // 0x18

		::System::Void _ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_SSENDORPOOSTCALLBACKINFO__CTOR_OFFSET))(this, d, state);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1853F830)
#define MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1853F840)
#define MIHOYO_SDK_PCVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1853F850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PCVerify_TypeDefinitionIndex = 44520;

	class PCVerify : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY__CTOR_OFFSET))(this);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}

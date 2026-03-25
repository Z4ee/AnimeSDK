#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x8559B50)
#define MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x8559B60)
#define MIHOYO_SDK_PCVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x8559B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PCVerify_TypeDefinitionIndex = 37012;

	class PCVerify : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY__CTOR_OFFSET))(this);
		}

		::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::String* Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET))(this, funcName, args, callback);
		}
	};
}

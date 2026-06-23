#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE002160)
#define NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE002190)
#define NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE001EC0)
#define NPCCROWD_AI_BOOLVALUEGETTERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE001EA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int BoolValueGetterDelegate_TypeDefinitionIndex = 66015;

	class BoolValueGetterDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLVALUEGETTERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLVALUEGETTERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

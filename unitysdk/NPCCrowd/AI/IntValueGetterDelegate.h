#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE002740)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE002770)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0024A0)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE002480)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int IntValueGetterDelegate_TypeDefinitionIndex = 58496;

	class IntValueGetterDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTVALUEGETTERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTVALUEGETTERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTVALUEGETTERDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTVALUEGETTERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

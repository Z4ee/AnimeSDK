#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x114F4F30)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x114F4F60)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x114F4C90)
#define NPCCROWD_AI_INTVALUEGETTERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x114F4C80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int IntValueGetterDelegate_TypeDefinitionIndex = 68348;

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

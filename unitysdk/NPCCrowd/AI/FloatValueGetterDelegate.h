#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x102974E0)
#define NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10297510)
#define NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10297240)
#define NPCCROWD_AI_FLOATVALUEGETTERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10297220)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FloatValueGetterDelegate_TypeDefinitionIndex = 81924;

	class FloatValueGetterDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATVALUEGETTERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATVALUEGETTERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

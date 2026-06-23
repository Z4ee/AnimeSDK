#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBB62A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBB62D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBAE8D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB6280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoSetLanguageMaskDelegate_TypeDefinitionIndex = 19425;

	class ConsoleDelegate_PlayGoSetLanguageMaskDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_INVOKE_OFFSET))(this, jsonString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_BEGININVOKE_OFFSET))(this, jsonString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOSETLANGUAGEMASKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

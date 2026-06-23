#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E146E80)
#define MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E146EB0)
#define MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E146B50)
#define MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E146E60)

inline static constexpr unsigned int MB3_TextureBaker_OnCombinedTexturesCoroutineFail_TypeDefinitionIndex = 90551;

class MB3_TextureBaker_OnCombinedTexturesCoroutineFail : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_BEGININVOKE_OFFSET))(this, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_ONCOMBINEDTEXTURESCOROUTINEFAIL_ENDINVOKE_OFFSET))(this, result);
	}
};

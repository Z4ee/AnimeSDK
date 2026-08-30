#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PARSEURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDA3B8F0)
#define RPG_CLIENT_PARSEURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDA3B920)
#define RPG_CLIENT_PARSEURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xDA3B8E0)
#define RPG_CLIENT_PARSEURLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3B870)

namespace RPG::Client
{
	inline static constexpr unsigned int ParseUrlCallBack_TypeDefinitionIndex = 59452;

	class ParseUrlCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

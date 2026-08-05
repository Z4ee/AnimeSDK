#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FB93B80)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FB93BB0)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FB93660)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB93640)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_EventCbFunc_TypeDefinitionIndex = 34919;

	class CriAtomExSequencer_EventCbFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* eventParamsString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_INVOKE_OFFSET))(this, eventParamsString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* eventParamsString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_BEGININVOKE_OFFSET))(this, eventParamsString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

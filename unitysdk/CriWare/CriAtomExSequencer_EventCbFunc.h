#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BF2270)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BF22A0)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BF1D20)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF1D00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_EventCbFunc_TypeDefinitionIndex = 36743;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExSequencer_CriAtomExSequenceEventInfo.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BF1C70)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BF1CE0)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BF12A0)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE8FF0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_EventCallback_TypeDefinitionIndex = 36744;

	class CriAtomExSequencer_EventCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& criAtomExSequenceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_INVOKE_OFFSET))(this, criAtomExSequenceInfo);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& criAtomExSequenceInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_BEGININVOKE_OFFSET))(this, criAtomExSequenceInfo, callback, object);
		}

		::System::Void EndInvoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& criAtomExSequenceInfo, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_ENDINVOKE_OFFSET))(this, criAtomExSequenceInfo, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExSequencer_CriAtomExSequenceEventInfo.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B79BB90)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B79BC00)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B79B4A0)
#define CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79BB20)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_EventCallback_TypeDefinitionIndex = 37843;

	class CriAtomExSequencer_EventCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_EVENTCALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C48D5B0)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C48D600)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C48D2B0)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48D2A0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_SubtitleChangeCallback_TypeDefinitionIndex = 32856;

	class Player_SubtitleChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr subtitleBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_INVOKE_OFFSET))(this, subtitleBuffer);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr subtitleBuffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_BEGININVOKE_OFFSET))(this, subtitleBuffer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

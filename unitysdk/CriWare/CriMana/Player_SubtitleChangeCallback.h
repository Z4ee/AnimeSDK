#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x165049A0)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x165049F0)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16501B20)
#define CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16504930)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_SubtitleChangeCallback_TypeDefinitionIndex = 38925;

	class Player_SubtitleChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SUBTITLECHANGECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

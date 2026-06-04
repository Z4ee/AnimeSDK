#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146D47B0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146D4860)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146D4790)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x146D4720)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_CuePointCallbackFromNativeDelegate_TypeDefinitionIndex = 37259;

	class Player_CuePointCallbackFromNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::CriWare::CriMana::EventPoint& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::CriWare::CriMana::EventPoint& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::CriWare::CriMana::EventPoint& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

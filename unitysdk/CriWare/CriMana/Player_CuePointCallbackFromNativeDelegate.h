#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A4C6F0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A4C7A0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A4C350)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4B070)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_CuePointCallbackFromNativeDelegate_TypeDefinitionIndex = 31239;

	class Player_CuePointCallbackFromNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr ptr1, ::System::IntPtr ptr2, ::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET))(this, ptr1, ptr2, eventPoint);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr ptr1, ::System::IntPtr ptr2, ::CriWare::CriMana::EventPoint& eventPoint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, ptr1, ptr2, eventPoint, callback, object);
		}

		::System::Void EndInvoke(::CriWare::CriMana::EventPoint& eventPoint, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, eventPoint, result);
		}
	};
}

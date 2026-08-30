#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16524770)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x165247A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1651E0A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16524680)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_UIElementTouchUpHandler_TypeDefinitionIndex = 39030;

	class EasyTouch_UIElementTouchUpHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::HedgehogTeam::EasyTouch::Gesture* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UIELEMENTTOUCHUPHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C432C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C432F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C3A570)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C432A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_LongTapEnd2FingersHandler_TypeDefinitionIndex = 37048;

	class EasyTouch_LongTapEnd2FingersHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_INVOKE_OFFSET))(this, gesture);
		}

		::System::IAsyncResult* BeginInvoke(::HedgehogTeam::EasyTouch::Gesture* gesture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_BEGININVOKE_OFFSET))(this, gesture, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LONGTAPEND2FINGERSHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

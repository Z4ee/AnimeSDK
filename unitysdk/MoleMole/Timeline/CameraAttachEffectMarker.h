#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x129DCED0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x129DCF10)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x129DCF20)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_2DAECC8FA22307B0_OFFSET UNITYSDK_OFFSET(0x129DC5C0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_775F18BA548C61E3_OFFSET UNITYSDK_OFFSET(0x129DCC00)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x129DCE80)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x129DCF70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraAttachEffectMarker_TypeDefinitionIndex = 73010;

	class CameraAttachEffectMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* effectKey; // 0x28
		::System::Boolean IsClose; // 0x30
		::MoleMole::Battle::Entity* _effEntity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_2DAECC8FA22307B0(::Struct_2_6CC2897B74C41026 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_2DAECC8FA22307B0_OFFSET))(this, a1);
		}

		::System::Void Method_4_775F18BA548C61E3(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_775F18BA548C61E3_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A1ABBB0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A1ABBF0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_01A472FE96F4E954_OFFSET UNITYSDK_OFFSET(0x1A1AB400)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x1A1ABC00)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_7B12DCDC7C0C0CFC_OFFSET UNITYSDK_OFFSET(0x1A1AB510)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_E5CC1165592D58CD_OFFSET UNITYSDK_OFFSET(0x1A1AB890)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1A1ABB60)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1ABC50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraSMAAChangeMarker_TypeDefinitionIndex = 80595;

	class CameraSMAAChangeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsOpen; // 0x28
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode prevAAMode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_01A472FE96F4E954(::Struct_2_6CC2897B74C41026_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_01A472FE96F4E954_OFFSET))(this, a1);
		}

		::System::Void Method_4_E5CC1165592D58CD(::Struct_2_6CC2897B74C41026_1 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_E5CC1165592D58CD_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_7B12DCDC7C0C0CFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_7B12DCDC7C0C0CFC_OFFSET))(this, a1);
		}
	};
}

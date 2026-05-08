#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x12B26E70)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x12B26EB0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x12B26EC0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_450E67B747AF2D68_OFFSET UNITYSDK_OFFSET(0x12B26820)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x12B26920)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x12B26C70)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_C44E0BC12DE74B57_OFFSET UNITYSDK_OFFSET(0x12B26B60)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x12B26E20)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B26F10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MuteLocalInputMarker_TypeDefinitionIndex = 54360;

	class MuteLocalInputMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		// static const ::System::Int32 TL_MUTE_INPUT_PRIORITY = 0x65; // 0x0
		// static const ::System::String* TL_MUTE_INPUT_GROUP_TAG; // 0x0
		::System::Boolean isMute; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_450E67B747AF2D68(::Struct_2_6CC2897B74C41026_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_450E67B747AF2D68_OFFSET))(this, a1);
		}

		::System::Void Method_4_C44E0BC12DE74B57(::Struct_2_6CC2897B74C41026_2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_C44E0BC12DE74B57_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_82E992240300FB30_OFFSET))(this);
		}

		::System::Void Method_4_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_97D83E4CB3B11935_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x17049CE0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x17049D20)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x17049C40)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_731F5157052BEB12_OFFSET UNITYSDK_OFFSET(0x17049B60)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0x17049BF0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x17049C90)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x17049D30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MusicBattleBonusTimeMarker_TypeDefinitionIndex = 57668;

	class MusicBattleBonusTimeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean isEnter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_731F5157052BEB12(::Struct_2_6CC2897B74C41026_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_731F5157052BEB12_OFFSET))(this, a1);
		}

		::System::Void Method_4_AA94FB72678389C0(::Struct_2_6CC2897B74C41026_2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_AA94FB72678389C0_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}

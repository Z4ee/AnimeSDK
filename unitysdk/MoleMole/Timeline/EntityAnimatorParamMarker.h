#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_1.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x141A7B80)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x141A7BC0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x141A7BD0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x141A7650)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0x141A7AE0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_E0591EC1742C2C2C_OFFSET UNITYSDK_OFFSET(0x141A7550)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x141A7B30)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x141A7C20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EntityAnimatorParamMarker_TypeDefinitionIndex = 80791;

	class EntityAnimatorParamMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* EntityTag; // 0x28
		::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE AnimCtrlParamType; // 0x30
		::System::String* paramName; // 0x38
		::System::Boolean booleanValue; // 0x40
		::System::Int32 intValue; // 0x44
		::System::Single floatValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_E0591EC1742C2C2C(::Struct_2_6CC2897B74C41026_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_E0591EC1742C2C2C_OFFSET))(this, a1);
		}

		::System::Void Method_4_AA94FB72678389C0(::Struct_2_6CC2897B74C41026_1 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_AA94FB72678389C0_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_19FB5FBEA9EA66CD_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TransformVersionTracker;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_GET_TRACKER_OFFSET UNITYSDK_OFFSET(0x19124750)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19122CC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_SET_TRACKER_OFFSET UNITYSDK_OFFSET(0x19124760)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04__CTOR_OFFSET UNITYSDK_OFFSET(0x19123A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCyreneMirrorControl_Class_1_4A4D9596B619BC04_TypeDefinitionIndex = 66852;

	class MonoEffectPluginCyreneMirrorControl_Class_1_4A4D9596B619BC04 : public ::System::Object
	{
	public:
		::TransformVersionTracker* _Tracker_k__BackingField; // 0x10
		::System::UInt32 Field_1_1; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04__CTOR_OFFSET))(this, a1);
		}

		::TransformVersionTracker* get_Tracker()
		{
			return ((::TransformVersionTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_GET_TRACKER_OFFSET))(this);
		}

		::System::Void set_Tracker(::TransformVersionTracker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TransformVersionTracker*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_SET_TRACKER_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_4A4D9596B619BC04_METHOD_1_1808E1CF7A125519_OFFSET))(this);
		}
	};
}

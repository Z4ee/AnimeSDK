#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TransformVersionTracker;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_GET_TRACKER_OFFSET UNITYSDK_OFFSET(0x9CC7B50)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9CC62A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_SET_TRACKER_OFFSET UNITYSDK_OFFSET(0x9CC7B60)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467__CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCyreneMirrorControl_Class_1_21454C4E6B2A8467_TypeDefinitionIndex = 57264;

	class MonoEffectPluginCyreneMirrorControl_Class_1_21454C4E6B2A8467 : public ::System::Object
	{
	public:
		::TransformVersionTracker* _Tracker_k__BackingField; // 0x10
		::System::UInt32 Field_1_1; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467__CTOR_OFFSET))(this, a1);
		}

		::TransformVersionTracker* get_Tracker()
		{
			return ((::TransformVersionTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_GET_TRACKER_OFFSET))(this);
		}

		::System::Void set_Tracker(::TransformVersionTracker* value)
		{
			return ((::System::Void(*)(::PVOID, ::TransformVersionTracker*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_SET_TRACKER_OFFSET))(this, value);
		}

		::System::Boolean Method_1_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CLASS_1_21454C4E6B2A8467_METHOD_1_1808E1CF7A125519_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xF188320)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_INIT_OFFSET UNITYSDK_OFFSET(0xF187F60)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xF188950)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0xF188EE0)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_89914D30EBFCC9C6_OFFSET UNITYSDK_OFFSET(0xF1887C0)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0xF188330)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF188110)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF187F00)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xF188190)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_START_OFFSET UNITYSDK_OFFSET(0xF188170)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xF188180)
#define EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xF188FE0)

namespace EffectPlugin
{
	inline static constexpr unsigned int Effect_CustomFollowPlugin_TypeDefinitionIndex = 47178;

	class Effect_CustomFollowPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Target; // 0x18
		::UnityEngine::Vector3 TargetPositionOffset; // 0x20
		::System::Boolean TargetPositionLocalOffsetEnable; // 0x2C
		::System::Single FollowPositionDampTime; // 0x30
		::UnityEngine::AnimationCurve* SpeedOffsetCurve; // 0x38
		::UnityEngine::AnimationCurve* UDCurve; // 0x40
		::UnityEngine::AnimationCurve* LRCurve; // 0x48
		::System::Single OffsetScaleFactor; // 0x50
		::System::Single OffsetTime; // 0x54
		::System::Boolean ContactStop; // 0x58
		::System::Single ContactRadius; // 0x5C
		::System::Boolean debug; // 0x60
		::System::Boolean UpdateInLateTick; // 0x61
		::System::Boolean FadeOut; // 0x62
		::System::Single _Duration; // 0x64
		::System::Boolean _ContactTarget; // 0x68
		::System::Boolean ContactAttach; // 0x69
		::System::Action* OnContactCallback; // 0x70
		::UnityEngine::Vector3 Field_5_18; // 0x78
		::System::Single Field_5_19; // 0x84
		::UnityEngine::Transform* Field_5_20; // 0x88
		::UnityEngine::Vector3 Field_5_21; // 0x90
		::UnityEngine::Vector3 Field_5_22; // 0x9C
		::UnityEngine::Vector3 Field_5_23; // 0xA8
		::System::Single Field_5_24; // 0xB4
		::System::Boolean Field_5_25; // 0xB8
		::System::Boolean Field_5_26; // 0xB9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_UPDATE_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_INIT_OFFSET))(this);
		}

		::System::Void SetFollowTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_SETFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_89914D30EBFCC9C6(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_89914D30EBFCC9C6_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_3E51EEFB06718274()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_3E51EEFB06718274_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_939383CFABF4988F()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLUGIN_EFFECT_CUSTOMFOLLOWPLUGIN_METHOD_5_939383CFABF4988F_OFFSET))(this);
		}
	};
}

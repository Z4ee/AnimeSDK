#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_EXECUTEFOLLOW_OFFSET UNITYSDK_OFFSET(0xAB79790)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xAB79570)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB79740)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0xAB79580)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETFOLLOWTRAGET_OFFSET UNITYSDK_OFFSET(0xAB795C0)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETOFFSET_OFFSET UNITYSDK_OFFSET(0xAB79620)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETSCALE_OFFSET UNITYSDK_OFFSET(0xAB796C0)
#define RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xAB79DB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MonoEffectFollowTimelinePlugin_TypeDefinitionIndex = 39274;

	class MonoEffectFollowTimelinePlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _followTarget; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x2C
		::UnityEngine::Vector3 Field_5_3; // 0x38
		::System::Single Field_5_4; // 0x44
		::System::Boolean Field_5_5; // 0x48
		::System::Boolean Field_5_6; // 0x49
		::System::Boolean Field_5_7; // 0x4A
		::System::Boolean Field_5_8; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_RESET_OFFSET))(this);
		}

		::System::Void SetFollowTraget(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETFOLLOWTRAGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetOffSet(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetScale(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_SETSCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ExecuteFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MONOEFFECTFOLLOWTIMELINEPLUGIN_EXECUTEFOLLOW_OFFSET))(this);
		}
	};
}

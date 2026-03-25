#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GETATTACHSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x8F113E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x8F11580)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x8F114B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FOLLOWROOT_OFFSET UNITYSDK_OFFSET(0x8F114D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FORCEARROWCENTER_OFFSET UNITYSDK_OFFSET(0x8F115C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0x8F11540)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_LIFEDURATION_OFFSET UNITYSDK_OFFSET(0x8F114F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8F11510)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x8F115A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_USEUPARROW_OFFSET UNITYSDK_OFFSET(0x8F11560)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F11330)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISH_OFFSET UNITYSDK_OFFSET(0x8F11380)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x8F11590)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x8F114C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FOLLOWROOT_OFFSET UNITYSDK_OFFSET(0x8F114E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FORCEARROWCENTER_OFFSET UNITYSDK_OFFSET(0x8F115D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0x8F11550)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_LIFEDURATION_OFFSET UNITYSDK_OFFSET(0x8F11500)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8F11530)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x8F115B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_USEUPARROW_OFFSET UNITYSDK_OFFSET(0x8F11570)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F11310)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenBubbleInfo_TypeDefinitionIndex = 61614;

	class ActivityHipplenBubbleInfo : public ::System::Object
	{
	public:
		::System::String* _Param_k__BackingField; // 0x10
		::System::Action* _OnFinish; // 0x18
		::UnityEngine::Transform* _FollowRoot_k__BackingField; // 0x20
		::System::Boolean _UseUpArrow_k__BackingField; // 0x28
		::System::Boolean _ForceArrowCenter_k__BackingField; // 0x29
		::System::Boolean _IsInverse_k__BackingField; // 0x2A
		::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType _BubbleType_k__BackingField; // 0x2C
		::RPG::Client::TextID _Content_k__BackingField; // 0x30
		::UnityEngine::Vector3 _Offset_k__BackingField; // 0x40
		::System::Single _LifeDuration_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetFinishCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISH_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetAttachScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GETATTACHSCREENPOSITION_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_CONTENT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_FollowRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FOLLOWROOT_OFFSET))(this);
		}

		::System::Void set_FollowRoot(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FOLLOWROOT_OFFSET))(this, value);
		}

		::System::Single get_LifeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_LIFEDURATION_OFFSET))(this);
		}

		::System::Void set_LifeDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_LIFEDURATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_IsInverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_ISINVERSE_OFFSET))(this);
		}

		::System::Void set_IsInverse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_ISINVERSE_OFFSET))(this, value);
		}

		::System::Boolean get_UseUpArrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_USEUPARROW_OFFSET))(this);
		}

		::System::Void set_UseUpArrow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_USEUPARROW_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType get_BubbleType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_BUBBLETYPE_OFFSET))(this);
		}

		::System::Void set_BubbleType(::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_BUBBLETYPE_OFFSET))(this, value);
		}

		::System::String* get_Param()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_PARAM_OFFSET))(this, value);
		}

		::System::Boolean get_ForceArrowCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FORCEARROWCENTER_OFFSET))(this);
		}

		::System::Void set_ForceArrowCenter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FORCEARROWCENTER_OFFSET))(this, value);
		}
	};
}

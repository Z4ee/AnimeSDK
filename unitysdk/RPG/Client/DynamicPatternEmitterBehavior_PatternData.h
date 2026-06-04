#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xB8276B0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFACTIVE_OFFSET UNITYSDK_OFFSET(0xB827710)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFEMITNEXT_OFFSET UNITYSDK_OFFSET(0xB8276F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xB8276D0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_TIMER01_OFFSET UNITYSDK_OFFSET(0xB827730)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xB8276C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFACTIVE_OFFSET UNITYSDK_OFFSET(0xB827720)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFEMITNEXT_OFFSET UNITYSDK_OFFSET(0xB827700)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xB8276E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_TIMER01_OFFSET UNITYSDK_OFFSET(0xB827740)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB827750)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPatternEmitterBehavior_PatternData_TypeDefinitionIndex = 66282;

	class DynamicPatternEmitterBehavior_PatternData : public ::System::Object
	{
	public:
		::System::Boolean IfOverrideInterval; // 0x10
		::System::Boolean IfOverridePhase; // 0x11
		::System::Boolean IfOverrideAudioEvent; // 0x12
		::System::UInt32 Index; // 0x14
		::System::Single Phase; // 0x18
		::System::Single Interval; // 0x1C
		::System::Single DynamicIntensity; // 0x20
		::System::String* AudioEventName; // 0x28
		::UnityEngine::Vector3 LocalPos; // 0x30
		::System::Single LocalScale; // 0x3C
		::UnityEngine::Quaternion LocalRotation; // 0x40
		::System::Boolean IfSelected; // 0x50
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0x58
		::System::Boolean _IfPostAudio_k__BackingField; // 0x60
		::System::Boolean _IfEmitNext_k__BackingField; // 0x61
		::System::Boolean _IfActive_k__BackingField; // 0x62
		::System::Single _Timer01_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::System::Boolean get_IfPostAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFPOSTAUDIO_OFFSET))(this);
		}

		::System::Void set_IfPostAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFPOSTAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean get_IfEmitNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFEMITNEXT_OFFSET))(this);
		}

		::System::Void set_IfEmitNext(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFEMITNEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IfActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFACTIVE_OFFSET))(this);
		}

		::System::Void set_IfActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFACTIVE_OFFSET))(this, a1);
		}

		::System::Single get_Timer01()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_TIMER01_OFFSET))(this);
		}

		::System::Void set_Timer01(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_TIMER01_OFFSET))(this, a1);
		}
	};
}

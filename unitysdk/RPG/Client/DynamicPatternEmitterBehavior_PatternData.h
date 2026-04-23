#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xA1A5930)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFACTIVE_OFFSET UNITYSDK_OFFSET(0xA1A5990)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFEMITNEXT_OFFSET UNITYSDK_OFFSET(0xA1A5970)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xA1A5950)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_TIMER01_OFFSET UNITYSDK_OFFSET(0xA1A59B0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xA1A5940)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFACTIVE_OFFSET UNITYSDK_OFFSET(0xA1A59A0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFEMITNEXT_OFFSET UNITYSDK_OFFSET(0xA1A5980)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xA1A5960)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_TIMER01_OFFSET UNITYSDK_OFFSET(0xA1A59C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1A59D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPatternEmitterBehavior_PatternData_TypeDefinitionIndex = 65355;

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

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_AUDIOPLAYERGO_OFFSET))(this, value);
		}

		::System::Boolean get_IfPostAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFPOSTAUDIO_OFFSET))(this);
		}

		::System::Void set_IfPostAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFPOSTAUDIO_OFFSET))(this, value);
		}

		::System::Boolean get_IfEmitNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFEMITNEXT_OFFSET))(this);
		}

		::System::Void set_IfEmitNext(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFEMITNEXT_OFFSET))(this, value);
		}

		::System::Boolean get_IfActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_IFACTIVE_OFFSET))(this);
		}

		::System::Void set_IfActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_IFACTIVE_OFFSET))(this, value);
		}

		::System::Single get_Timer01()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_GET_TIMER01_OFFSET))(this);
		}

		::System::Void set_Timer01(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PATTERNDATA_SET_TIMER01_OFFSET))(this, value);
		}
	};
}

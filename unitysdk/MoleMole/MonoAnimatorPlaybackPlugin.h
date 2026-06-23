#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F37CFD857F83B611;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x17E8BE80)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17E8CF30)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E8C040)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E8CE30)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYANDMUTEINTERACT_OFFSET UNITYSDK_OFFSET(0x17E8CF90)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0x17E8CBE0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x17E8C370)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x17E8C500)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETANIMTOFINISH_OFFSET UNITYSDK_OFFSET(0x17E8CD70)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETDATA_OFFSET UNITYSDK_OFFSET(0x17E8C250)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_STARTFROMTIME_OFFSET UNITYSDK_OFFSET(0x17E8C2D0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8D150)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimatorPlaybackPlugin_TypeDefinitionIndex = 55781;

	class MonoAnimatorPlaybackPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::String* clipNameForward; // 0x28
		::System::String* clipNameBackward; // 0x30
		::System::String* soundEventForward; // 0x38
		::System::String* soundEventBackward; // 0x40
		::System::Boolean canLoop; // 0x48
		::System::Boolean isInReverse; // 0x49
		::System::Boolean needCheckEnd; // 0x4A
		::System::String* savedPlayName; // 0x50
		::Class_3_F37CFD857F83B611* cachedComponent; // 0x58
		::System::UInt32 Field_5_11; // 0x60
		::System::UInt32 Field_5_12; // 0x64
		::UnityEngine::GameObject* Field_5_13; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::MoleMole::Config::EtherEyesFixConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesFixConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETDATA_OFFSET))(this, a1);
		}

		::System::Void StartFromTime(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_STARTFROMTIME_OFFSET))(this, a1, a2);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void PlayBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void PlaySound(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYSOUND_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimToFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETANIMTOFINISH_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONUPDATE_OFFSET))(this);
		}

		::System::Void PlayAndMuteInteract(::System::Boolean a1, ::Class_3_F37CFD857F83B611* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_F37CFD857F83B611*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYANDMUTEINTERACT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}
	};
}

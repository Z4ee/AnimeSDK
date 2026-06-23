#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ChannelMixerBehaviour_Struct_2_52AD02145F5FCE36_19.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1304BF20)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1304C730)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1304DA70)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_3ECED01F1E339890_OFFSET UNITYSDK_OFFSET(0x1304C210)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1304DAA0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1304DA90)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1304DA80)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1304C600)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1304D3B0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1304D600)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1304DA40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChannelMixerBehaviour_TypeDefinitionIndex = 60514;

	class ChannelMixerBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ChannelMixerBehaviour_Struct_2_52AD02145F5FCE36_19 _methodParm; // 0x18
		::System::Boolean enabled; // 0x64
		::System::Boolean active_redOutRedIn; // 0x65
		::System::Boolean use_redOutRedIn; // 0x66
		::System::Single redOutRedIn; // 0x68
		::System::Boolean active_redOutGreenIn; // 0x6C
		::System::Boolean use_redOutGreenIn; // 0x6D
		::System::Single redOutGreenIn; // 0x70
		::System::Boolean active_redOutBlueIn; // 0x74
		::System::Boolean use_redOutBlueIn; // 0x75
		::System::Single redOutBlueIn; // 0x78
		::System::Boolean active_greenOutRedIn; // 0x7C
		::System::Boolean use_greenOutRedIn; // 0x7D
		::System::Single greenOutRedIn; // 0x80
		::System::Boolean active_greenOutGreenIn; // 0x84
		::System::Boolean use_greenOutGreenIn; // 0x85
		::System::Single greenOutGreenIn; // 0x88
		::System::Boolean active_greenOutBlueIn; // 0x8C
		::System::Boolean use_greenOutBlueIn; // 0x8D
		::System::Single greenOutBlueIn; // 0x90
		::System::Boolean active_blueOutRedIn; // 0x94
		::System::Boolean use_blueOutRedIn; // 0x95
		::System::Single blueOutRedIn; // 0x98
		::System::Boolean active_blueOutGreenIn; // 0x9C
		::System::Boolean use_blueOutGreenIn; // 0x9D
		::System::Single blueOutGreenIn; // 0xA0
		::System::Boolean active_blueOutBlueIn; // 0xA4
		::System::Boolean use_blueOutBlueIn; // 0xA5
		::System::Single blueOutBlueIn; // 0xA8
		::UnityEngine::Rendering::Universal::ChannelMixer* _ChannelMixer; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::ChannelMixer* Method_4_3ECED01F1E339890(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMixer*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_METHOD_4_3ECED01F1E339890_OFFSET))(this, a1);
		}
	};
}

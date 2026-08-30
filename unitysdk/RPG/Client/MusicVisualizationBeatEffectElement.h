#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_159F4A26A6FBCACF;
namespace RPG::Client { class MusicVisualization_BeatEffectElementVisualBase; }
namespace RPG::Client { class PerMusicParameterBeat; }
namespace RPG::Client { class PerStateParamBeat; }
namespace RPG::Client { class PolymerEffectControllBase; }
namespace RPG::Client { class PolymerPropertyLinkMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A30ECE0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_08FB2E057A26F16B_OFFSET UNITYSDK_OFFSET(0x1A30E040)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_1AF176CFC417D7E6_OFFSET UNITYSDK_OFFSET(0x1A30EE90)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_235F2F68A3E18565_OFFSET UNITYSDK_OFFSET(0x1A30ED30)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_1_OFFSET UNITYSDK_OFFSET(0x1A30D3D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1A30D200)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A30DB50)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_3A846539492F7AEE_OFFSET UNITYSDK_OFFSET(0x1A30EBC0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x1A30DD70)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A30E700)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_47AEC97549AC0984_OFFSET UNITYSDK_OFFSET(0x1A30DEF0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x1A30D5A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x1A30D680)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_6D29A9D2B772184B_OFFSET UNITYSDK_OFFSET(0x1A30E1A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A30D120)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x1A30CA80)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_A726FBCF06896C90_OFFSET UNITYSDK_OFFSET(0x1A30E2D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1A30DBD0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_BD10C86B2DE11FBC_OFFSET UNITYSDK_OFFSET(0x1A30E4D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x1A30EA60)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A30D0D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1A30DD20)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A30D090)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x1A30E9F0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0x1A30E940)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualizationBeatEffectElement_TypeDefinitionIndex = 70771;

	class MusicVisualizationBeatEffectElement : public ::System::Object
	{
	public:
		::System::UInt32 BeatNum; // 0x10
		::System::Boolean NeedRealtimeLoudness; // 0x14
		::System::String* RTPC_Loudness; // 0x18
		::System::Single StateLerpTime; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::PerMusicParameterBeat*>* PerMusicParametersList; // 0x28
		::System::Single CurveWeight; // 0x30
		::UnityEngine::Transform* MVTarget; // 0x38
		::RPG::Client::MusicVisualization_BeatEffectElementVisualBase* ElementVisual; // 0x40
		::System::Single SoundEventTriggerTime; // 0x48
		::System::String* SoundEventName; // 0x50
		::RPG::Client::PolymerPropertyLinkMaterial* Linker; // 0x58
		::System::Int32 _TargetMusicBuffer; // 0x60
		::System::Int32 _TargetStateBuffer; // 0x64
		::RPG::Client::PerMusicParameterBeat* _OldMusic; // 0x68
		::RPG::Client::PerMusicParameterBeat* _NewMusic; // 0x70
		::RPG::Client::PerStateParamBeat* _OldStateParam; // 0x78
		::RPG::Client::PerStateParamBeat* _NewStateParam; // 0x80
		::Class_1_159F4A26A6FBCACF* DataForVisual; // 0x88
		::Class_1_159F4A26A6FBCACF* DataForVisualPause; // 0x90
		::System::Boolean _IsMusicOrStateChanging; // 0x98
		::System::Single _StateLerpVal; // 0x9C
		::System::Single _MusicLerpTimer; // 0xA0
		::System::Single _StateLerpTimer; // 0xA4
		::System::Single _BeatTimer; // 0xA8
		::System::Single _BeatDuration; // 0xAC
		::System::Single _Loudness; // 0xB0
		::System::Single _LoudnessVelocity; // 0xB4
		::System::Int32 _CopiedMusicTarget; // 0xB8
		::System::Int32 _CopiedStateTarget; // 0xBC
		::System::Boolean _AllowCopySwapOnce; // 0xC0
		::System::Boolean _IsMusicChange; // 0xC1
		::System::Boolean _IsMusicStateChange; // 0xC2
		::System::Boolean _IsMusicOrStateChangeImmediate; // 0xC3
		::System::Boolean _IsSoundEventTriggeredThisRound; // 0xC4
		::System::Boolean _NoMusicStateParams; // 0xC5
		::System::Boolean _IsPlayingVisualEffect; // 0xC6
		::System::Int32 _RecordMusicID; // 0xC8
		::System::Int32 _RecordStateID; // 0xCC
		::RPG::Client::PolymerEffectControllBase* _OwnerEffectControllBase; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A44A18C9451109E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_A44A18C9451109E4_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_1_25EC451C0EA68F53()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
		}

		::System::Void Method_1_25EC451C0EA68F53_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_1_OFFSET))(this);
		}

		::System::Void Method_1_5587AE4B03E68C58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
		}

		::System::Void Method_1_64865938ADBCB300(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_64865938ADBCB300_OFFSET))(this, a1);
		}

		::System::Void Method_1_F3DBA65049E25CB1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_F3DBA65049E25CB1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_1_6D29A9D2B772184B(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_6D29A9D2B772184B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_A726FBCF06896C90(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_A726FBCF06896C90_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_47AEC97549AC0984(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_47AEC97549AC0984_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_08FB2E057A26F16B(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_08FB2E057A26F16B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C4FDF5DB46830B8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_C4FDF5DB46830B8A_OFFSET))(this, a1);
		}

		::System::Void Method_1_3A846539492F7AEE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_3A846539492F7AEE_OFFSET))(this, a1);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::Void Method_1_235F2F68A3E18565(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_235F2F68A3E18565_OFFSET))(this, a1);
		}

		::System::Single Method_1_1AF176CFC417D7E6(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_1AF176CFC417D7E6_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD10C86B2DE11FBC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_BD10C86B2DE11FBC_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_3E23A2EE3F65066B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_3E23A2EE3F65066B_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}
	};
}

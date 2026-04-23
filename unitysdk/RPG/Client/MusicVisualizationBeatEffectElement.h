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

#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xAB24BC0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_08DE6D6055D48622_OFFSET UNITYSDK_OFFSET(0xAB24050)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_1AF176CFC417D7E6_OFFSET UNITYSDK_OFFSET(0xAB24D80)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_235F2F68A3E18565_OFFSET UNITYSDK_OFFSET(0xAB24C10)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_1_OFFSET UNITYSDK_OFFSET(0xAB23430)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0xAB23260)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAB23C20)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAB24700)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0xAB236E0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_6D29A9D2B772184B_OFFSET UNITYSDK_OFFSET(0xAB241A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_773889DEDA28F8D7_OFFSET UNITYSDK_OFFSET(0xAB242D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAB231A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xAB24990)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xAB22D30)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xAB23E30)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_BD10C86B2DE11FBC_OFFSET UNITYSDK_OFFSET(0xAB244D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAB23150)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAB23DE0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB23110)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xAB24AD0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0xAB24920)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xAB23600)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xAB23CA0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0xAB24870)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_FF98CB4188C95FE7_OFFSET UNITYSDK_OFFSET(0xAB23F60)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB24E50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualizationBeatEffectElement_TypeDefinitionIndex = 65296;

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

		::System::Void Method_1_907E24F785836BA0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_907E24F785836BA0_OFFSET))(this);
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

		::System::Void Method_1_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
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

		::System::Void Method_1_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_1_6D29A9D2B772184B(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_6D29A9D2B772184B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_773889DEDA28F8D7(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_773889DEDA28F8D7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_FF98CB4188C95FE7(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_FF98CB4188C95FE7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_08DE6D6055D48622(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_08DE6D6055D48622_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
		}

		::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
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

		::System::Void Method_1_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}
	};
}

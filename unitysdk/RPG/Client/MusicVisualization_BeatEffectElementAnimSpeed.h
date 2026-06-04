#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"

class Class_1_159F4A26A6FBCACF;
namespace RPG::Client { class MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC2368C0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_8A4821B6962F6B25_OFFSET UNITYSDK_OFFSET(0xC236450)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xC236860)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC236690)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0xC236400)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_EF9FF539AE18C3F9_OFFSET UNITYSDK_OFFSET(0xC2366F0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xC236800)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementAnimSpeed_TypeDefinitionIndex = 66224;

	class MusicVisualization_BeatEffectElementAnimSpeed : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::Il2CppArray<::RPG::Client::MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam*>* AnimStateParams; // 0x30
		::System::String* _ClipName; // 0x38
		::Il2CppArray<::UnityEngine::AnimatorClipInfo>* _ClipInfos; // 0x40
		::System::Single _AnimationDuration; // 0x48
		::UnityEngine::Animator* _Animator; // 0x50
		::System::Int32 _RandomIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E530905EC9C5B4AD(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_E530905EC9C5B4AD_OFFSET))(this, a1);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		static ::System::Int32 Method_2_EF9FF539AE18C3F9(::Il2CppArray<::RPG::Client::MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::Client::MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_EF9FF539AE18C3F9_OFFSET))(a1);
		}

		::System::Void Method_2_8A4821B6962F6B25(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_8A4821B6962F6B25_OFFSET))(this, a1);
		}

		::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementSetAnim_AnimValueFrom.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"

class Class_1_159F4A26A6FBCACF;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_METHOD_2_D4684D4E31B8D8A0_OFFSET UNITYSDK_OFFSET(0x1A317100)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_METHOD_2_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0x1A317150)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A317350)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementSetAnim_TypeDefinitionIndex = 70780;

	class MusicVisualization_BeatEffectElementSetAnim : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::String* AnimatorIntegerParamName; // 0x30
		::RPG::Client::MusicVisualization_BeatEffectElementSetAnim_AnimValueFrom AnimValueFromMode; // 0x38
		::UnityEngine::Animator* _Animator; // 0x40
		::System::Int32 _Value; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D4684D4E31B8D8A0(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_METHOD_2_D4684D4E31B8D8A0_OFFSET))(this, a1);
		}

		::System::Void Method_2_F232DA5FE2B51D5A(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_METHOD_2_F232DA5FE2B51D5A_OFFSET))(this, a1);
		}
	};
}

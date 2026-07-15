#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class AniamtorControlConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3404C0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B340500)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B340510)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlClip___c_TypeDefinitionIndex = 46083;

	class AnimatorControlClip___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPGTools::Timeline::AniamtorControlConfig*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPGTools::Timeline::AniamtorControlConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorControlClip___c_TypeDefinitionIndex)->GetStaticField(0x6B2A0);
		}
		static ::RPGTools::Timeline::AnimatorControlClip___c** StaticGet___9()
		{
			return (::RPGTools::Timeline::AnimatorControlClip___c**)Il2CppClass::FromTypeDefinitionIndex(AnimatorControlClip___c_TypeDefinitionIndex)->GetStaticField(0x6B2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__CTOR_OFFSET))(this);
		}

		::System::String* _UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName_b__6_0(::RPGTools::Timeline::AniamtorControlConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::AniamtorControlConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_B__6_0_OFFSET))(this, a1);
		}
	};
}

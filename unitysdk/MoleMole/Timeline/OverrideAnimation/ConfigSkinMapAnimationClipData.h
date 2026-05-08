#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::OverrideAnimation { class AnimationClipInfo; }
namespace MoleMole::Timeline::OverrideAnimation { class ConfigSkinMapAnimationClipData_GetSkinIDAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETANIMATIONCLIP_1_OFFSET UNITYSDK_OFFSET(0x1BFAAA70)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1BFAA350)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETUNITANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x1BFAA700)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFAAE10)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAAE00)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int ConfigSkinMapAnimationClipData_TypeDefinitionIndex = 30678;

	class ConfigSkinMapAnimationClipData : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::OverrideAnimation::ConfigSkinMapAnimationClipData_GetSkinIDAction** StaticGet_GetSkinId()
		{
			return (::MoleMole::Timeline::OverrideAnimation::ConfigSkinMapAnimationClipData_GetSkinIDAction**)Il2CppClass::FromTypeDefinitionIndex(ConfigSkinMapAnimationClipData_TypeDefinitionIndex)->GetStaticField(0x24C20);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo*>*>*>** StaticGet_m_AnimationClips()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSkinMapAnimationClipData_TypeDefinitionIndex)->GetStaticField(0x24C28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA__CCTOR_OFFSET))();
		}

		static ::UnityEngine::AnimationClip* GetAnimationClip(::System::Int32 unitId, ::System::String* animationClipName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETANIMATIONCLIP_OFFSET))(unitId, animationClipName);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* GetUnitAnimationClips(::System::Int32 unitId, ::System::String* animationClipName)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETUNITANIMATIONCLIPS_OFFSET))(unitId, animationClipName);
		}

		static ::UnityEngine::AnimationClip* GetAnimationClip_1(::System::Int32 unitId, ::System::Int32 skinId, ::System::String* animationClipName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETANIMATIONCLIP_1_OFFSET))(unitId, skinId, animationClipName);
		}
	};
}

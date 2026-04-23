#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB92E140)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB92E130)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_VIRTUALCAMERANOISECONFIGS_OFFSET UNITYSDK_OFFSET(0xB92E080)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB92E040)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB92E0B0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB92E0F0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB92E000)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB92E300)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraNoiseClip_TypeDefinitionIndex = 44597;

	class VirtualCameraNoiseClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Boolean UseTemplate; // 0x19
		::System::String* TemplateName; // 0x20
		::RPGTools::Timeline::VirtualCameraNoiseConfig* NoiseConfig; // 0x28
		::System::String* NewTemplateName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_VirtualCameraNoiseConfigs()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_VIRTUALCAMERANOISECONFIGS_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_METHOD_4_CA373AA1C7054598_3_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

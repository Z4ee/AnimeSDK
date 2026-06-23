#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole::Timeline { class TextureSheet_TV_WallBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x16438A40)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x16438A30)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16438E10)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_METHOD_4_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x16438C50)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16438E00)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16438D70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureSheet_TV_WallClip_TypeDefinitionIndex = 77758;

	class TextureSheet_TV_WallClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Boolean* StaticGet_isLoadConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextureSheet_TV_WallClip_TypeDefinitionIndex)->GetStaticField(0x126F0);
		}
		::Il2CppArray<::MoleMole::SceneObjectStateWidget*>* walls; // 0x18
		::System::String* configKey; // 0x20
		::System::Boolean IgroneTimeScale; // 0x28
		::MoleMole::Timeline::TextureSheet_TV_WallBehaviour* template_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_4_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_METHOD_4_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_4_8A8F4D8840527053()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_METHOD_4_8A8F4D8840527053_OFFSET))();
		}
	};
}

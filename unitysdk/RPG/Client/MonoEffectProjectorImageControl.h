#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MonoEffectProjectorImageControlBehavior; }
namespace RPG::Client { class TextureReplaceItem; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPROJECTORIMAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39BFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectProjectorImageControl_TypeDefinitionIndex = 70701;

	class MonoEffectProjectorImageControl : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MonoEffectProjectorImageControlBehavior*>
	{
	public:
		::System::Single SwitchSpeed; // 0x30
		::UnityEngine::AnimationCurve* swithProgress; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* ImageTexture2Ds; // 0x40
		::Il2CppArray<::RPG::Client::TextureReplaceItem*>* MaleTextureReplaceArr; // 0x48
		::UnityEngine::Renderer* ImageRenderer; // 0x50
		::System::Int32 ImageSetNum; // 0x58
		::System::String* EvSwitchPage; // 0x60
		::System::Single Progress; // 0x68
		::System::Single Timer; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPROJECTORIMAGECONTROL__CTOR_OFFSET))(this);
		}
	};
}

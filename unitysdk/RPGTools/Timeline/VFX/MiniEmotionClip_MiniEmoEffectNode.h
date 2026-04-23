#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOEFFECTNODE_METHOD_1_57970938A8CBBC79_OFFSET UNITYSDK_OFFSET(0xB92A510)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB92A580)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int MiniEmotionClip_MiniEmoEffectNode_TypeDefinitionIndex = 45372;

	class MiniEmotionClip_MiniEmoEffectNode : public ::System::Object
	{
	public:
		::System::String* NodePath; // 0x10
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOEFFECTNODE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::MiniEmoEffectNodeVisible* Method_1_57970938A8CBBC79()
		{
			return ((::RPG::GameCore::MiniEmoEffectNodeVisible*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOEFFECTNODE_METHOD_1_57970938A8CBBC79_OFFSET))(this);
		}
	};
}

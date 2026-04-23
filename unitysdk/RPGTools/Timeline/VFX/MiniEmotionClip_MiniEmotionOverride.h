#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace RPGTools::Timeline::VFX { class MiniEmotionClip_MiniEmoEffectNode; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_METHOD_1_662DC3C7EAAAA05A_OFFSET UNITYSDK_OFFSET(0xB92A270)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB92A590)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int MiniEmotionClip_MiniEmotionOverride_TypeDefinitionIndex = 45371;

	class MiniEmotionClip_MiniEmotionOverride : public ::System::Object
	{
	public:
		::System::Boolean Override_OffsetPosition; // 0x10
		::RPG::MVector3 OffsetPosition; // 0x14
		::System::Boolean Override_OffsetRotation; // 0x20
		::RPG::MVector3 OffsetRotation; // 0x24
		::System::Boolean Override_AttachTarget; // 0x30
		::System::String* AttachPoint; // 0x38
		::System::Boolean Override_NodeVisible; // 0x40
		::Il2CppArray<::RPGTools::Timeline::VFX::MiniEmotionClip_MiniEmoEffectNode*>* NodeVisible; // 0x48
		::System::Boolean Override_Speed; // 0x50
		::System::Single Speed; // 0x54
		::System::Boolean Override_Scale; // 0x58
		::RPG::MVector3 Scale; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::MiniEmoEffectOverride* Method_1_662DC3C7EAAAA05A()
		{
			return ((::RPG::GameCore::MiniEmoEffectOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_METHOD_1_662DC3C7EAAAA05A_OFFSET))(this);
		}
	};
}

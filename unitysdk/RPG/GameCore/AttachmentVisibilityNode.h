#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_METHOD_2_C33412427F5539BF_OFFSET UNITYSDK_OFFSET(0x1CE2C570)
#define RPG_GAMECORE_ATTACHMENTVISIBILITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachmentVisibilityNode_TypeDefinitionIndex = 22125;

	class AttachmentVisibilityNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicString* DynamicName; // 0x18
		::System::Boolean OverridePrefabAttachPoint; // 0x20
		::System::String* ParentConstraintName; // 0x28
		::System::String* TriggerEffectPath; // 0x30
		::System::Boolean FollowFirstFrameOnLateTick; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHMENTVISIBILITYNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C33412427F5539BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachmentVisibilityNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachmentVisibilityNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_METHOD_2_C33412427F5539BF_OFFSET))(a1, a2);
		}
	};
}

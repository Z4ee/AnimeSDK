#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayRogueSimpleTalk.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_5C5E746A8CEED886_OFFSET UNITYSDK_OFFSET(0x19A22E00)
#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_7E8D1EDFC23EEA67_OFFSET UNITYSDK_OFFSET(0x19A22E80)
#define RPG_GAMECORE_PLAYAEONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A22E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAeonTalk_TypeDefinitionIndex = 19948;

	class PlayAeonTalk : public ::RPG::GameCore::PlayRogueSimpleTalk
	{
	public:
		::System::UInt32 AeonTalkId; // 0x28
		::System::UInt32 AeonTalkCount; // 0x2C
		::System::UInt32 AeonTalkAssigned; // 0x30
		::System::Boolean AeonTalkIsAssigned; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C5E746A8CEED886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_5C5E746A8CEED886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E8D1EDFC23EEA67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_7E8D1EDFC23EEA67_OFFSET))(a1, a2);
		}
	};
}

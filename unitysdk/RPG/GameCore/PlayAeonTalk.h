#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayRogueSimpleTalk.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_308B48D2B9215BD5_OFFSET UNITYSDK_OFFSET(0x18C0BEA0)
#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_398DBB32D27E48FC_OFFSET UNITYSDK_OFFSET(0x18C0BE20)
#define RPG_GAMECORE_PLAYAEONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAeonTalk_TypeDefinitionIndex = 20089;

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

		static ::System::Void Method_4_398DBB32D27E48FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_398DBB32D27E48FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_308B48D2B9215BD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_308B48D2B9215BD5_OFFSET))(a1, a2);
		}
	};
}

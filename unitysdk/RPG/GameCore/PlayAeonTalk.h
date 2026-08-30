#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayRogueSimpleTalk.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_7E8D1EDFC23EEA67_OFFSET UNITYSDK_OFFSET(0x1D346CF0)
#define RPG_GAMECORE_PLAYAEONTALK_METHOD_4_A34B847C50998E52_OFFSET UNITYSDK_OFFSET(0x1D346CB0)
#define RPG_GAMECORE_PLAYAEONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D346CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAeonTalk_TypeDefinitionIndex = 20869;

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

		static ::System::Void Method_4_A34B847C50998E52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_A34B847C50998E52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E8D1EDFC23EEA67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_METHOD_4_7E8D1EDFC23EEA67_OFFSET))(a1, a2);
		}
	};
}

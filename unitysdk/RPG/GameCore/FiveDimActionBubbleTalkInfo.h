#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_METHOD_2_2229FD1F3CE0AC49_OFFSET UNITYSDK_OFFSET(0x1BA85EC0)
#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_METHOD_2_A06FC788D6FE0B8D_OFFSET UNITYSDK_OFFSET(0x1BA85D90)
#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA85EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimActionBubbleTalkInfo_TypeDefinitionIndex = 18040;

	class FiveDimActionBubbleTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::RPG::Client::TextID DialogueTextmapID; // 0x18
		::System::UInt32 TalkSentenceID; // 0x28
		::System::Boolean EnableVoice; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A06FC788D6FE0B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_METHOD_2_A06FC788D6FE0B8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2229FD1F3CE0AC49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimActionBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_METHOD_2_2229FD1F3CE0AC49_OFFSET))(a1, a2);
		}
	};
}

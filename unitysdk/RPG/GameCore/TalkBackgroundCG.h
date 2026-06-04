#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TalkBgCGBlendType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKBACKGROUNDCG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CEDD30)
#define RPG_GAMECORE_TALKBACKGROUNDCG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEE030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkBackgroundCG_TypeDefinitionIndex = 23062;

	class TalkBackgroundCG : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CgID; // 0x10
		::RPG::GameCore::TalkBgCGBlendType BlendType; // 0x14
		::System::Single BlendTime; // 0x18
		::System::Boolean SkipFadeIn; // 0x1C
		::RPG::GameCore::ScreenTransferType BGColor; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Boolean WaitLastVideoLoopEnd; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKBACKGROUNDCG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkBackgroundCG*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkBackgroundCG*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKBACKGROUNDCG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

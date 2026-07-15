#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_METHOD_4_5FFFEB07AD296417_OFFSET UNITYSDK_OFFSET(0x1B78B420)
#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_METHOD_4_85135766A45D7BDE_OFFSET UNITYSDK_OFFSET(0x1B78B470)
#define RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78B460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_PlayBubbleTalk_TypeDefinitionIndex = 19368;

	class ST_Side_PlayBubbleTalk : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x18
		::System::String* TalkSentenceIDs; // 0x20
		::System::Boolean TalkSentenceUseVariable; // 0x28
		::System::String* TalkSentenceVarName; // 0x30
		::System::Boolean EnableVoice; // 0x38
		::System::Boolean IsLoop; // 0x39
		::System::Single LoopInterval; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5FFFEB07AD296417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_METHOD_4_5FFFEB07AD296417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85135766A45D7BDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYBUBBLETALK_METHOD_4_85135766A45D7BDE_OFFSET))(a1, a2);
		}
	};
}

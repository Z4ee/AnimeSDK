#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_1ADF9FFEB2397BFA_OFFSET UNITYSDK_OFFSET(0x19A29980)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_9DAA71DD179A0583_OFFSET UNITYSDK_OFFSET(0x19A29900)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A29950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookOptionTalk_TypeDefinitionIndex = 19976;

	class PlayTarotBookOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DAA71DD179A0583(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_9DAA71DD179A0583_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1ADF9FFEB2397BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_1ADF9FFEB2397BFA_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_1ADF9FFEB2397BFA_OFFSET UNITYSDK_OFFSET(0x1D34CDF0)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_34359ABE382B2AF1_OFFSET UNITYSDK_OFFSET(0x1D34CDB0)
#define RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34CDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookOptionTalk_TypeDefinitionIndex = 20897;

	class PlayTarotBookOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34359ABE382B2AF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_34359ABE382B2AF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1ADF9FFEB2397BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKOPTIONTALK_METHOD_3_1ADF9FFEB2397BFA_OFFSET))(a1, a2);
		}
	};
}

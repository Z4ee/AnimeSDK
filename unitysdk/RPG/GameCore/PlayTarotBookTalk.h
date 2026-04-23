#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookTalkInfo; }

#define RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_71DF5251EC370B16_OFFSET UNITYSDK_OFFSET(0x18C12BF0)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_CA1A67EBDFD237D5_OFFSET UNITYSDK_OFFSET(0x18C12B70)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C12BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookTalk_TypeDefinitionIndex = 20116;

	class PlayTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TarotBookTalkInfo*>* TalkInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA1A67EBDFD237D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_CA1A67EBDFD237D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71DF5251EC370B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_71DF5251EC370B16_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookTalkInfo; }

#define RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_4A801E49CD57F46D_OFFSET UNITYSDK_OFFSET(0x1BA08150)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_71DF5251EC370B16_OFFSET UNITYSDK_OFFSET(0x1BA08190)
#define RPG_GAMECORE_PLAYTAROTBOOKTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA08180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTarotBookTalk_TypeDefinitionIndex = 20345;

	class PlayTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TarotBookTalkInfo*>* TalkInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A801E49CD57F46D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_4A801E49CD57F46D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71DF5251EC370B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTAROTBOOKTALK_METHOD_3_71DF5251EC370B16_OFFSET))(a1, a2);
		}
	};
}

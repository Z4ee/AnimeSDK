#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_PLAYROGUESIMPLETALK_METHOD_3_4B2DCCB17419519E_OFFSET UNITYSDK_OFFSET(0x19A281D0)
#define RPG_GAMECORE_PLAYROGUESIMPLETALK_METHOD_3_F8D832BA4B30C5CA_OFFSET UNITYSDK_OFFSET(0x19A28370)
#define RPG_GAMECORE_PLAYROGUESIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A230D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRogueSimpleTalk_TypeDefinitionIndex = 19945;

	class PlayRogueSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTalkInfo*>* SimpleTalkList; // 0x18
		::System::Boolean IsAeonTalk; // 0x20
		::System::UInt32 AeonTalkAssignedUI; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B2DCCB17419519E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRogueSimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRogueSimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK_METHOD_3_4B2DCCB17419519E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8D832BA4B30C5CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK_METHOD_3_F8D832BA4B30C5CA_OFFSET))(a1, a2);
		}
	};
}

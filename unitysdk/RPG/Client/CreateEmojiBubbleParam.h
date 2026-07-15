#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiIconInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET UNITYSDK_OFFSET(0x1802C260)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1802C250)

namespace RPG::Client
{
	inline static constexpr unsigned int CreateEmojiBubbleParam_TypeDefinitionIndex = 60163;

	class CreateEmojiBubbleParam : public ::System::Object
	{
	public:
		::System::String* BubbleBGPath; // 0x10
		::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* EmojiIconInfos; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20
		::System::Single Duration; // 0x28
		::System::Single BubbleRoll; // 0x2C
		::System::UInt32 PositionIndex; // 0x30
		::System::Boolean IsFromOnlineChat; // 0x34
		::System::Boolean IsVertical; // 0x35
		::System::Boolean UseDummyPosition; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* CreateEmojiIconInfos(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET))(a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiIconInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET UNITYSDK_OFFSET(0x9426EA0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9426E90)

namespace RPG::Client
{
	inline static constexpr unsigned int CreateEmojiBubbleParam_TypeDefinitionIndex = 51091;

	class CreateEmojiBubbleParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::String* BubbleBGPath; // 0x18
		::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* EmojiIconInfos; // 0x20
		::System::UInt32 PositionIndex; // 0x28
		::System::Single Duration; // 0x2C
		::System::Boolean IsVertical; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* CreateEmojiIconInfos(::Il2CppArray<::System::String*>* emojiIconPaths)
		{
			return ((::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET))(emojiIconPaths);
		}
	};
}

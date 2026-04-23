#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_AVATARGUIDEGOTOCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA88A910)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_AVATARGUIDEGOTOCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA88A710)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_AvatarGuideGotoCommand_TypeDefinitionIndex = 58256;

	class MessageContentGotoBlock_AvatarGuideGotoCommand : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarID; // 0x10

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_AVATARGUIDEGOTOCOMMAND__CTOR_OFFSET))(this, avatarID);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_AVATARGUIDEGOTOCOMMAND_EXECUTE_OFFSET))(this);
		}
	};
}

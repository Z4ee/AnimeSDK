#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHATCONTACTPAM_SENDBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9312170)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_SendBlockData_TypeDefinitionIndex = 51304;

	class ChatContactPam_SendBlockData : public ::System::Object
	{
	public:
		::System::Object* Data; // 0x10
		::RPG::Client::MessageContentBlock_BlockType BlockType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDBLOCKDATA__CTOR_OFFSET))(this);
		}
	};
}

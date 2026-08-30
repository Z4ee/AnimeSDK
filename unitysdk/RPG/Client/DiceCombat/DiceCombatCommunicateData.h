#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/System/Object.h"

class Class_1_9F07275E6A514865;
namespace RPG::GameCore { class EmojiConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD21360)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_CHATCONTENT_OFFSET UNITYSDK_OFFSET(0xCD21590)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_COMMUNICATEID_OFFSET UNITYSDK_OFFSET(0xCD21540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xCD21490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0xCD214E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCD21440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD21350)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCommunicateData_TypeDefinitionIndex = 75593;

	class DiceCombatCommunicateData : public ::System::Object
	{
	public:
		::Class_1_9F07275E6A514865* _Row; // 0x10
		::RPG::GameCore::EmojiConfigRow* _EmojiRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatCommunicateData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCommunicateData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::DiceCombatCommunicateType get_Type()
		{
			return ((::RPG::GameCore::DiceCombatCommunicateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_EmojiID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_EMOJIID_OFFSET))(this);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::UInt32 get_CommunicateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_COMMUNICATEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChatContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATEDATA_GET_CHATCONTENT_OFFSET))(this);
		}
	};
}

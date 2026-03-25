#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERATALKDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x93D53B0)
#define RPG_CLIENT_CHIMERATALKDATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x93D53F0)
#define RPG_CLIENT_CHIMERATALKDATA_GET_EVPATH_OFFSET UNITYSDK_OFFSET(0x93D5430)
#define RPG_CLIENT_CHIMERATALKDATA_GET_ISEMOJI_OFFSET UNITYSDK_OFFSET(0x93D53D0)
#define RPG_CLIENT_CHIMERATALKDATA_GET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0x93D5410)
#define RPG_CLIENT_CHIMERATALKDATA_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x93D53C0)
#define RPG_CLIENT_CHIMERATALKDATA_SET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x93D5400)
#define RPG_CLIENT_CHIMERATALKDATA_SET_EVPATH_OFFSET UNITYSDK_OFFSET(0x93D5440)
#define RPG_CLIENT_CHIMERATALKDATA_SET_ISEMOJI_OFFSET UNITYSDK_OFFSET(0x93D53E0)
#define RPG_CLIENT_CHIMERATALKDATA_SET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0x93D5420)
#define RPG_CLIENT_CHIMERATALKDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93D52D0)
#define RPG_CLIENT_CHIMERATALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93D52B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTalkData_TypeDefinitionIndex = 51570;

	class ChimeraTalkData : public ::System::Object
	{
	public:
		::System::String* _EvPath_k__BackingField; // 0x10
		::System::String* _EmojiPath_k__BackingField; // 0x18
		::RPG::Client::TextID _TalkContent_k__BackingField; // 0x20
		::System::Boolean _IsEmoji_k__BackingField; // 0x30
		::System::UInt32 _ChimeraID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 chimeraID, ::RPG::GameCore::ChimeraTalkContent* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraTalkContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA__CTOR_OFFSET))(this, chimeraID, content);
		}

		::System::Void _ctor_1(::System::UInt32 chimeraID, ::System::UInt32 talkID, ::System::UInt32 emojiID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA__CTOR_1_OFFSET))(this, chimeraID, talkID, emojiID);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_CHIMERAID_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_ISEMOJI_OFFSET))(this);
		}

		::System::Void set_IsEmoji(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_ISEMOJI_OFFSET))(this, value);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::Void set_EmojiPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_EMOJIPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TalkContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_TALKCONTENT_OFFSET))(this);
		}

		::System::Void set_TalkContent(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_TALKCONTENT_OFFSET))(this, value);
		}

		::System::String* get_EvPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_GET_EVPATH_OFFSET))(this);
		}

		::System::Void set_EvPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATALKDATA_SET_EVPATH_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class RelicGrowthGuide; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88C9C0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA88CB10)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA88CB20)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0xA88CB30)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88C820)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_REQUESTRELICRANKDATA_OFFSET UNITYSDK_OFFSET(0xA88C8B0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_SET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0xA88CB40)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88C830)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA88CA60)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRankBlock_TypeDefinitionIndex = 58268;

	class MessageContentRelicRankBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::RelicGrowthGuide* _RelicGuide_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__CTOR_OFFSET))(this, avatarID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestRelicRankData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_REQUESTRELICRANKDATA_OFFSET))(this, callback);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean _IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__ISDATAREADY_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::RPG::Client::RelicGrowthGuide* get_RelicGuide()
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_RELICGUIDE_OFFSET))(this);
		}

		::System::Void set_RelicGuide(::RPG::Client::RelicGrowthGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicGrowthGuide*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_SET_RELICGUIDE_OFFSET))(this, value);
		}
	};
}

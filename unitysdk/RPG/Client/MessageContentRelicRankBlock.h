#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class RelicGrowthGuide; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B23C5A0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B23C730)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B23C740)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x1B23C790)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B23C3F0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_REQUESTRELICRANKDATA_OFFSET UNITYSDK_OFFSET(0x1B23C470)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_SET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x1B23C7A0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23C440)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B23C650)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRankBlock_TypeDefinitionIndex = 63322;

	class MessageContentRelicRankBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::RelicGrowthGuide* _RelicGuide_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestRelicRankData(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_REQUESTRELICRANKDATA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_EQUALS_OFFSET))(this, a1);
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

		::System::Void set_RelicGuide(::RPG::Client::RelicGrowthGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicGrowthGuide*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_SET_RELICGUIDE_OFFSET))(this, a1);
		}
	};
}

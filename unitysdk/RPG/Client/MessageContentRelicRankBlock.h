#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class RelicGrowthGuide; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1FEE0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AA20060)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1AA20070)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x1AA200C0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1FD30)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_REQUESTRELICRANKDATA_OFFSET UNITYSDK_OFFSET(0x1AA1FDB0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK_SET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x1AA200D0)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1FD80)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK__ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1AA1FF90)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRankBlock_TypeDefinitionIndex = 60469;

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

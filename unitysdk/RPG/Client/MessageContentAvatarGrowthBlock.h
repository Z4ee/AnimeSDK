#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

namespace RPG::Client { class HandbookGrowthGuideData; }
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class PreReleaseCharaParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA889000)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA8890A0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARPARAM_OFFSET UNITYSDK_OFFSET(0xA8890D0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_GROWTHGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA8890F0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA8890B0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA888DB0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA888EA0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_AVATARPARAM_OFFSET UNITYSDK_OFFSET(0xA8890E0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_GROWTHGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA889100)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA8890C0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA888DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentAvatarGrowthBlock_TypeDefinitionIndex = 58263;

	class MessageContentAvatarGrowthBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::RPG::Client::HandbookGrowthGuideData* _GrowthGuideData_k__BackingField; // 0x28
		::RPG::Client::PreReleaseCharaParam* _AvatarParam_k__BackingField; // 0x30
		::System::Boolean _IsDataReady_k__BackingField; // 0x38
		::System::UInt32 _AvatarID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::String* functionCallID, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK__CTOR_OFFSET))(this, functionCallID, avatarID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_REQUESTDATA_OFFSET))(this, callback);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_ISDATAREADY_OFFSET))(this, value);
		}

		::RPG::Client::PreReleaseCharaParam* get_AvatarParam()
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARPARAM_OFFSET))(this);
		}

		::System::Void set_AvatarParam(::RPG::Client::PreReleaseCharaParam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_AVATARPARAM_OFFSET))(this, value);
		}

		::RPG::Client::HandbookGrowthGuideData* get_GrowthGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_GROWTHGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_GrowthGuideData(::RPG::Client::HandbookGrowthGuideData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_GROWTHGUIDEDATA_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

namespace RPG::Client { class HandbookGrowthGuideData; }
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class PreReleaseCharaParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B238240)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B2382F0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARPARAM_OFFSET UNITYSDK_OFFSET(0x1B238320)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_GROWTHGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1B238340)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B238300)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B237FA0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1B2380D0)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_AVATARPARAM_OFFSET UNITYSDK_OFFSET(0x1B238330)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_GROWTHGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1B238350)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B238310)
#define RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B237FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentAvatarGrowthBlock_TypeDefinitionIndex = 63317;

	class MessageContentAvatarGrowthBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::RPG::Client::HandbookGrowthGuideData* _GrowthGuideData_k__BackingField; // 0x28
		::RPG::Client::PreReleaseCharaParam* _AvatarParam_k__BackingField; // 0x30
		::System::UInt32 _AvatarID_k__BackingField; // 0x38
		::System::Boolean _IsDataReady_k__BackingField; // 0x3C

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestData(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_REQUESTDATA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_ISDATAREADY_OFFSET))(this, a1);
		}

		::RPG::Client::PreReleaseCharaParam* get_AvatarParam()
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_AVATARPARAM_OFFSET))(this);
		}

		::System::Void set_AvatarParam(::RPG::Client::PreReleaseCharaParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_AVATARPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideData* get_GrowthGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_GET_GROWTHGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_GrowthGuideData(::RPG::Client::HandbookGrowthGuideData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTAVATARGROWTHBLOCK_SET_GROWTHGUIDEDATA_OFFSET))(this, a1);
		}
	};
}

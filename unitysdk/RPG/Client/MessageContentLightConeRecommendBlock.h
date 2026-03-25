#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class LightConeGrowthGuide; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B915B0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B91650)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B91680)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_LIGHTCONEGUIDE_OFFSET UNITYSDK_OFFSET(0x9B91660)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B91400)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_REQUESTLIGHTCONERECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9B914A0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B91690)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_SET_LIGHTCONEGUIDE_OFFSET UNITYSDK_OFFSET(0x9B91670)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B91410)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentLightConeRecommendBlock_TypeDefinitionIndex = 51338;

	class MessageContentLightConeRecommendBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::LightConeGrowthGuide* _LightConeGuide_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x20
		::System::Boolean _IsDataReady_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CTOR_OFFSET))(this, avatarID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestLightConeRecommendData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_REQUESTLIGHTCONERECOMMENDDATA_OFFSET))(this, callback);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::LightConeGrowthGuide* get_LightConeGuide()
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_LIGHTCONEGUIDE_OFFSET))(this);
		}

		::System::Void set_LightConeGuide(::RPG::Client::LightConeGrowthGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeGrowthGuide*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_SET_LIGHTCONEGUIDE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_SET_ISDATAREADY_OFFSET))(this, value);
		}
	};
}

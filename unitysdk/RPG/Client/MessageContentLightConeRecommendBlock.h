#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

namespace RPG::Client { class LightConeGrowthGuide; }
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88BA70)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA88BBC0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA88BBE0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_LIGHTCONEGUIDE_OFFSET UNITYSDK_OFFSET(0xA88BBD0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88B860)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_REQUESTLIGHTCONERECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA88B960)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CREATELIGHTCONEGUIDE_OFFSET UNITYSDK_OFFSET(0xA88B890)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88B870)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__ISRECOMMENDDATAREADY_OFFSET UNITYSDK_OFFSET(0xA88BB10)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentLightConeRecommendBlock_TypeDefinitionIndex = 58266;

	class MessageContentLightConeRecommendBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::RPG::Client::LightConeGrowthGuide* _LightConeGuide_k__BackingField; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30

		::System::Void _ctor(::System::String* functionCallID, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CTOR_OFFSET))(this, functionCallID, avatarID);
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

		::RPG::Client::LightConeGrowthGuide* _CreateLightConeGuide()
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__CREATELIGHTCONEGUIDE_OFFSET))(this);
		}

		::System::Boolean _IsRecommendDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK__ISRECOMMENDDATAREADY_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::LightConeGrowthGuide* get_LightConeGuide()
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_LIGHTCONEGUIDE_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}
	};
}

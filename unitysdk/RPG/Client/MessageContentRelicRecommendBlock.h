#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B924E0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B926F0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9B92700)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B92710)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET UNITYSDK_OFFSET(0x9B92720)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B922D0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9B92360)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B922E0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B92580)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x9B927D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRecommendBlock_TypeDefinitionIndex = 51342;

	class MessageContentRelicRecommendBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x18
		::System::Action_1<::System::UInt32>* _Callback; // 0x20
		::System::Boolean _WaitingData; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET))(this, avatarID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean _IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__ISDATAREADY_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_ShowExplain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET))(this);
		}
	};
}

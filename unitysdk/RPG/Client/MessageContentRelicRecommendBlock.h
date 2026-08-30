#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B23CA30)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B23CED0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1B23CEE0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B23CEF0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_RECOMMENDPLAN_OFFSET UNITYSDK_OFFSET(0x1B23D010)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET UNITYSDK_OFFSET(0x1B23CF40)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B23C7F0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B23C870)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23C840)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__GETRECOMMENDPLAN_OFFSET UNITYSDK_OFFSET(0x1B23CAE0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__HASSMARTSUITSYSTEMPLAN_OFFSET UNITYSDK_OFFSET(0x1B23CDF0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B23D060)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRecommendBlock_TypeDefinitionIndex = 63324;

	class MessageContentRelicRecommendBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x28
		::System::Action_1<::System::UInt32>* _Callback; // 0x30
		::System::Boolean _WaitingData; // 0x38
		::System::UInt32 _AvatarID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _GetRecommendPlan()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__GETRECOMMENDPLAN_OFFSET))(this);
		}

		::System::Boolean _HasSmartSuitSystemPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__HASSMARTSUITSYSTEMPLAN_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_ShowExplain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_RecommendPlan()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_RECOMMENDPLAN_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET))(this);
		}
	};
}

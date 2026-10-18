#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System { class String; }

#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET UNITYSDK_OFFSET(0xDA6FD50)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xDA6FE60)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_MYRESULT_OFFSET UNITYSDK_OFFSET(0xDA6FE40)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_RECOMMENDRESULT_OFFSET UNITYSDK_OFFSET(0xDA6FE20)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETMYRELIC_OFFSET UNITYSDK_OFFSET(0xDA6FD00)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETRECOMMENDRELIC_OFFSET UNITYSDK_OFFSET(0xDA6FCB0)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_MYRESULT_OFFSET UNITYSDK_OFFSET(0xDA6FE50)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_RECOMMENDRESULT_OFFSET UNITYSDK_OFFSET(0xDA6FE30)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA6FC90)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatRelicExplainData_TypeDefinitionIndex = 63289;

	class PamChatRelicExplainData : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _MyResult_k__BackingField; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _RecommendResult_k__BackingField; // 0x18
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetRecommendRelic(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETRECOMMENDRELIC_OFFSET))(this, a1);
		}

		::System::Void SetMyRelic(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETMYRELIC_OFFSET))(this, a1);
		}

		::System::String* GetPlayerSendText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_RecommendResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_RECOMMENDRESULT_OFFSET))(this);
		}

		::System::Void set_RecommendResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_RECOMMENDRESULT_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_MyResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_MYRESULT_OFFSET))(this);
		}

		::System::Void set_MyResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_MYRESULT_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_AVATAR_OFFSET))(this);
		}
	};
}

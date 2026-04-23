#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System { class String; }

#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET UNITYSDK_OFFSET(0xAC1FF30)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xAC20040)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_MYRESULT_OFFSET UNITYSDK_OFFSET(0xAC20020)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_RECOMMENDRESULT_OFFSET UNITYSDK_OFFSET(0xAC20000)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETMYRELIC_OFFSET UNITYSDK_OFFSET(0xAC1FEE0)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETRECOMMENDRELIC_OFFSET UNITYSDK_OFFSET(0xAC1FE90)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_MYRESULT_OFFSET UNITYSDK_OFFSET(0xAC20030)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_RECOMMENDRESULT_OFFSET UNITYSDK_OFFSET(0xAC20010)
#define RPG_CLIENT_PAMCHATRELICEXPLAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1FE20)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatRelicExplainData_TypeDefinitionIndex = 58297;

	class PamChatRelicExplainData : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _MyResult_k__BackingField; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* _RecommendResult_k__BackingField; // 0x18
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA__CTOR_OFFSET))(this, avatarID);
		}

		::System::Void SetRecommendRelic(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETRECOMMENDRELIC_OFFSET))(this, result);
		}

		::System::Void SetMyRelic(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SETMYRELIC_OFFSET))(this, result);
		}

		::System::String* GetPlayerSendText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GETPLAYERSENDTEXT_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_RecommendResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_RECOMMENDRESULT_OFFSET))(this);
		}

		::System::Void set_RecommendResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_RECOMMENDRESULT_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_MyResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_MYRESULT_OFFSET))(this);
		}

		::System::Void set_MyResult(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_SET_MYRESULT_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATRELICEXPLAINDATA_GET_AVATAR_OFFSET))(this);
		}
	};
}

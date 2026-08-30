#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7ADF327B3942072B;
class Class_1_8F8B95DED5434317;
class Class_1_BE8A1C72010227C5;
namespace RPG::Client { class ExpeditionBattleFlowTeamViewModel; }
namespace RPG::Client { class ExpeditionBattleFlowViewModel; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleMapFunViewModel; }
namespace RPG::Client { class ExpeditionBattleMapItemViewModel; }
namespace RPG::Client { class ExpeditionBattleMapOverviewViewModel; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace RPG::Client { class ExpeditionBattleRecommendLineupViewModel; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleRouteRecordViewModel; }
namespace RPG::Client { class ExpeditionBattleSettleViewModel; }
namespace RPG::Client { class ExpeditionBattleStageDetailViewModel; }
namespace RPG::Client { class ExpeditionBattleStarInfoDetailViewModel; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace RPG::Client { class ExpeditionBattleTeamEditViewModel; }
namespace System { class String; }

#define CLASS_1_9EE357109ED696DE_METHOD_1_015563B393588A23_OFFSET UNITYSDK_OFFSET(0x16ED60F0)
#define CLASS_1_9EE357109ED696DE_METHOD_1_19ECF2C915B8DEEB_OFFSET UNITYSDK_OFFSET(0x16ED63C0)
#define CLASS_1_9EE357109ED696DE_METHOD_1_30F8475B7A2831B5_OFFSET UNITYSDK_OFFSET(0x16ED5E00)
#define CLASS_1_9EE357109ED696DE_METHOD_1_41CFB8BC15BA7F8C_OFFSET UNITYSDK_OFFSET(0x16ED67D0)
#define CLASS_1_9EE357109ED696DE_METHOD_1_785A376F04A1D8E6_OFFSET UNITYSDK_OFFSET(0x16ED6590)
#define CLASS_1_9EE357109ED696DE_METHOD_1_7886636B15351EE8_OFFSET UNITYSDK_OFFSET(0x16ED6730)
#define CLASS_1_9EE357109ED696DE_METHOD_1_95556F63652E0F10_OFFSET UNITYSDK_OFFSET(0x16ED62E0)
#define CLASS_1_9EE357109ED696DE_METHOD_1_BCCF07AAD0CD24CC_OFFSET UNITYSDK_OFFSET(0x16ED5760)
#define CLASS_1_9EE357109ED696DE_METHOD_1_D3779CDA6005AFEA_OFFSET UNITYSDK_OFFSET(0x16ED5700)
#define CLASS_1_9EE357109ED696DE_METHOD_1_E69DC7D12C0E3484_OFFSET UNITYSDK_OFFSET(0x16ED6650)
#define CLASS_1_9EE357109ED696DE_METHOD_1_E7EA201E8B6CE52B_OFFSET UNITYSDK_OFFSET(0x16ED6500)
#define CLASS_1_9EE357109ED696DE_METHOD_1_EF81EC9AB21DDCA2_OFFSET UNITYSDK_OFFSET(0x16ED5F30)
#define CLASS_1_9EE357109ED696DE_METHOD_1_F52A1D89803B72ED_OFFSET UNITYSDK_OFFSET(0x16ED6600)
#define CLASS_1_9EE357109ED696DE_METHOD_1_FB0A00A6CD4A8723_OFFSET UNITYSDK_OFFSET(0x16ED6240)
#define CLASS_1_9EE357109ED696DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED56F0)

inline static constexpr unsigned int Class_1_9EE357109ED696DE_TypeDefinitionIndex = 64021;

class Class_1_9EE357109ED696DE : public ::System::Object
{
public:
	::Class_1_8F8B95DED5434317* EEFMDEHLLFI; // 0x10

	::System::Void _ctor(::Class_1_8F8B95DED5434317* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F8B95DED5434317*))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleMapOverviewViewModel* Method_1_D3779CDA6005AFEA()
	{
		return ((::RPG::Client::ExpeditionBattleMapOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_D3779CDA6005AFEA_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleStageDetailViewModel* Method_1_BCCF07AAD0CD24CC(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleStageDetailViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_BCCF07AAD0CD24CC_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleTeamEditViewModel* Method_1_30F8475B7A2831B5(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleTeamEditViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_30F8475B7A2831B5_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleSettleViewModel* Method_1_EF81EC9AB21DDCA2()
	{
		return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_EF81EC9AB21DDCA2_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleSettleViewModel* Method_1_015563B393588A23(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_015563B393588A23_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleFlowViewModel* Method_1_FB0A00A6CD4A8723(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleFlowViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_FB0A00A6CD4A8723_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleFlowTeamViewModel* Method_1_95556F63652E0F10(::System::Int32 a1, ::RPG::Client::ExpeditionBattleTeam* a2, ::RPG::Client::ExpeditionBattleRoute* a3, ::System::String* a4)
	{
		return ((::RPG::Client::ExpeditionBattleFlowTeamViewModel*(*)(::PVOID, ::System::Int32, ::RPG::Client::ExpeditionBattleTeam*, ::RPG::Client::ExpeditionBattleRoute*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_95556F63652E0F10_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::ExpeditionBattleRouteRecordViewModel* Method_1_19ECF2C915B8DEEB(::Class_1_BE8A1C72010227C5* a1, ::Class_1_BE8A1C72010227C5* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::Client::ExpeditionBattleRoute* a5, ::System::String* a6)
	{
		return ((::RPG::Client::ExpeditionBattleRouteRecordViewModel*(*)(::PVOID, ::Class_1_BE8A1C72010227C5*, ::Class_1_BE8A1C72010227C5*, ::System::Boolean, ::System::Int32, ::RPG::Client::ExpeditionBattleRoute*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_19ECF2C915B8DEEB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::ExpeditionBattleMapFunViewModel* Method_1_E7EA201E8B6CE52B(::Class_1_7ADF327B3942072B* a1)
	{
		return ((::RPG::Client::ExpeditionBattleMapFunViewModel*(*)(::PVOID, ::Class_1_7ADF327B3942072B*))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_E7EA201E8B6CE52B_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleRecommendLineupViewModel* Method_1_785A376F04A1D8E6(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleRecommendLineupViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_785A376F04A1D8E6_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleRankViewModel* Method_1_F52A1D89803B72ED(::RPG::Client::ExpeditionBattleRank a1)
	{
		return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID, ::RPG::Client::ExpeditionBattleRank))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_F52A1D89803B72ED_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleRankViewModel* Method_1_E69DC7D12C0E3484(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_E69DC7D12C0E3484_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleStarInfoDetailViewModel* Method_1_7886636B15351EE8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_7886636B15351EE8_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ExpeditionBattleMapItemViewModel* Method_1_41CFB8BC15BA7F8C(::RPG::Client::ExpeditionBattleMap* a1)
	{
		return ((::RPG::Client::ExpeditionBattleMapItemViewModel*(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + CLASS_1_9EE357109ED696DE_METHOD_1_41CFB8BC15BA7F8C_OFFSET))(this, a1);
	}
};

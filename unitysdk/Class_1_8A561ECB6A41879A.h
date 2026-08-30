#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_217;
class Class_1_BB4B99DE4C2501EC_8;
class Class_1_F0C8375E94F25B0D;
class Class_1_F3CA30716D4FAF92_8;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client { class CakeRaceBattleItemSyncData; }
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultData; }
namespace RPG::Client { class CakeRaceGameGuessData; }
namespace RPG::Client { class CakeRaceGameSettlementData; }
namespace RPG::Client { class CakeRaceGameVoteData; }
namespace RPG::Client { class CakeRaceReceiveChatEventData; }
namespace RPG::Client::CakeRace { class CakeRaceFieldSectionGameData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8A561ECB6A41879A_ADD_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0x19AA5F10)
#define CLASS_1_8A561ECB6A41879A_ADD_ONBETRSP_OFFSET UNITYSDK_OFFSET(0x19AA5AD0)
#define CLASS_1_8A561ECB6A41879A_ADD_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0x19AA5FD0)
#define CLASS_1_8A561ECB6A41879A_ADD_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0x19AA60D0)
#define CLASS_1_8A561ECB6A41879A_ADD_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x19AA59D0)
#define CLASS_1_8A561ECB6A41879A_ADD_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x19AA5E10)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0x19AA5C50)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0x19AA5D10)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0x19AA5B90)
#define CLASS_1_8A561ECB6A41879A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AA6820)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x19AA6340)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1A184B6C5F44D594_OFFSET UNITYSDK_OFFSET(0x19AA7CD0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x19AA6250)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0x19AA62B0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x19AA7520)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19AA6190)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_25E12FC181ADC039_OFFSET UNITYSDK_OFFSET(0x19AA7C80)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET UNITYSDK_OFFSET(0x19AA6A10)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET UNITYSDK_OFFSET(0x19AA7250)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x19AA75A0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET UNITYSDK_OFFSET(0x19AA76C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET UNITYSDK_OFFSET(0x19AA7B00)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x19AA72A0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET UNITYSDK_OFFSET(0x19AA6890)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x19AA6B20)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET UNITYSDK_OFFSET(0x19AA7900)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x19AA6D10)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x19AA6C70)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x19AA7BC0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_8BABFF9139D92BF8_OFFSET UNITYSDK_OFFSET(0x19AA7480)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_A087B20BA9527AC0_OFFSET UNITYSDK_OFFSET(0x19AA61A0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_BF4D9E2C96B4A31E_OFFSET UNITYSDK_OFFSET(0x19AA6200)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET UNITYSDK_OFFSET(0x19AA6AD0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_D67F16DBEA622A07_OFFSET UNITYSDK_OFFSET(0x19AA73C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET UNITYSDK_OFFSET(0x19AA77E0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0x19AA7090)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x19AA69C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x19AA7190)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0x19AA5F70)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBETRSP_OFFSET UNITYSDK_OFFSET(0x19AA5B30)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0x19AA6050)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0x19AA6130)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x19AA5A50)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x19AA5E90)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0x19AA5CB0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0x19AA5D90)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0x19AA5BF0)
#define CLASS_1_8A561ECB6A41879A__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA6330)

inline static constexpr unsigned int Class_1_8A561ECB6A41879A_TypeDefinitionIndex = 77640;

class Class_1_8A561ECB6A41879A : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* OnVoteRsp; // 0x10
	::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* OnVoteResult; // 0x18
	::System::Action_1<::System::Boolean>* OnBetRsp; // 0x20
	::System::Action_1<::System::Boolean>* OnVoteConfirmRsp; // 0x28
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x30
	::System::Action* OnBattleItemUseFailed; // 0x38
	::Class_1_F0C8375E94F25B0D* IDKCCHJHNDG; // 0x40
	::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* OnSyncBattleItem; // 0x48
	::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* OnChatReceived; // 0x50
	::System::Action_1<::System::UInt32>* OnDynamicCatBorn; // 0x58
	::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* OnLevelStateChanged; // 0x60
	::Class_1_F3CA30716D4FAF92_8* MABAGAEOIPH; // 0x68

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONLEVELSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONLEVELSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONBETRSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONBETRSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTERSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTECONFIRMRSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTECONFIRMRSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTERESULT_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERESULT_OFFSET))(this, a1);
	}

	::System::Void add_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONSYNCBATTLEITEM_OFFSET))(this, a1);
	}

	::System::Void remove_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONSYNCBATTLEITEM_OFFSET))(this, a1);
	}

	::System::Void add_OnBattleItemUseFailed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBattleItemUseFailed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
	}

	::System::Void add_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONCHATRECEIVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONCHATRECEIVED_OFFSET))(this, a1);
	}

	::System::Void add_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONDYNAMICCATBORN_OFFSET))(this, a1);
	}

	::System::Void remove_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONDYNAMICCATBORN_OFFSET))(this, a1);
	}

	::Class_1_F0C8375E94F25B0D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Int32 Method_1_A087B20BA9527AC0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_A087B20BA9527AC0_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType Method_1_BF4D9E2C96B4A31E()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_BF4D9E2C96B4A31E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_8A561ECB6A41879A* Method_1_1F5E0226DAD91587(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_8A561ECB6A41879A*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3ACD7E64D848555E(::Class_1_BB4B99DE4C2501EC_8* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F3CA30716D4FAF92_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_8*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* Method_1_2764269E3FB2594C()
	{
		return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET))(this);
	}

	::System::UInt32 Method_1_C7D8041F7874259A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET))(this);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameGuessData* Method_1_2D8AD55EE43B28F5()
	{
		return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameVoteData* Method_1_D67F16DBEA622A07()
	{
		return ((::RPG::Client::CakeRaceGameVoteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_D67F16DBEA622A07_OFFSET))(this);
	}

	::RPG::Client::CakeRaceEffectDataItem* Method_1_8BABFF9139D92BF8()
	{
		return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_8BABFF9139D92BF8_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768_2(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291_1(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_3D0BF1EF6D10A8B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768_3(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_43BD383C98B4C0C5_217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_217*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameFightResultData* Method_1_25E12FC181ADC039()
	{
		return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_25E12FC181ADC039_OFFSET))(this);
	}

	::RPG::Client::CakeRaceGameSettlementData* Method_1_1A184B6C5F44D594()
	{
		return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1A184B6C5F44D594_OFFSET))(this);
	}
};

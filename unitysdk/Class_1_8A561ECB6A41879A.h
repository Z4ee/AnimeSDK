#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_219;
class Class_1_EB4EA813E55E9D5A;
class Class_1_F0C8375E94F25B0D;
class Class_1_F3CA30716D4FAF92_9;
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

#define CLASS_1_8A561ECB6A41879A_ADD_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xB95C740)
#define CLASS_1_8A561ECB6A41879A_ADD_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xB95C300)
#define CLASS_1_8A561ECB6A41879A_ADD_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xB95C800)
#define CLASS_1_8A561ECB6A41879A_ADD_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xB95C900)
#define CLASS_1_8A561ECB6A41879A_ADD_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB95C200)
#define CLASS_1_8A561ECB6A41879A_ADD_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xB95C640)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xB95C480)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xB95C540)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xB95C3C0)
#define CLASS_1_8A561ECB6A41879A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB95D050)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB95CB70)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1A184B6C5F44D594_OFFSET UNITYSDK_OFFSET(0xB95E500)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB95CA80)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0xB95CAE0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xB95DD50)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB95C9C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_25E12FC181ADC039_OFFSET UNITYSDK_OFFSET(0xB95E4B0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET UNITYSDK_OFFSET(0xB95D240)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET UNITYSDK_OFFSET(0xB95DA80)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0xB95DDD0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET UNITYSDK_OFFSET(0xB95DEF0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET UNITYSDK_OFFSET(0xB95E330)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0xB95DAD0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET UNITYSDK_OFFSET(0xB95D0C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0xB95D350)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET UNITYSDK_OFFSET(0xB95E130)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0xB95D540)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0xB95D4A0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xB95E3F0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_8BABFF9139D92BF8_OFFSET UNITYSDK_OFFSET(0xB95DCB0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_A087B20BA9527AC0_OFFSET UNITYSDK_OFFSET(0xB95C9D0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_BF4D9E2C96B4A31E_OFFSET UNITYSDK_OFFSET(0xB95CA30)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET UNITYSDK_OFFSET(0xB95D300)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_D67F16DBEA622A07_OFFSET UNITYSDK_OFFSET(0xB95DBF0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET UNITYSDK_OFFSET(0xB95E010)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0xB95D8C0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB95D1F0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0xB95D9C0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xB95C7A0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xB95C360)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xB95C880)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xB95C960)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB95C280)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xB95C6C0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xB95C4E0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xB95C5C0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xB95C420)
#define CLASS_1_8A561ECB6A41879A__CTOR_OFFSET UNITYSDK_OFFSET(0xB95CB60)

inline static constexpr unsigned int Class_1_8A561ECB6A41879A_TypeDefinitionIndex = 78112;

class Class_1_8A561ECB6A41879A : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* OnSyncBattleItem; // 0x10
	::Class_1_F0C8375E94F25B0D* IDKCCHJHNDG; // 0x18
	::Class_1_F3CA30716D4FAF92_9* MABAGAEOIPH; // 0x20
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x28
	::System::Action_1<::System::Boolean>* OnVoteRsp; // 0x30
	::System::Action_1<::System::Boolean>* OnBetRsp; // 0x38
	::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* OnChatReceived; // 0x40
	::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* OnVoteResult; // 0x48
	::System::Action_1<::System::Boolean>* OnVoteConfirmRsp; // 0x50
	::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* OnLevelStateChanged; // 0x58
	::System::Action_1<::System::UInt32>* OnDynamicCatBorn; // 0x60
	::System::Action* OnBattleItemUseFailed; // 0x68

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

	::System::Void Method_1_3ACD7E64D848555E(::Class_1_EB4EA813E55E9D5A* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB4EA813E55E9D5A*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F3CA30716D4FAF92_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* Method_1_2764269E3FB2594C()
	{
		return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET))(this);
	}

	::System::UInt32 Method_1_C7D8041F7874259A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET))(this);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameGuessData* Method_1_2D8AD55EE43B28F5()
	{
		return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
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

	::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768_2(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291_1(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_3D0BF1EF6D10A8B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768_3(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_43BD383C98B4C0C5_219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
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

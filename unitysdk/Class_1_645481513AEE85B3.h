#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_62DB3B5C659C57A3;
class Class_3_163A9557988CEBBE;
class Class_3_6B9658F527402856;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleQuitInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleResultInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCardLevelUpPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlowDataContainer; }
namespace RPG::Client::DiceCombat { class DiceCombatGameLoadingParam; }
namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatNPCEntrancePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVEProcessPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPvEBattlePreparePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_645481513AEE85B3_METHOD_1_0015BA5D72A0B84D_OFFSET UNITYSDK_OFFSET(0x105BB760)
#define CLASS_1_645481513AEE85B3_METHOD_1_07E5C569CB977DBA_OFFSET UNITYSDK_OFFSET(0x105BB470)
#define CLASS_1_645481513AEE85B3_METHOD_1_092EB25B228C0D58_OFFSET UNITYSDK_OFFSET(0x105BBDF0)
#define CLASS_1_645481513AEE85B3_METHOD_1_0B578FC96E923242_OFFSET UNITYSDK_OFFSET(0x105BAD10)
#define CLASS_1_645481513AEE85B3_METHOD_1_0C57E9EADE35AB61_OFFSET UNITYSDK_OFFSET(0x105BBFA0)
#define CLASS_1_645481513AEE85B3_METHOD_1_1577ED9EEB8249E2_OFFSET UNITYSDK_OFFSET(0x105BC820)
#define CLASS_1_645481513AEE85B3_METHOD_1_21FED7447D2CC9D2_OFFSET UNITYSDK_OFFSET(0x105BA5F0)
#define CLASS_1_645481513AEE85B3_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x105BA820)
#define CLASS_1_645481513AEE85B3_METHOD_1_27279EC0AAE7D6A6_OFFSET UNITYSDK_OFFSET(0x105BB8A0)
#define CLASS_1_645481513AEE85B3_METHOD_1_392809B0A038F05F_OFFSET UNITYSDK_OFFSET(0x105BBDA0)
#define CLASS_1_645481513AEE85B3_METHOD_1_3E39496618E07E34_OFFSET UNITYSDK_OFFSET(0x105BB620)
#define CLASS_1_645481513AEE85B3_METHOD_1_47AEBFFC43300102_OFFSET UNITYSDK_OFFSET(0x105BD170)
#define CLASS_1_645481513AEE85B3_METHOD_1_50B07C777762ABC4_OFFSET UNITYSDK_OFFSET(0x105BC2B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_518ECC1FEB909E36_OFFSET UNITYSDK_OFFSET(0x105BD8D0)
#define CLASS_1_645481513AEE85B3_METHOD_1_5960CBFD3F02644F_OFFSET UNITYSDK_OFFSET(0x105BBA40)
#define CLASS_1_645481513AEE85B3_METHOD_1_6CC8CCA8AE02CCED_OFFSET UNITYSDK_OFFSET(0x105BC840)
#define CLASS_1_645481513AEE85B3_METHOD_1_73C91468E3177DD9_OFFSET UNITYSDK_OFFSET(0x105BA050)
#define CLASS_1_645481513AEE85B3_METHOD_1_7410DE850815A0A0_OFFSET UNITYSDK_OFFSET(0x105BE2B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_75FD7AD347F03DA5_OFFSET UNITYSDK_OFFSET(0x105BA6E0)
#define CLASS_1_645481513AEE85B3_METHOD_1_791E9C6EAC2A3F38_OFFSET UNITYSDK_OFFSET(0x105BBF50)
#define CLASS_1_645481513AEE85B3_METHOD_1_7ACD0912608D8482_OFFSET UNITYSDK_OFFSET(0x105BB670)
#define CLASS_1_645481513AEE85B3_METHOD_1_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x105BB9E0)
#define CLASS_1_645481513AEE85B3_METHOD_1_812AF0CB18404A32_OFFSET UNITYSDK_OFFSET(0x105BB8F0)
#define CLASS_1_645481513AEE85B3_METHOD_1_8655B3BB86B6442A_OFFSET UNITYSDK_OFFSET(0x105BC160)
#define CLASS_1_645481513AEE85B3_METHOD_1_8F3F75E2D2B20353_OFFSET UNITYSDK_OFFSET(0x105BC7B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_9BC32F47B0F8E33F_OFFSET UNITYSDK_OFFSET(0x105BD330)
#define CLASS_1_645481513AEE85B3_METHOD_1_9BED8E264653D4E9_OFFSET UNITYSDK_OFFSET(0x105BC1B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_AAD98405180B7E37_OFFSET UNITYSDK_OFFSET(0x105BC460)
#define CLASS_1_645481513AEE85B3_METHOD_1_AD6A06B74689181A_OFFSET UNITYSDK_OFFSET(0x105BA5A0)
#define CLASS_1_645481513AEE85B3_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x105BACC0)
#define CLASS_1_645481513AEE85B3_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x105BD7C0)
#define CLASS_1_645481513AEE85B3_METHOD_1_B76C141DF28ADB2C_OFFSET UNITYSDK_OFFSET(0x105BD5C0)
#define CLASS_1_645481513AEE85B3_METHOD_1_B81D70FC49626FA7_OFFSET UNITYSDK_OFFSET(0x105BB4C0)
#define CLASS_1_645481513AEE85B3_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x105BA150)
#define CLASS_1_645481513AEE85B3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x105BA110)
#define CLASS_1_645481513AEE85B3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105BA1F0)
#define CLASS_1_645481513AEE85B3_METHOD_1_D590B53475B814D7_OFFSET UNITYSDK_OFFSET(0x105BB7B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_D5CC34101AF0250F_1_OFFSET UNITYSDK_OFFSET(0x105BA450)
#define CLASS_1_645481513AEE85B3_METHOD_1_D5CC34101AF0250F_OFFSET UNITYSDK_OFFSET(0x105BA2B0)
#define CLASS_1_645481513AEE85B3_METHOD_1_DEE6DF123D17F7DF_OFFSET UNITYSDK_OFFSET(0x105BA730)
#define CLASS_1_645481513AEE85B3_METHOD_1_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x105BA400)
#define CLASS_1_645481513AEE85B3_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x105BA260)
#define CLASS_1_645481513AEE85B3_METHOD_1_F6A9686B6C487FB3_OFFSET UNITYSDK_OFFSET(0x105BA870)
#define CLASS_1_645481513AEE85B3_METHOD_1_F92232ABCBA95FE7_OFFSET UNITYSDK_OFFSET(0x105BE150)
#define CLASS_1_645481513AEE85B3_METHOD_1_FDB01FC350D315F1_OFFSET UNITYSDK_OFFSET(0x105BC300)
#define CLASS_1_645481513AEE85B3__CTOR_OFFSET UNITYSDK_OFFSET(0x105BA100)
#define CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x105BE850)
#define CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET UNITYSDK_OFFSET(0x105BE950)
#define CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET UNITYSDK_OFFSET(0x105BEA90)
#define CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x105BE510)
#define CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET UNITYSDK_OFFSET(0x105BE610)
#define CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET UNITYSDK_OFFSET(0x105BE750)

inline static constexpr unsigned int Class_1_645481513AEE85B3_TypeDefinitionIndex = 61944;

class Class_1_645481513AEE85B3 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10
	::Class_1_62DB3B5C659C57A3* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_62DB3B5C659C57A3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_62DB3B5C659C57A3*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_645481513AEE85B3* Method_1_73C91468E3177DD9(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_62DB3B5C659C57A3* a2)
	{
		return ((::Class_1_645481513AEE85B3*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_62DB3B5C659C57A3*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_73C91468E3177DD9_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_D5CC34101AF0250F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_D5CC34101AF0250F_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_F5447CD65612575D_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_D5CC34101AF0250F_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_D5CC34101AF0250F_1_OFFSET))(this);
	}

	::System::Void Method_1_AD6A06B74689181A(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_AD6A06B74689181A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_21FED7447D2CC9D2(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_21FED7447D2CC9D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_75FD7AD347F03DA5(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_75FD7AD347F03DA5_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_DEE6DF123D17F7DF(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_DEE6DF123D17F7DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_F6A9686B6C487FB3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_F6A9686B6C487FB3_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0B578FC96E923242()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_0B578FC96E923242_OFFSET))(this);
	}

	::System::Void Method_1_07E5C569CB977DBA(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_07E5C569CB977DBA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_B81D70FC49626FA7(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_B81D70FC49626FA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E39496618E07E34(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_3E39496618E07E34_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7ACD0912608D8482(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_7ACD0912608D8482_OFFSET))(this, a1);
	}

	::System::Void Method_1_0015BA5D72A0B84D(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_0015BA5D72A0B84D_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D590B53475B814D7(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_D590B53475B814D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_27279EC0AAE7D6A6(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_27279EC0AAE7D6A6_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_812AF0CB18404A32(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_812AF0CB18404A32_OFFSET))(this, a1);
	}

	::System::Void Method_1_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_8080E22F79F246F0_OFFSET))(this);
	}

	::System::Void Method_1_5960CBFD3F02644F(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_5960CBFD3F02644F_OFFSET))(this, a1);
	}

	::System::Void Method_1_392809B0A038F05F(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_392809B0A038F05F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_092EB25B228C0D58(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_092EB25B228C0D58_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E9C6EAC2A3F38(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_791E9C6EAC2A3F38_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C57E9EADE35AB61(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_0C57E9EADE35AB61_OFFSET))(this, a1);
	}

	::System::Void Method_1_8655B3BB86B6442A(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_8655B3BB86B6442A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_9BED8E264653D4E9(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_9BED8E264653D4E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_50B07C777762ABC4(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_50B07C777762ABC4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_FDB01FC350D315F1(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_FDB01FC350D315F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD98405180B7E37(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_AAD98405180B7E37_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F3F75E2D2B20353(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_8F3F75E2D2B20353_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CC8CCA8AE02CCED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_6CC8CCA8AE02CCED_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BC32F47B0F8E33F(::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_9BC32F47B0F8E33F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B76C141DF28ADB2C(::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_B76C141DF28ADB2C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_47AEBFFC43300102(::Class_3_163A9557988CEBBE* a1, ::System::Action_1<::Class_3_6B9658F527402856*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_163A9557988CEBBE*, ::System::Action_1<::Class_3_6B9658F527402856*>*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_47AEBFFC43300102_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_1_518ECC1FEB909E36(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_518ECC1FEB909E36_OFFSET))(this, a1);
	}

	::System::Void Method_1_F92232ABCBA95FE7(::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_F92232ABCBA95FE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7410DE850815A0A0(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_7410DE850815A0A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* Method_1_1577ED9EEB8249E2()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3_METHOD_1_1577ED9EEB8249E2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_2(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_2(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET))(this, lobby);
	}
};

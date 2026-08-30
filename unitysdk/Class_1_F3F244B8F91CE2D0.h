#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3807EBD42CD3397;
class Class_3_57ACCC113D2215C7;
class Class_3_C71DDDA66421C541;
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

#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_06AD4E9BBDD4D112_OFFSET UNITYSDK_OFFSET(0xB756520)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_0767AB3DF0AA516F_OFFSET UNITYSDK_OFFSET(0xB751FF0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_10C83B4AE995C68E_OFFSET UNITYSDK_OFFSET(0xB753320)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_2037E3BF736E78F5_OFFSET UNITYSDK_OFFSET(0xB754250)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_217E5B668E83DFA8_OFFSET UNITYSDK_OFFSET(0xB7537B0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_2985744682445383_OFFSET UNITYSDK_OFFSET(0xB7531F0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C6D70AACFC3F60C_OFFSET UNITYSDK_OFFSET(0xB753B40)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C95AFAD0256302F_1_OFFSET UNITYSDK_OFFSET(0xB751CF0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xB751B20)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_386FEA2D5AB58217_OFFSET UNITYSDK_OFFSET(0xB755180)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_3D54D82055FA5154_OFFSET UNITYSDK_OFFSET(0xB752650)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_4287F255B64C2E4A_OFFSET UNITYSDK_OFFSET(0xB753460)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_4FCDE86CC03175FB_OFFSET UNITYSDK_OFFSET(0xB753C80)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_5532FD50A412C698_OFFSET UNITYSDK_OFFSET(0xB753970)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0xB7558F0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xB752600)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_704804837EF4D390_OFFSET UNITYSDK_OFFSET(0xB7532D0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_7334C2A08B7AB4FC_OFFSET UNITYSDK_OFFSET(0xB751EC0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_73C91468E3177DD9_OFFSET UNITYSDK_OFFSET(0xB751910)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xB751AB0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_7E22C2317A005514_OFFSET UNITYSDK_OFFSET(0xB755360)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_9330E952F1D4442A_OFFSET UNITYSDK_OFFSET(0xB753070)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_A2E29675A3D496BD_1_OFFSET UNITYSDK_OFFSET(0xB751D40)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_A2E29675A3D496BD_OFFSET UNITYSDK_OFFSET(0xB751B70)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_A44277BCD64E622E_OFFSET UNITYSDK_OFFSET(0xB751F10)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_B17126B4DA0DC849_OFFSET UNITYSDK_OFFSET(0xB7543B0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xB752120)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xB751A10)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_BC191F10BD8E306D_OFFSET UNITYSDK_OFFSET(0xB752170)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_BDE23875C8D28E9D_OFFSET UNITYSDK_OFFSET(0xB753E40)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_BE74F62EEF508742_OFFSET UNITYSDK_OFFSET(0xB755A00)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_C2A915B654CB5166_OFFSET UNITYSDK_OFFSET(0xB7563C0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_C477D6801237DC5E_OFFSET UNITYSDK_OFFSET(0xB7530C0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_C9E4AAAC65897CF7_OFFSET UNITYSDK_OFFSET(0xB755620)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7519D0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_D8E1C14A662ADBC5_OFFSET UNITYSDK_OFFSET(0xB753B90)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_D9AAF6205BC1365B_OFFSET UNITYSDK_OFFSET(0xB753800)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_D9F2F62D2A196B2E_OFFSET UNITYSDK_OFFSET(0xB753CD0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_E404EF13F6333461_OFFSET UNITYSDK_OFFSET(0xB752EB0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xB753400)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_EFC62EC38BD87794_OFFSET UNITYSDK_OFFSET(0xB752F00)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_F5DC3FC87C471995_OFFSET UNITYSDK_OFFSET(0xB7539C0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_F8102C80C1981C17_OFFSET UNITYSDK_OFFSET(0xB7531A0)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_FE16E4CFCEC1AA89_OFFSET UNITYSDK_OFFSET(0xB754340)
#define CLASS_1_F3F244B8F91CE2D0_METHOD_1_FF6EE7287FE6174B_OFFSET UNITYSDK_OFFSET(0xB752040)
#define CLASS_1_F3F244B8F91CE2D0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7519C0)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0xB756A20)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET UNITYSDK_OFFSET(0xB756B00)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET UNITYSDK_OFFSET(0xB756C70)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0xB7566F0)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET UNITYSDK_OFFSET(0xB7567D0)
#define CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET UNITYSDK_OFFSET(0xB756940)

inline static constexpr unsigned int Class_1_F3F244B8F91CE2D0_TypeDefinitionIndex = 75632;

class Class_1_F3F244B8F91CE2D0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* BEGDKHKENMF; // 0x10
	::Class_1_A3807EBD42CD3397* IKIMJGDBJDJ; // 0x18

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_A3807EBD42CD3397* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_A3807EBD42CD3397*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_F3F244B8F91CE2D0* Method_1_73C91468E3177DD9(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_A3807EBD42CD3397* a2)
	{
		return ((::Class_1_F3F244B8F91CE2D0*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_A3807EBD42CD3397*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_73C91468E3177DD9_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2E29675A3D496BD()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_A2E29675A3D496BD_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C95AFAD0256302F_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2E29675A3D496BD_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_A2E29675A3D496BD_1_OFFSET))(this);
	}

	::System::Void Method_1_7334C2A08B7AB4FC(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_7334C2A08B7AB4FC_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_A44277BCD64E622E(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_A44277BCD64E622E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0767AB3DF0AA516F(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_0767AB3DF0AA516F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_FF6EE7287FE6174B(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_FF6EE7287FE6174B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BC191F10BD8E306D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_BC191F10BD8E306D_OFFSET))(this);
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_3D54D82055FA5154()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_3D54D82055FA5154_OFFSET))(this);
	}

	::System::Void Method_1_E404EF13F6333461(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_E404EF13F6333461_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EFC62EC38BD87794(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_EFC62EC38BD87794_OFFSET))(this, a1);
	}

	::System::Void Method_1_9330E952F1D4442A(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_9330E952F1D4442A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_C477D6801237DC5E(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_C477D6801237DC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8102C80C1981C17(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_F8102C80C1981C17_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_2985744682445383(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_2985744682445383_OFFSET))(this, a1);
	}

	::System::Void Method_1_704804837EF4D390(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_704804837EF4D390_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_10C83B4AE995C68E(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_10C83B4AE995C68E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_4287F255B64C2E4A(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_4287F255B64C2E4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_217E5B668E83DFA8(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_217E5B668E83DFA8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9AAF6205BC1365B(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_D9AAF6205BC1365B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5532FD50A412C698(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_5532FD50A412C698_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_F5DC3FC87C471995(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_F5DC3FC87C471995_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C6D70AACFC3F60C(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_2C6D70AACFC3F60C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D8E1C14A662ADBC5(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_D8E1C14A662ADBC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FCDE86CC03175FB(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_4FCDE86CC03175FB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9F2F62D2A196B2E(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_D9F2F62D2A196B2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BDE23875C8D28E9D(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_BDE23875C8D28E9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2037E3BF736E78F5(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_2037E3BF736E78F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B17126B4DA0DC849(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_B17126B4DA0DC849_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E22C2317A005514(::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_7E22C2317A005514_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9E4AAAC65897CF7(::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_C9E4AAAC65897CF7_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_386FEA2D5AB58217(::Class_3_57ACCC113D2215C7* a1, ::System::Action_1<::Class_3_C71DDDA66421C541*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_57ACCC113D2215C7*, ::System::Action_1<::Class_3_C71DDDA66421C541*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_386FEA2D5AB58217_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_1_BE74F62EEF508742(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_BE74F62EEF508742_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2A915B654CB5166(::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_C2A915B654CB5166_OFFSET))(this, a1);
	}

	::System::Void Method_1_06AD4E9BBDD4D112(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_06AD4E9BBDD4D112_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* Method_1_FE16E4CFCEC1AA89()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0_METHOD_1_FE16E4CFCEC1AA89_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_0(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_2(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_0(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_2(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET))(this, a1);
	}
};

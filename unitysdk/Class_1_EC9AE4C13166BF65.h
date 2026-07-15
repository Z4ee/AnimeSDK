#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D07F1588D6DC9E4B;
namespace RPG::Client::DiceCombat { class DiceCombatCardLevelUpPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2BattleQuitInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2BattleResultInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2EnterPVESelectStageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlowDataContainer; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameLoadingParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2MPService; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PVPBattlePreparePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEBattlePreparePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_EC9AE4C13166BF65_METHOD_1_023BFF61B01DEC3C_OFFSET UNITYSDK_OFFSET(0x18255EB0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_0AD644FEF3A422DF_OFFSET UNITYSDK_OFFSET(0x182536E0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_1_OFFSET UNITYSDK_OFFSET(0x18253E90)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_2_OFFSET UNITYSDK_OFFSET(0x18254830)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x18253DA0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_18303DB98B6C1398_OFFSET UNITYSDK_OFFSET(0x182563E0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_19C67B74614BC262_OFFSET UNITYSDK_OFFSET(0x182561B0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_209BF6466F02ADFD_OFFSET UNITYSDK_OFFSET(0x18253340)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_217E5B668E83DFA8_OFFSET UNITYSDK_OFFSET(0x18254140)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_21DE673BCC1E0B14_OFFSET UNITYSDK_OFFSET(0x18255CD0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2C6D70AACFC3F60C_OFFSET UNITYSDK_OFFSET(0x182544D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2CA1B3CABACDDB30_OFFSET UNITYSDK_OFFSET(0x18253480)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_3C1D442E25421DC1_OFFSET UNITYSDK_OFFSET(0x182538E0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_455FAD236F239A8F_OFFSET UNITYSDK_OFFSET(0x182554E0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_4E1A1372C392D5A4_OFFSET UNITYSDK_OFFSET(0x182535B0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_4FCDE86CC03175FB_OFFSET UNITYSDK_OFFSET(0x18254610)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_5532FD50A412C698_OFFSET UNITYSDK_OFFSET(0x18254300)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_58D5590C3662938B_OFFSET UNITYSDK_OFFSET(0x18253390)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_72D6700E3DE0D164_OFFSET UNITYSDK_OFFSET(0x18254A60)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x182532D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18256270)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x18255C00)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x18254920)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_98A87B26EE7408FF_OFFSET UNITYSDK_OFFSET(0x18253730)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A7412FC66A6CAEB9_OFFSET UNITYSDK_OFFSET(0x18253130)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A98D80417B567C6A_OFFSET UNITYSDK_OFFSET(0x18255990)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_1_OFFSET UNITYSDK_OFFSET(0x18253F20)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_2_OFFSET UNITYSDK_OFFSET(0x182548C0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_OFFSET UNITYSDK_OFFSET(0x18253E30)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0x18254A10)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x18254E50)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x18253230)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_C26AE36A1029B30A_OFFSET UNITYSDK_OFFSET(0x18253950)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x182551D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_C8E1E42C1381103D_OFFSET UNITYSDK_OFFSET(0x18256140)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x182531F0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_CC10B28F30B6D9D4_OFFSET UNITYSDK_OFFSET(0x18255D60)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_CD87258ED3C1C69E_OFFSET UNITYSDK_OFFSET(0x182534D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_D8E1C14A662ADBC5_OFFSET UNITYSDK_OFFSET(0x18254520)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_D9AAF6205BC1365B_OFFSET UNITYSDK_OFFSET(0x18254190)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_D9F2F62D2A196B2E_OFFSET UNITYSDK_OFFSET(0x18254660)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_DF506F9EAA848B62_OFFSET UNITYSDK_OFFSET(0x182550A0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_E404EF13F6333461_OFFSET UNITYSDK_OFFSET(0x18253F80)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_E7D589CF1D272543_OFFSET UNITYSDK_OFFSET(0x182539A0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x182547D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_EEAB16CF7663EB29_OFFSET UNITYSDK_OFFSET(0x18255220)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_EFC62EC38BD87794_OFFSET UNITYSDK_OFFSET(0x18253FD0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_F0F6A8A07770D2DE_OFFSET UNITYSDK_OFFSET(0x18255490)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_F5DC3FC87C471995_OFFSET UNITYSDK_OFFSET(0x18254350)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_FC391F4EB650D77E_OFFSET UNITYSDK_OFFSET(0x18253600)
#define CLASS_1_EC9AE4C13166BF65__CTOR_OFFSET UNITYSDK_OFFSET(0x182531E0)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_0_OFFSET UNITYSDK_OFFSET(0x18256480)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_1_OFFSET UNITYSDK_OFFSET(0x18256830)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_2_OFFSET UNITYSDK_OFFSET(0x18256720)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_3_OFFSET UNITYSDK_OFFSET(0x18256810)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_4_OFFSET UNITYSDK_OFFSET(0x182567E0)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65_TypeDefinitionIndex = 72271;

class Class_1_EC9AE4C13166BF65 : public ::System::Object
{
public:
	::Class_1_D07F1588D6DC9E4B* Field_1_0; // 0x10
	::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1, ::Class_1_D07F1588D6DC9E4B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*, ::Class_1_D07F1588D6DC9E4B*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_EC9AE4C13166BF65* Method_1_A7412FC66A6CAEB9(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1, ::Class_1_D07F1588D6DC9E4B* a2)
	{
		return ((::Class_1_EC9AE4C13166BF65*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*, ::Class_1_D07F1588D6DC9E4B*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A7412FC66A6CAEB9_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_209BF6466F02ADFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_209BF6466F02ADFD_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_58D5590C3662938B()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_58D5590C3662938B_OFFSET))(this);
	}

	::System::Void Method_1_2CA1B3CABACDDB30(::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2CA1B3CABACDDB30_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CD87258ED3C1C69E(::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_CD87258ED3C1C69E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E1A1372C392D5A4(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_4E1A1372C392D5A4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_FC391F4EB650D77E(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_FC391F4EB650D77E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AD644FEF3A422DF(::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_0AD644FEF3A422DF_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_98A87B26EE7408FF(::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_98A87B26EE7408FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C26AE36A1029B30A(::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_C26AE36A1029B30A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_E7D589CF1D272543(::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_E7D589CF1D272543_OFFSET))(this, a1);
	}

	::System::Void Method_1_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A9B413909CA9E625()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A9B413909CA9E625_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_1_OFFSET))(this);
	}

	::System::Void Method_1_E404EF13F6333461(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_E404EF13F6333461_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EFC62EC38BD87794(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_EFC62EC38BD87794_OFFSET))(this, a1);
	}

	::System::Void Method_1_217E5B668E83DFA8(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_217E5B668E83DFA8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9AAF6205BC1365B(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_D9AAF6205BC1365B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5532FD50A412C698(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_5532FD50A412C698_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_F5DC3FC87C471995(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_F5DC3FC87C471995_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C6D70AACFC3F60C(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2C6D70AACFC3F60C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D8E1C14A662ADBC5(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_D8E1C14A662ADBC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FCDE86CC03175FB(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_4FCDE86CC03175FB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9F2F62D2A196B2E(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_D9F2F62D2A196B2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_1092C5537716905B_2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A9B413909CA9E625_2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A9B413909CA9E625_2_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_72D6700E3DE0D164(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_72D6700E3DE0D164_OFFSET))(this, a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_DF506F9EAA848B62(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_DF506F9EAA848B62_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_C5F2E178DAEB1793_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_EEAB16CF7663EB29()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_EEAB16CF7663EB29_OFFSET))(this);
	}

	::System::Void Method_1_F0F6A8A07770D2DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_F0F6A8A07770D2DE_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_455FAD236F239A8F(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_455FAD236F239A8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A98D80417B567C6A(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A98D80417B567C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_1_21DE673BCC1E0B14(::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_21DE673BCC1E0B14_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC10B28F30B6D9D4(::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_CC10B28F30B6D9D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_19C67B74614BC262(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_19C67B74614BC262_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_023BFF61B01DEC3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_023BFF61B01DEC3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E1E42C1381103D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_C8E1E42C1381103D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* Method_1_3C1D442E25421DC1()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_3C1D442E25421DC1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatV2MPService* Method_1_18303DB98B6C1398()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2MPService*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_18303DB98B6C1398_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_0_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_2_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_4_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_3_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_1_OFFSET))(this);
	}
};

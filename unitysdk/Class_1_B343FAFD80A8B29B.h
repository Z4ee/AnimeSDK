#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_547;
class Class_1_2A2B2DC1DA1205FE;
class Class_1_BCD7402D15D7184C;
class Class_1_D50913C0AC7A262A;
class Class_1_F3391C70DC37088D;
class Class_2_6C1010345A89A766;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B343FAFD80A8B29B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFCCE80)
#define CLASS_1_B343FAFD80A8B29B_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xBFEA1B0)
#define CLASS_1_B343FAFD80A8B29B_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBFEA1D0)
#define CLASS_1_B343FAFD80A8B29B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBFEA130)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xBFEA210)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xBFEA1F0)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBFEA170)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xBFEA150)
#define CLASS_1_B343FAFD80A8B29B_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xBFEA190)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xBFE8AF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_02BE02AD3B7ABEC5_OFFSET UNITYSDK_OFFSET(0xBFCF4A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0xBFEA250)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0xBFE9300)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xBFCDAA0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBFE7870)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBFE7810)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xBFE8A70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xBFE8840)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0xBFE9D10)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBFCEA30)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xBFE8510)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_38E8C87591F8D4AA_OFFSET UNITYSDK_OFFSET(0xBFD0840)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_3BB27E09543D8ACB_OFFSET UNITYSDK_OFFSET(0xBFE79F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_40104F54A27D0FFA_OFFSET UNITYSDK_OFFSET(0xBFE8240)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xBFEA080)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBFE7650)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0xBFE7740)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0xBFD13D0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xBFE8670)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xBFE8DE0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_51FF09EBE6593DAC_OFFSET UNITYSDK_OFFSET(0xBFE7D70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xBFE6AA0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0xBFE85D0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0xBFCE610)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0xBFEA0E0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xBFE6FB0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xBFE9070)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0xBFE7050)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xBFE73A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0xBFE8F40)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0xBFE7560)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBFE9280)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0xBFEA240)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0xBFE6370)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xBFE8930)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0xBFE8D40)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0xBFE76A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0xBFD0D60)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET UNITYSDK_OFFSET(0xBFE86D0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C6804E5BEDA102E7_OFFSET UNITYSDK_OFFSET(0xBFE9E40)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xBFEA230)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0xBFE78D0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBFD0370)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xBFD04F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0xBFE95C0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xBFE7950)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0xBFD0670)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xBFE8CB0)
#define CLASS_1_B343FAFD80A8B29B_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xBFEA1C0)
#define CLASS_1_B343FAFD80A8B29B_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBFEA1E0)
#define CLASS_1_B343FAFD80A8B29B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBFEA140)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xBFEA220)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xBFEA200)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBFEA180)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xBFEA160)
#define CLASS_1_B343FAFD80A8B29B_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xBFEA1A0)
#define CLASS_1_B343FAFD80A8B29B_TICK_OFFSET UNITYSDK_OFFSET(0xBFCD380)
#define CLASS_1_B343FAFD80A8B29B__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFEA2A0)
#define CLASS_1_B343FAFD80A8B29B__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0DB0)

inline static constexpr unsigned int Class_1_B343FAFD80A8B29B_TypeDefinitionIndex = 69449;

class Class_1_B343FAFD80A8B29B : public ::System::Object
{
public:
	static ::System::String** StaticGet_JOOPLIIAOGD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0x64380);
	}
	static ::System::Int32* StaticGet_JPLDMLLPHOL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0x14B90);
	}
	// static const ::System::Single JDPFAGHFEID; // 0x0
	// static const ::System::String* CPGAAKGMLFA; // 0x0
	::Class_3_07C3C4D2990C49EE* IHIKAHLOABK; // 0x10
	::RPG::GameCore::NotifyShowFuncBtnParam* MELBABBNCIL; // 0x18
	::Il2CppArray<::Class_1_2A2B2DC1DA1205FE*>* FJACOGMEIGF; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* HJDOJCNAPAM; // 0x28
	::UnityEngine::Coroutine* AMFGLFBACBP; // 0x30
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x38
	::Class_1_D50913C0AC7A262A* OOFIFJJMNJM; // 0x40
	::Class_1_F3391C70DC37088D* LALNHIHMFAK; // 0x48
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x50
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* DHNPLDCBKBK; // 0x58
	::RPG::Client::PhotoGraphResultConditionPack* BCKCAMBOBJH; // 0x60
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x68
	::RPG::GameCore::PhotoGraphOverrideModeConfig* OLAMJJFPPBP; // 0x70
	::Il2CppArray<::System::String*>* COCHJEJEJPC; // 0x78
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x80
	::System::String* ADPLHBMOAFF; // 0x88
	::Class_3_07C3C4D2990C49EE* DEGHMIMBOOP; // 0x90
	::Class_1_F3391C70DC37088D* DBCMMHMDCJJ; // 0x98
	::RPG::GameCore::ShowMainPageHint* ALAJNABLJFP; // 0xA0
	::Class_1_BCD7402D15D7184C* COIBFECAMPD; // 0xA8
	::Class_1_F3391C70DC37088D* EEEHHMBIOFK; // 0xB0
	::Class_2_6C1010345A89A766* OIBKPJEGPOK; // 0xB8
	::UnityEngine::Coroutine* GJFNGNEJPDB; // 0xC0
	::RPG::GameCore::PhotoGraphFovLevel NJGBDGGNNFA; // 0xC8
	::System::Single CEJAJOPEFFG; // 0xCC
	::System::Boolean OLOLCIBBIKP; // 0xD0
	::System::Boolean GBKBPFDBLGK; // 0xD1
	::System::Boolean DOCIDMKAAGA; // 0xD2
	::System::Boolean BOKAHANALIF; // 0xD3
	::System::Int32 MCBIMEJMMAA; // 0xD4
	::System::Int32 IBJIGGJGCGM; // 0xD8
	::System::Boolean OIFIKNNCNEA; // 0xDC
	::System::Boolean IJGIFCDJFAF; // 0xDD
	::System::Boolean MIIMPDKLKMA; // 0xDE
	::System::Boolean CJEBDAIIIPC; // 0xDF
	::System::Single GNOFJHKBAEF; // 0xE0
	::System::Int32 KHABKHIPIPP; // 0xE4
	::RPG::Client::TextID IFMJIMNBIMA; // 0xE8
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0xF8
	::System::Boolean CIPLKEDMHHI; // 0x108
	::System::Boolean FKAJENEHLIM; // 0x109
	::System::Boolean _Active_k__BackingField; // 0x10A
	::System::Boolean HKCHKHIKFGB; // 0x10B
	::System::Single PDBBKIIOMEE; // 0x10C
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0x110
	::System::Single BAPGJLKNCNP; // 0x114
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x118
	::RPG::GameCore::PhotoGraphFuncBtnType AAOGMFOKIEJ; // 0x11C
	::RPG::Client::TextID OOBDCGOJAHK; // 0x120
	::System::Single DMFLFCJOPDK; // 0x130
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x134

	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_02BE02AD3B7ABEC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_02BE02AD3B7ABEC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_75A528A09123ED2F(::RPG::GameCore::StringHash a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_75A528A09123ED2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4406EE3EAE9FBD6F(::RPG::GameCore::StringHash a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_4406EE3EAE9FBD6F_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_1_38E8C87591F8D4AA()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_38E8C87591F8D4AA_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_C98BEB16ED641BC0(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C98BEB16ED641BC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Boolean Method_1_467DE64208B0A974(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_467DE64208B0A974_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_40104F54A27D0FFA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_40104F54A27D0FFA_OFFSET))(this);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AB0E32D900C7A89E_OFFSET))(this);
	}

	::RPG::GameCore::PuzzleFunc Method_1_B493AAE223D9B30F()
	{
		return ((::RPG::GameCore::PuzzleFunc(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_B493AAE223D9B30F_OFFSET))(this);
	}

	::System::Boolean Method_1_FC1860485A3F1976(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_FC1860485A3F1976_OFFSET))(this, a1);
	}

	::System::Void Method_1_73D4532F584D7FC2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_73D4532F584D7FC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FF1F5DCD746CB3B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7FF1F5DCD746CB3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C348049DE90BD88C(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F2240B3DCAE3C2C(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_8F2240B3DCAE3C2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF8EA4CBC3E2C963(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AF8EA4CBC3E2C963_OFFSET))(this, a1);
	}

	::System::Void Method_1_51FF09EBE6593DAC(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_51FF09EBE6593DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB27E09543D8ACB(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_3BB27E09543D8ACB_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BADA5371EFDD926(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0BADA5371EFDD926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6804E5BEDA102E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C6804E5BEDA102E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_1_OFFSET))(this);
	}

	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
	{
		return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropComponent* get_OwnerProp()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_OWNERPROP_OFFSET))(this);
	}

	::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_OWNERPROP_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::System::Int32 get_TriggerInRangeCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerInRangeCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_TRIGGERINRANGECOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_ACTIVE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_CurrentShowTip()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIP_OFFSET))(this);
	}

	::System::Void set_CurrentShowTip(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIP_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentShowTipPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
	}

	::System::Void set_CurrentShowTipPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::PhotoGraphResultConditionPack* Method_1_A08F498172E0B379()
	{
		return ((::RPG::Client::PhotoGraphResultConditionPack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_A08F498172E0B379_OFFSET))(this);
	}

	::RPG::GameCore::PhotoGraphFovLevel Method_1_0749CA3EDD9F2FCF()
	{
		return ((::RPG::GameCore::PhotoGraphFovLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0749CA3EDD9F2FCF_OFFSET))(this);
	}
};

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

class Class_0_16E4307DCC419505_460;
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

#define CLASS_1_B343FAFD80A8B29B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DF640)
#define CLASS_1_B343FAFD80A8B29B_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xC0FCE20)
#define CLASS_1_B343FAFD80A8B29B_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xC0FCE40)
#define CLASS_1_B343FAFD80A8B29B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC0FCDA0)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xC0FCE80)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xC0FCE60)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC0FCDE0)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xC0FCDC0)
#define CLASS_1_B343FAFD80A8B29B_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xC0FCE00)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xC0FB3F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_02BE02AD3B7ABEC5_OFFSET UNITYSDK_OFFSET(0xC0E1C90)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0xC0FCEC0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0xC0FBD10)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xC0E0280)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xC0FA180)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC0FA120)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xC0FB370)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xC0FB140)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC0E1210)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xC0FAE10)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_38E8C87591F8D4AA_OFFSET UNITYSDK_OFFSET(0xC0E30C0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_3BB27E09543D8ACB_OFFSET UNITYSDK_OFFSET(0xC0FA2F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_40104F54A27D0FFA_OFFSET UNITYSDK_OFFSET(0xC0FAB40)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC0F9F50)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0xC0FA040)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0xC0E3C60)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xC0FAF70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xC0FB6E0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_51FF09EBE6593DAC_OFFSET UNITYSDK_OFFSET(0xC0FA670)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xC0F93B0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0xC0FAED0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0xC0E0DF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0xC0FCD50)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xC0F98B0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xC0FBA80)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0xC0F9950)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xC0F9CB0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0xC0F9E70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC0FBC90)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0xC0FB840)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0xC0FCEB0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xC0FC750)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0xC0F8C90)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xC0FB230)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0xC0F9FA0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0xC0E35E0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET UNITYSDK_OFFSET(0xC0FAFD0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xC0FCEA0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0xC0FA1E0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC0E2BF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_D7953C46D82FED5E_OFFSET UNITYSDK_OFFSET(0xC0FC9A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xC0FCC70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xC0E2D70)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0xC0FBFE0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xC0FA260)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0xC0FB640)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0xC0E2EF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xC0FB5B0)
#define CLASS_1_B343FAFD80A8B29B_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xC0FCE30)
#define CLASS_1_B343FAFD80A8B29B_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xC0FCE50)
#define CLASS_1_B343FAFD80A8B29B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC0FCDB0)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xC0FCE90)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xC0FCE70)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC0FCDF0)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xC0FCDD0)
#define CLASS_1_B343FAFD80A8B29B_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xC0FCE10)
#define CLASS_1_B343FAFD80A8B29B_TICK_OFFSET UNITYSDK_OFFSET(0xC0DFB40)
#define CLASS_1_B343FAFD80A8B29B__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0FCF10)
#define CLASS_1_B343FAFD80A8B29B__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E3630)

inline static constexpr unsigned int Class_1_B343FAFD80A8B29B_TypeDefinitionIndex = 69413;

class Class_1_B343FAFD80A8B29B : public ::System::Object
{
public:
	static ::System::String** StaticGet_JOOPLIIAOGD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0x19520);
	}
	static ::System::Int32* StaticGet_JPLDMLLPHOL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0x9220);
	}
	// static const ::System::Single JDPFAGHFEID; // 0x0
	// static const ::System::String* CPGAAKGMLFA; // 0x0
	::Class_3_07C3C4D2990C49EE* DEGHMIMBOOP; // 0x10
	::Class_1_F3391C70DC37088D* LALNHIHMFAK; // 0x18
	::Il2CppArray<::System::String*>* COCHJEJEJPC; // 0x20
	::RPG::Client::PhotoGraphResultConditionPack* BCKCAMBOBJH; // 0x28
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x30
	::UnityEngine::Coroutine* GJFNGNEJPDB; // 0x38
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x40
	::Class_1_F3391C70DC37088D* DBCMMHMDCJJ; // 0x48
	::RPG::GameCore::PhotoGraphOverrideModeConfig* OLAMJJFPPBP; // 0x50
	::Class_1_F3391C70DC37088D* EEEHHMBIOFK; // 0x58
	::Class_3_07C3C4D2990C49EE* IHIKAHLOABK; // 0x60
	::Class_1_D50913C0AC7A262A* OOFIFJJMNJM; // 0x68
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* DHNPLDCBKBK; // 0x70
	::RPG::GameCore::NotifyShowFuncBtnParam* MELBABBNCIL; // 0x78
	::RPG::GameCore::ShowMainPageHint* ALAJNABLJFP; // 0x80
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x88
	::System::String* ADPLHBMOAFF; // 0x90
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x98
	::Class_1_BCD7402D15D7184C* COIBFECAMPD; // 0xA0
	::UnityEngine::Coroutine* AMFGLFBACBP; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* HJDOJCNAPAM; // 0xB0
	::Il2CppArray<::Class_1_2A2B2DC1DA1205FE*>* FJACOGMEIGF; // 0xB8
	::Class_2_6C1010345A89A766* OIBKPJEGPOK; // 0xC0
	::RPG::Client::TextID OOBDCGOJAHK; // 0xC8
	::System::Single CEJAJOPEFFG; // 0xD8
	::System::Single BAPGJLKNCNP; // 0xDC
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0xE0
	::System::Boolean FKAJENEHLIM; // 0xF0
	::System::Boolean BOKAHANALIF; // 0xF1
	::System::Boolean IJGIFCDJFAF; // 0xF2
	::System::Boolean DOCIDMKAAGA; // 0xF3
	::RPG::GameCore::PhotoGraphFuncBtnType AAOGMFOKIEJ; // 0xF4
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0xF8
	::System::Int32 IBJIGGJGCGM; // 0xFC
	::RPG::Client::TextID IFMJIMNBIMA; // 0x100
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x110
	::System::Boolean _Active_k__BackingField; // 0x114
	::System::Boolean CJEBDAIIIPC; // 0x115
	::System::Boolean OIFIKNNCNEA; // 0x116
	::System::Boolean MIIMPDKLKMA; // 0x117
	::System::Boolean GBKBPFDBLGK; // 0x118
	::System::Boolean CIPLKEDMHHI; // 0x119
	::System::Boolean OLOLCIBBIKP; // 0x11A
	::System::Boolean HKCHKHIKFGB; // 0x11B
	::RPG::GameCore::PhotoGraphFovLevel NJGBDGGNNFA; // 0x11C
	::System::Single DMFLFCJOPDK; // 0x120
	::System::Single PDBBKIIOMEE; // 0x124
	::System::Int32 KHABKHIPIPP; // 0x128
	::System::Single GNOFJHKBAEF; // 0x12C
	::System::Int32 MCBIMEJMMAA; // 0x130
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0x134

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

	::System::Void Method_1_C348049DE90BD88C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET))(this, a1);
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

	::System::Void Method_1_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_F620DD2FD48DDF53_OFFSET))(this, a1);
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

	::System::Void Method_1_9BFE7737D26CFA72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_9BFE7737D26CFA72_OFFSET))(this, a1);
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

	::System::Void Method_1_D7953C46D82FED5E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_D7953C46D82FED5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_E3DE31A03057E055_OFFSET))(this);
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

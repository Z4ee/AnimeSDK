#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2DEC9C8F439E3FDC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FB41EE27FB816A_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x12AB4680)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0x12AB46A0)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0x12AB4670)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0x12AB4660)
#define CLASS_1_48FB41EE27FB816A_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0x12AB4690)
#define CLASS_1_48FB41EE27FB816A_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x12AB4640)
#define CLASS_1_48FB41EE27FB816A_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x12AB4620)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0x12AB46C0)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0x12AB46B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0280A99378C9A474_OFFSET UNITYSDK_OFFSET(0x12AAF180)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_1_OFFSET UNITYSDK_OFFSET(0x12AB0C40)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0x12AB0BF0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1228577BEED51E8E_OFFSET UNITYSDK_OFFSET(0x12AB1220)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12AB3680)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x12AAECC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x12AB0810)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1C9A2E55F37625ED_OFFSET UNITYSDK_OFFSET(0x12AB3600)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x12AB0A80)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x12AB3780)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_2E191E64C347F0A0_OFFSET UNITYSDK_OFFSET(0x12AB1080)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_4B694F4B9E7A931A_OFFSET UNITYSDK_OFFSET(0x12AAFCC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_56B2E27E517339A0_OFFSET UNITYSDK_OFFSET(0x12AAEFF0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x12AB05A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_62E9BCCA747BC38D_OFFSET UNITYSDK_OFFSET(0x12AB31A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x12AB0160)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_648D46C1F273F2A7_OFFSET UNITYSDK_OFFSET(0x12AAEB10)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x12AAEBA0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x12AAF3A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_73281C4326FBC42D_OFFSET UNITYSDK_OFFSET(0x12AB00C0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x12AB2200)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_860D65C1404EBCB0_OFFSET UNITYSDK_OFFSET(0x12AAFF50)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8BCCDE43400C400B_OFFSET UNITYSDK_OFFSET(0x12AB08A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8DEED24AAE482C0C_OFFSET UNITYSDK_OFFSET(0x12AB0C90)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12AAED20)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET UNITYSDK_OFFSET(0x12AB1910)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x12AB1590)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x12AB04B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x12AAEDE0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A94BB023A49F61B0_OFFSET UNITYSDK_OFFSET(0x12AB2D50)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x12AB1520)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_AE5FD12B7BCF9FE5_OFFSET UNITYSDK_OFFSET(0x12AB3030)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x12AAF980)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0x12AAEEF0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x12AB4060)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x12AB03E0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_C0F3C9D5BE2B07E6_OFFSET UNITYSDK_OFFSET(0x12AB1CA0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x12AB0AD0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AAFE80)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E46AF69FAB59AFD2_OFFSET UNITYSDK_OFFSET(0x12AAFED0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET UNITYSDK_OFFSET(0x12AB2850)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x12AB29F0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_F10D8C27B2BF9CBF_OFFSET UNITYSDK_OFFSET(0x12AB1300)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_FC9C90581678A5D9_OFFSET UNITYSDK_OFFSET(0x12AAF5F0)
#define CLASS_1_48FB41EE27FB816A_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x12AB4650)
#define CLASS_1_48FB41EE27FB816A_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x12AB4630)
#define CLASS_1_48FB41EE27FB816A__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB46D0)

inline static constexpr unsigned int Class_1_48FB41EE27FB816A_TypeDefinitionIndex = 67598;

class Class_1_48FB41EE27FB816A : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x30
	::RPG::GameCore::SkillConfig* Field_1_6; // 0x38
	::RPG::GameCore::BattleInstance* Field_1_7; // 0x40
	::RPG::GameCore::SkillData* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0x50
	::RPG::GameCore::TeamDataComponent* Field_1_10; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_12; // 0x68
	::RPG::GameCore::SkillCharacterComponent* Field_1_13; // 0x70
	::RPG::GameCore::TeamFormationComponent* Field_1_14; // 0x78
	::RPG::GameCore::TurnBasedGameMode* Field_1_15; // 0x80
	::RPG::GameCore::TransformComponent* Field_1_16; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_18; // 0x98
	::RPG::GameCore::EntityManager* Field_1_19; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0xB0
	::RPG::GameCore::LevelUIComponent* Field_1_22; // 0xB8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0xC0
	::System::Boolean Field_1_24; // 0xC8
	::System::Boolean Field_1_25; // 0xC9
	::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xCA
	::System::Boolean Field_1_27; // 0xCB
	::System::Single _DragPointDelta_k__BackingField; // 0xCC
	::System::Single Field_1_29; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_648D46C1F273F2A7(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_648D46C1F273F2A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56B2E27E517339A0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_56B2E27E517339A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_860D65C1404EBCB0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_860D65C1404EBCB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E46AF69FAB59AFD2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_E46AF69FAB59AFD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_1_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E00D903BD55E67C_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_8BCCDE43400C400B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8BCCDE43400C400B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Boolean Method_1_FC9C90581678A5D9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_FC9C90581678A5D9_OFFSET))(this);
	}

	::System::Void Method_1_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Boolean Method_1_8DEED24AAE482C0C(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8DEED24AAE482C0C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2E191E64C347F0A0(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_2E191E64C347F0A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1228577BEED51E8E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5, ::System::Int32& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1228577BEED51E8E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F10D8C27B2BF9CBF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_F10D8C27B2BF9CBF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4B694F4B9E7A931A(::UnityEngine::Vector2 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_4B694F4B9E7A931A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TeamFormationComponent* Method_1_0280A99378C9A474()
	{
		return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_0280A99378C9A474_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_73281C4326FBC42D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_73281C4326FBC42D_OFFSET))(this, a1);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_90C72C647D834AD6(::System::Boolean a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A94BB023A49F61B0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_A94BB023A49F61B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AE5FD12B7BCF9FE5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_AE5FD12B7BCF9FE5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0F3C9D5BE2B07E6(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_C0F3C9D5BE2B07E6_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_1C9A2E55F37625ED()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1C9A2E55F37625ED_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_E5AF195750C09845(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_62E9BCCA747BC38D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_62E9BCCA747BC38D_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsScreenPointerDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_ISSCREENPOINTERDOWN_OFFSET))(this);
	}

	::System::Void set_IsScreenPointerDown(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_SET_ISSCREENPOINTERDOWN_OFFSET))(this, a1);
	}

	::System::Single get_DragPointDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_DRAGPOINTDELTA_OFFSET))(this);
	}

	::System::Void set_DragPointDelta(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_SET_DRAGPOINTDELTA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentSubTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTSUBTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheBeyondSelectTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHEBEYONDSELECTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheFadeTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHEFADETARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentMergedTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTMERGEDTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondLightToDarkCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondDarkToLightCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET))(this);
	}
};

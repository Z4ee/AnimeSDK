#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48FB41EE27FB816A_1_Struct_2_E71A4E719BBCD0AD_1.h"
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

#define CLASS_1_48FB41EE27FB816A_1_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x134D4B20)
#define CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0x134D4B40)
#define CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0x134D4B10)
#define CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0x134D4B00)
#define CLASS_1_48FB41EE27FB816A_1_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0x134D4B30)
#define CLASS_1_48FB41EE27FB816A_1_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x134D4AE0)
#define CLASS_1_48FB41EE27FB816A_1_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x134D4AC0)
#define CLASS_1_48FB41EE27FB816A_1_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0x134D4B60)
#define CLASS_1_48FB41EE27FB816A_1_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0x134D4B50)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_0280A99378C9A474_OFFSET UNITYSDK_OFFSET(0x134CF6D0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_0E00D903BD55E67C_1_OFFSET UNITYSDK_OFFSET(0x134D1390)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0x134D1340)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_1228577BEED51E8E_OFFSET UNITYSDK_OFFSET(0x134D18A0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x134D3C20)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x134CF200)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x134D0D70)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_1C9A2E55F37625ED_OFFSET UNITYSDK_OFFSET(0x134D3BA0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_1DFF7CC5215DA8EE_OFFSET UNITYSDK_OFFSET(0x134D3450)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_2CCDA56CB0F21C41_OFFSET UNITYSDK_OFFSET(0x134D3820)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_2E191E64C347F0A0_OFFSET UNITYSDK_OFFSET(0x134D1700)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x134D0430)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_4B694F4B9E7A931A_OFFSET UNITYSDK_OFFSET(0x134D01A0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_56B2E27E517339A0_OFFSET UNITYSDK_OFFSET(0x134CF530)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET UNITYSDK_OFFSET(0x134D31B0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x134D0B00)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_5DDAC6B9AAF71402_OFFSET UNITYSDK_OFFSET(0x134D4890)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x134D3D20)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x134D05F0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_648D46C1F273F2A7_OFFSET UNITYSDK_OFFSET(0x134CF060)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x134CF0E0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x134CF8F0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_73281C4326FBC42D_OFFSET UNITYSDK_OFFSET(0x134D0550)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x134CF260)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_90C72C647D834AD6_OFFSET UNITYSDK_OFFSET(0x134D1F90)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x134D1C10)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x134D0A10)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x134D1200)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_9D308A3ED04C249D_OFFSET UNITYSDK_OFFSET(0x134D13E0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x134CF320)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x134D11B0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x134D1BA0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_AE5FD12B7BCF9FE5_OFFSET UNITYSDK_OFFSET(0x134D36B0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x134D27F0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0x134CF430)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x134D0940)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_C0F3C9D5BE2B07E6_OFFSET UNITYSDK_OFFSET(0x134D2310)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134D0360)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_E46AF69FAB59AFD2_OFFSET UNITYSDK_OFFSET(0x134D03B0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_E5AF195750C09845_OFFSET UNITYSDK_OFFSET(0x134D3020)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_E69F847C9BA6ECD0_OFFSET UNITYSDK_OFFSET(0x134D0E00)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x134D45C0)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_F10D8C27B2BF9CBF_OFFSET UNITYSDK_OFFSET(0x134D1980)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_FC9C90581678A5D9_OFFSET UNITYSDK_OFFSET(0x134CFB40)
#define CLASS_1_48FB41EE27FB816A_1_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x134CFED0)
#define CLASS_1_48FB41EE27FB816A_1_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x134D4AF0)
#define CLASS_1_48FB41EE27FB816A_1_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x134D4AD0)
#define CLASS_1_48FB41EE27FB816A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x134D4B70)

inline static constexpr unsigned int Class_1_48FB41EE27FB816A_1_TypeDefinitionIndex = 72282;

class Class_1_48FB41EE27FB816A_1 : public ::System::Object
{
public:
	// static const ::System::Single DCEFNJLMOLA; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* JEIAJCIOCMO; // 0x18
	::RPG::GameCore::TransformComponent* CGAGGFKPMJN; // 0x20
	::RPG::GameCore::SkillConfig* NODIDMKBNJD; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* BOHJHHDMCEE; // 0x38
	::RPG::GameCore::TurnBasedGameMode* NFJODADGJNM; // 0x40
	::RPG::GameCore::TeamDataComponent* EMGGDPMOIHB; // 0x48
	::RPG::GameCore::TeamFormationComponent* BCKCNKFLBIA; // 0x50
	::RPG::GameCore::SkillData* KCICKBIHDGI; // 0x58
	::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x60
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
	::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CBABFLDLCAO; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0x88
	::RPG::GameCore::SkillCharacterComponent* HAKHAGBFHOK; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FOIGOLICPDO; // 0xA8
	::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0xB0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0xB8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GNCGHCIGBEK; // 0xC0
	::System::Single FLDGBHDDLFJ; // 0xC8
	::System::Boolean CPCEGFMBLMP; // 0xCC
	::System::Boolean LHOCFEBNPCE; // 0xCD
	::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xCE
	::System::Boolean CJGHKLCCJCE; // 0xCF
	::System::Single _DragPointDelta_k__BackingField; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_648D46C1F273F2A7(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_648D46C1F273F2A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56B2E27E517339A0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_56B2E27E517339A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_1_E46AF69FAB59AFD2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_E46AF69FAB59AFD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E00D903BD55E67C_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_0E00D903BD55E67C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_E69F847C9BA6ECD0(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_E69F847C9BA6ECD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Boolean Method_1_FC9C90581678A5D9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_FC9C90581678A5D9_OFFSET))(this);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Boolean Method_1_9D308A3ED04C249D(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_9D308A3ED04C249D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2E191E64C347F0A0(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_2E191E64C347F0A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1228577BEED51E8E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5, ::System::Int32& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_1228577BEED51E8E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F10D8C27B2BF9CBF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_F10D8C27B2BF9CBF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4B694F4B9E7A931A(::UnityEngine::Vector2 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_4B694F4B9E7A931A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TeamFormationComponent* Method_1_0280A99378C9A474()
	{
		return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_0280A99378C9A474_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_73281C4326FBC42D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_73281C4326FBC42D_OFFSET))(this, a1);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_90C72C647D834AD6(::System::Boolean a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_90C72C647D834AD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DFF7CC5215DA8EE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_1DFF7CC5215DA8EE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AE5FD12B7BCF9FE5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_AE5FD12B7BCF9FE5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0F3C9D5BE2B07E6(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_C0F3C9D5BE2B07E6_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_1C9A2E55F37625ED()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_1C9A2E55F37625ED_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_E5AF195750C09845(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_E5AF195750C09845_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_5DDAC6B9AAF71402(::RPG::GameCore::GameEntity* a1, ::Class_1_48FB41EE27FB816A_1_Struct_2_E71A4E719BBCD0AD_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_48FB41EE27FB816A_1_Struct_2_E71A4E719BBCD0AD_1))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_5DDAC6B9AAF71402_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2CCDA56CB0F21C41(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_METHOD_1_2CCDA56CB0F21C41_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsScreenPointerDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_ISSCREENPOINTERDOWN_OFFSET))(this);
	}

	::System::Void set_IsScreenPointerDown(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_SET_ISSCREENPOINTERDOWN_OFFSET))(this, a1);
	}

	::System::Single get_DragPointDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_DRAGPOINTDELTA_OFFSET))(this);
	}

	::System::Void set_DragPointDelta(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_SET_DRAGPOINTDELTA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentSubTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTSUBTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheBeyondSelectTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_CACHEBEYONDSELECTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheFadeTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_CACHEFADETARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentMergedTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET_CACHECURRENTMERGEDTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondLightToDarkCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondDarkToLightCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_1_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET))(this);
	}
};

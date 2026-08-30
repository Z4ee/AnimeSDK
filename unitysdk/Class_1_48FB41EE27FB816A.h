#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
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
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FB41EE27FB816A_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x1595B880)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0x1595B8A0)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0x1595B870)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0x1595B860)
#define CLASS_1_48FB41EE27FB816A_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0x1595B890)
#define CLASS_1_48FB41EE27FB816A_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x1595B840)
#define CLASS_1_48FB41EE27FB816A_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1595B820)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0x1595B8C0)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0x1595B8B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0280A99378C9A474_OFFSET UNITYSDK_OFFSET(0x15954B70)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_1_OFFSET UNITYSDK_OFFSET(0x15956A70)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0x15956A20)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1228577BEED51E8E_OFFSET UNITYSDK_OFFSET(0x15956F60)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x15954480)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15956670)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1C9A2E55F37625ED_OFFSET UNITYSDK_OFFSET(0x159591B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1DFF7CC5215DA8EE_OFFSET UNITYSDK_OFFSET(0x15958A60)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x159558E0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x15955BF0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_2CCDA56CB0F21C41_OFFSET UNITYSDK_OFFSET(0x15958E30)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_2E191E64C347F0A0_OFFSET UNITYSDK_OFFSET(0x15956DC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_2E22DEA765413970_OFFSET UNITYSDK_OFFSET(0x159542B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_3A73C9F6855CD18B_OFFSET UNITYSDK_OFFSET(0x15959230)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_4B694F4B9E7A931A_OFFSET UNITYSDK_OFFSET(0x15955570)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET UNITYSDK_OFFSET(0x159587C0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x15956400)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x1595AF80)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x15956030)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_6D4AEAA6AFF41538_OFFSET UNITYSDK_OFFSET(0x1595A080)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1595AEC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x15954330)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x15954D60)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8BCCDE43400C400B_OFFSET UNITYSDK_OFFSET(0x15956700)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x159544E0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET UNITYSDK_OFFSET(0x15957620)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x159547F0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x15955FA0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x159572D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x15955B00)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_9D308A3ED04C249D_OFFSET UNITYSDK_OFFSET(0x15956AC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x159545A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x159568E0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x15957260)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_AE5FD12B7BCF9FE5_OFFSET UNITYSDK_OFFSET(0x15958CC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0x159546C0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x15956380)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x15957E90)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_C0F3C9D5BE2B07E6_OFFSET UNITYSDK_OFFSET(0x159579B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15955730)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_D9E63A814D66385D_OFFSET UNITYSDK_OFFSET(0x15955800)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E46AF69FAB59AFD2_OFFSET UNITYSDK_OFFSET(0x15955780)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET UNITYSDK_OFFSET(0x15958620)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E92253B429957F8D_OFFSET UNITYSDK_OFFSET(0x15954850)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_F10D8C27B2BF9CBF_OFFSET UNITYSDK_OFFSET(0x15957040)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_FC33BDB33E701F15_OFFSET UNITYSDK_OFFSET(0x15954AF0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_FC9C90581678A5D9_OFFSET UNITYSDK_OFFSET(0x15954F20)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x159552B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_FF4842B24EFFCBD6_OFFSET UNITYSDK_OFFSET(0x15956930)
#define CLASS_1_48FB41EE27FB816A_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x1595B850)
#define CLASS_1_48FB41EE27FB816A_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1595B830)
#define CLASS_1_48FB41EE27FB816A__CTOR_OFFSET UNITYSDK_OFFSET(0x1595B8D0)

inline static constexpr unsigned int Class_1_48FB41EE27FB816A_TypeDefinitionIndex = 72141;

class Class_1_48FB41EE27FB816A : public ::System::Object
{
public:
	// static const ::System::Single DCEFNJLMOLA; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0x10
	::RPG::GameCore::TeamFormationComponent* BCKCNKFLBIA; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CBABFLDLCAO; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0x28
	::RPG::GameCore::TeamDataComponent* EMGGDPMOIHB; // 0x30
	::RPG::GameCore::SkillConfig* NODIDMKBNJD; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FOIGOLICPDO; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0x48
	::RPG::GameCore::SkillData* KCICKBIHDGI; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GNCGHCIGBEK; // 0x58
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0x60
	::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* JEIAJCIOCMO; // 0x68
	::RPG::GameCore::SkillCharacterComponent* HAKHAGBFHOK; // 0x70
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
	::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0x88
	::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0x98
	::RPG::GameCore::LevelUIComponent* NNMDCMDKFHO; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0xA8
	::RPG::GameCore::TransformComponent* CGAGGFKPMJN; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* BOHJHHDMCEE; // 0xB8
	::RPG::GameCore::TurnBasedGameMode* NFJODADGJNM; // 0xC0
	::System::Single _DragPointDelta_k__BackingField; // 0xC8
	::System::Boolean CPCEGFMBLMP; // 0xCC
	::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xCD
	::System::Boolean CJGHKLCCJCE; // 0xCE
	::System::Boolean LHOCFEBNPCE; // 0xCF
	::System::Single FLDGBHDDLFJ; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2E22DEA765413970(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_2E22DEA765413970_OFFSET))(this, a1);
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

	::System::Boolean Method_1_E92253B429957F8D(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_E92253B429957F8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9E63A814D66385D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_D9E63A814D66385D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_24D4EB641B41AC50_OFFSET))(this, a1);
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

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_1_FF4842B24EFFCBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_FF4842B24EFFCBD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_62167C28EC14CC63_OFFSET))(this);
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

	::System::Void Method_1_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Boolean Method_1_FC9C90581678A5D9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_FC9C90581678A5D9_OFFSET))(this);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Boolean Method_1_9D308A3ED04C249D(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_9D308A3ED04C249D_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_90C72C647D834AD6(::System::Boolean a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DFF7CC5215DA8EE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1DFF7CC5215DA8EE_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_1_3A73C9F6855CD18B(::RPG::GameCore::AliveStateMask a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::AliveStateMask, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_3A73C9F6855CD18B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_1_6D4AEAA6AFF41538(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveStateMask a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_6D4AEAA6AFF41538_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E5AF195750C09845(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET))(this, a1);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_1_2CCDA56CB0F21C41(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_2CCDA56CB0F21C41_OFFSET))(this, a1, a2);
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

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::LevelUIComponent* Method_1_FC33BDB33E701F15()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_FC33BDB33E701F15_OFFSET))(this);
	}
};

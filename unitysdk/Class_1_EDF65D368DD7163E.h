#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_152140BAFD2DB102;
class Class_1_1CB8CBC69B962B41;
class Class_1_815CE3ECBEA68E49;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B5F93263C61C75CE;
class Class_1_DA6369E650C77D63;
class Class_1_DDDB57AA67C3A9EA;
class Class_3_E03EC9D105CCFA3C;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelSingleInsertAbilityFinishOrAbort; }
namespace RPG::GameCore { class LevelTurnUltraSkillEnd; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EDF65D368DD7163E_METHOD_1_008EF2AC8EB0C3F3_OFFSET UNITYSDK_OFFSET(0x1642B570)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_00BDF353F3440563_OFFSET UNITYSDK_OFFSET(0x16430D10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16424DA0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0BE0B7E1E63C0A17_OFFSET UNITYSDK_OFFSET(0x16427CB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0E77C9B7B4C150CB_OFFSET UNITYSDK_OFFSET(0x16432910)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET UNITYSDK_OFFSET(0x1642CEC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_126AC2A49218E7E6_OFFSET UNITYSDK_OFFSET(0x16428220)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_17BF0C66F59050B6_OFFSET UNITYSDK_OFFSET(0x16423E50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_1_OFFSET UNITYSDK_OFFSET(0x16431C50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x16431C00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x16424810)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_1C4DC5C9C8B80313_OFFSET UNITYSDK_OFFSET(0x164323E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0x164278F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_22A4CF05073F4843_OFFSET UNITYSDK_OFFSET(0x16427B00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0x16426140)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x1642AAB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_27AC1BC95C3C9F16_OFFSET UNITYSDK_OFFSET(0x1642BB20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2934968982D645E9_OFFSET UNITYSDK_OFFSET(0x16430B20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2C16558AE7971A62_OFFSET UNITYSDK_OFFSET(0x1642B730)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_30E2BC80842FB0E0_OFFSET UNITYSDK_OFFSET(0x1642FDD0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_39B0ACB327760190_OFFSET UNITYSDK_OFFSET(0x1642B900)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3BBF8E59AA8D6F49_OFFSET UNITYSDK_OFFSET(0x1642BA90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3CDB331EC7094406_OFFSET UNITYSDK_OFFSET(0x16426F00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_41F4BE4D485376D6_OFFSET UNITYSDK_OFFSET(0x164246D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET UNITYSDK_OFFSET(0x1642C700)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_45E06D1A6A217312_OFFSET UNITYSDK_OFFSET(0x16427170)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_46D8277042FF7D7A_OFFSET UNITYSDK_OFFSET(0x16424B50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4B750C296D0A640F_OFFSET UNITYSDK_OFFSET(0x1642DAC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET UNITYSDK_OFFSET(0x1642D6C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4D8F3554F74228C2_OFFSET UNITYSDK_OFFSET(0x1642F040)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4EC9FA86A1490C1D_OFFSET UNITYSDK_OFFSET(0x164264E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16431CF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x16429B70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_57051153BDB024B2_OFFSET UNITYSDK_OFFSET(0x16427420)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_5A108D539817BDF6_OFFSET UNITYSDK_OFFSET(0x16425D60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x1642ADF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_61899E9D4FD07AA1_OFFSET UNITYSDK_OFFSET(0x16426C20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_64D1E624C8F98A83_OFFSET UNITYSDK_OFFSET(0x164256B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_69AEEBC33EBC6FD8_OFFSET UNITYSDK_OFFSET(0x1642B6A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6B03E421D814E0C7_OFFSET UNITYSDK_OFFSET(0x16425720)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6B6808AFDA732AF3_OFFSET UNITYSDK_OFFSET(0x164295F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET UNITYSDK_OFFSET(0x1642D9F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_780CA8193D53597D_OFFSET UNITYSDK_OFFSET(0x164134B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_785D4DC6FACE1477_OFFSET UNITYSDK_OFFSET(0x16426E40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET UNITYSDK_OFFSET(0x164245B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7DC528F6CA0FC11B_OFFSET UNITYSDK_OFFSET(0x1642F940)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7EA1D06B0F2DEEB9_OFFSET UNITYSDK_OFFSET(0x164268E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_824E115A4BC2E1F1_OFFSET UNITYSDK_OFFSET(0x16427880)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_83A4158C7436AC75_OFFSET UNITYSDK_OFFSET(0x16431F50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x1642A8E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_93D0C7B828CDE9B1_OFFSET UNITYSDK_OFFSET(0x164322C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET UNITYSDK_OFFSET(0x16426330)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x16431130)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x16424450)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_988117FBEBF96CAE_OFFSET UNITYSDK_OFFSET(0x1642FC40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9CDE45C46934F55D_OFFSET UNITYSDK_OFFSET(0x16428280)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9D2E20254EB84C31_OFFSET UNITYSDK_OFFSET(0x16429EB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FD7402D660805EB_OFFSET UNITYSDK_OFFSET(0x16427EB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET UNITYSDK_OFFSET(0x1642BF70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A27E324BF51283BD_OFFSET UNITYSDK_OFFSET(0x1642DB60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A452EAC691095B7E_OFFSET UNITYSDK_OFFSET(0x16428570)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x1642B5F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET UNITYSDK_OFFSET(0x1642C860)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A91B42031AE1AC4B_OFFSET UNITYSDK_OFFSET(0x16424E80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x16431970)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x16430120)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B1FF135929C0FFA9_OFFSET UNITYSDK_OFFSET(0x1642FB10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B61FF41D45EBDE24_OFFSET UNITYSDK_OFFSET(0x16427630)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B6710022A8D82A42_OFFSET UNITYSDK_OFFSET(0x16431AA0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B7781A3D4E91A7C2_OFFSET UNITYSDK_OFFSET(0x16427C10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C2389939D782476E_OFFSET UNITYSDK_OFFSET(0x16426470)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C67FBE0CC9945EF8_OFFSET UNITYSDK_OFFSET(0x16431D80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET UNITYSDK_OFFSET(0x16425FD0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CA5E7CB53B7F0BB8_OFFSET UNITYSDK_OFFSET(0x1642B040)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x16427A60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x1642AA60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x16431CA0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D310B64689A3BDA7_OFFSET UNITYSDK_OFFSET(0x1642F7F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x16429000)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D737B2CCEE988571_OFFSET UNITYSDK_OFFSET(0x1642E0F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D975CF78718390A8_OFFSET UNITYSDK_OFFSET(0x16429CF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x164302F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x16431B90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x16428D10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET UNITYSDK_OFFSET(0x1642BE70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E39EA2E6DFDD6DC4_OFFSET UNITYSDK_OFFSET(0x164288A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E4068D85680AB655_OFFSET UNITYSDK_OFFSET(0x16431240)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET UNITYSDK_OFFSET(0x164320C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E86E487990404954_OFFSET UNITYSDK_OFFSET(0x16431B30)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E89963FC215D1A6A_OFFSET UNITYSDK_OFFSET(0x16431FD0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_EB65AE234758B364_OFFSET UNITYSDK_OFFSET(0x16427F80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_EC8A7931B9196858_OFFSET UNITYSDK_OFFSET(0x1642C0B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ECB6B27E7BA748DA_OFFSET UNITYSDK_OFFSET(0x1642DBE0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F0C19A966837ACC5_OFFSET UNITYSDK_OFFSET(0x1642F660)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F576669F3778E124_OFFSET UNITYSDK_OFFSET(0x1642BD90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F59D691CE4BA9E59_OFFSET UNITYSDK_OFFSET(0x164299F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F750B196B9D41802_OFFSET UNITYSDK_OFFSET(0x1642D1F0)
#define CLASS_1_EDF65D368DD7163E__CCTOR_OFFSET UNITYSDK_OFFSET(0x164329B0)
#define CLASS_1_EDF65D368DD7163E__CTOR_OFFSET UNITYSDK_OFFSET(0x16423EA0)
#define CLASS_1_EDF65D368DD7163E__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_22_0_OFFSET UNITYSDK_OFFSET(0x16425620)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E_TypeDefinitionIndex = 71265;

class Class_1_EDF65D368DD7163E : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>** StaticGet_NAOJEOFOLFB()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF65D368DD7163E_TypeDefinitionIndex)->GetStaticField(0xC480);
	}
	static ::System::String** StaticGet_FBIMJFGIBAN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF65D368DD7163E_TypeDefinitionIndex)->GetStaticField(0xC488);
	}
	// static const ::System::String* BNDPKDDCDBI; // 0x0
	::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x10
	::Class_1_B5F93263C61C75CE* AEBBPNCLBDD; // 0x18
	::Class_1_ABFB5B7BFEBBC8F7* IEGBIPMGBPA; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::GameCore::LevelEntityActionDelayChanged*>* NBBAOKLLKBH; // 0x28
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* IBLOIPMKMLH; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* HFDJMJDAKDB; // 0x38
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* HLNAMDHDFPA; // 0x40
	::Class_1_815CE3ECBEA68E49* EBOBHDFAMCC; // 0x48
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* BADNJDBHBFD; // 0x50
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* OEBJBOGABMI; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* BNHKNGJKCOI; // 0x60
	::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>* EAIAALEFKIP; // 0x68
	::Class_1_DDDB57AA67C3A9EA* DCAIEJFNLME; // 0x70
	::Class_1_DA6369E650C77D63* FJDPPJMNMGG; // 0x78
	::System::Boolean CPLNIAILKOF; // 0x80
	::System::Boolean DDFAAKFPMEI; // 0x81

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_1_17BF0C66F59050B6()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_17BF0C66F59050B6_OFFSET))(this);
	}

	::System::Void Method_1_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C30CD9FD658A733(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_41F4BE4D485376D6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A91B42031AE1AC4B(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A91B42031AE1AC4B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_64D1E624C8F98A83(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_64D1E624C8F98A83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_6B03E421D814E0C7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6B03E421D814E0C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9942F727476DDAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_26F2ADE6CF3F0469(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_26F2ADE6CF3F0469_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95FDCECFADD0DC60(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2389939D782476E(::Class_1_152140BAFD2DB102* a1, ::Class_1_152140BAFD2DB102* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*, ::Class_1_152140BAFD2DB102*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C2389939D782476E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7EA1D06B0F2DEEB9(::System::Int32 a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7EA1D06B0F2DEEB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_785D4DC6FACE1477(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_785D4DC6FACE1477_OFFSET))(this, a1);
	}

	::System::Void Method_1_45E06D1A6A217312(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_45E06D1A6A217312_OFFSET))(this, a1);
	}

	::System::Void Method_1_B61FF41D45EBDE24(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B61FF41D45EBDE24_OFFSET))(this, a1);
	}

	::System::Void Method_1_824E115A4BC2E1F1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_824E115A4BC2E1F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F49294A70542425(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D8277042FF7D7A(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::Client::ActionBarItemAction a2, ::RPG::Client::ActionBarItemAction a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_46D8277042FF7D7A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7781A3D4E91A7C2(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B7781A3D4E91A7C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB65AE234758B364(::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_EB65AE234758B364_OFFSET))(this, a1);
	}

	::System::Void Method_1_126AC2A49218E7E6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_126AC2A49218E7E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A452EAC691095B7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A452EAC691095B7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E39EA2E6DFDD6DC4(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E39EA2E6DFDD6DC4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}

	::System::Void Method_1_9CDE45C46934F55D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionBarItemAction a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9CDE45C46934F55D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4EC9FA86A1490C1D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4EC9FA86A1490C1D_OFFSET))(this);
	}

	::System::Void Method_1_22A4CF05073F4843(::RPG::Client::ActionBarItemAction a1, ::Class_1_DDDB57AA67C3A9EA* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_22A4CF05073F4843_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6B6808AFDA732AF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6B6808AFDA732AF3_OFFSET))(this);
	}

	::System::Void Method_1_5A108D539817BDF6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_5A108D539817BDF6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F59D691CE4BA9E59()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F59D691CE4BA9E59_OFFSET))(this);
	}

	::System::Boolean Method_1_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_501509B4B58077AF_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_D975CF78718390A8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D975CF78718390A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57051153BDB024B2(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::Client::ActionBarItemAction a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::Client::ActionBarItemAction, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_57051153BDB024B2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_61899E9D4FD07AA1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_61899E9D4FD07AA1_OFFSET))(this);
	}

	::System::Void Method_1_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_CA5E7CB53B7F0BB8(::RPG::GameCore::TurnState a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CA5E7CB53B7F0BB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CDB331EC7094406(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3CDB331EC7094406_OFFSET))(this, a1);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_1_69AEEBC33EBC6FD8(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_69AEEBC33EBC6FD8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2C16558AE7971A62(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2C16558AE7971A62_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_39B0ACB327760190(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_39B0ACB327760190_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3BBF8E59AA8D6F49(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3BBF8E59AA8D6F49_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_27AC1BC95C3C9F16(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_27AC1BC95C3C9F16_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F576669F3778E124(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F576669F3778E124_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_E3030E7CD696276D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9FF71CDFB06416C3(::RPG::GameCore::DynamicFloat* a1, ::Class_3_E03EC9D105CCFA3C* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*, ::Class_3_E03EC9D105CCFA3C*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_EC8A7931B9196858(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_EC8A7931B9196858_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_458CB092ED0C33C4(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_A7209A5DB0DFF39D(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_3_E03EC9D105CCFA3C* a2, ::RPG::GameCore::ActionDelayPreshowConfig* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ActionDelayChangeTypeMask Method_1_0F1CD37E2F5B4A75(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET))(a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_F750B196B9D41802(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F750B196B9D41802_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4C95E683350C5926(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_70ED643A34CA9DEA(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_4B750C296D0A640F(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4B750C296D0A640F_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SkillData* Method_1_A27E324BF51283BD(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A27E324BF51283BD_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayPreshowConfig* Method_1_ECB6B27E7BA748DA(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_ECB6B27E7BA748DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D737B2CCEE988571(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D737B2CCEE988571_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4D8F3554F74228C2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4D8F3554F74228C2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_D310B64689A3BDA7(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D310B64689A3BDA7_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_7DC528F6CA0FC11B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7DC528F6CA0FC11B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1FF135929C0FFA9(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B1FF135929C0FFA9_OFFSET))(this, a1, a2);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_988117FBEBF96CAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_988117FBEBF96CAE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_F0C19A966837ACC5()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F0C19A966837ACC5_OFFSET))(this);
	}

	::System::Void Method_1_30E2BC80842FB0E0(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_30E2BC80842FB0E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET))(this);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_2934968982D645E9(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2934968982D645E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00BDF353F3440563(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_00BDF353F3440563_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Boolean Method_1_ABEAB8AF7FE7565E(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_ABEAB8AF7FE7565E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4068D85680AB655(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E4068D85680AB655_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6710022A8D82A42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B6710022A8D82A42_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E86E487990404954(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E86E487990404954_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9FD7402D660805EB(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FD7402D660805EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_008EF2AC8EB0C3F3(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_008EF2AC8EB0C3F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_1_OFFSET))(this);
	}

	::System::Void Method_1_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_1_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_50131F4CF014469C_OFFSET))(this);
	}

	::RPG::Client::ActionBarItemUIStyle Method_1_9D2E20254EB84C31(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9D2E20254EB84C31_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E89963FC215D1A6A(::RPG::GameCore::ActionBarType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::RPG::Client::ActionBarItemUIStyle& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::ActionBarItemUIStyle&))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E89963FC215D1A6A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_83A4158C7436AC75(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_83A4158C7436AC75_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93D0C7B828CDE9B1(::Class_1_DDDB57AA67C3A9EA* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_93D0C7B828CDE9B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C67FBE0CC9945EF8(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C67FBE0CC9945EF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E569572C3C19C4BD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_0BE0B7E1E63C0A17()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0BE0B7E1E63C0A17_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_780CA8193D53597D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_780CA8193D53597D_OFFSET))(this, a1, a2);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_1C4DC5C9C8B80313(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_1C4DC5C9C8B80313_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0E77C9B7B4C150CB(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0E77C9B7B4C150CB_OFFSET))(this, a1, a2, a3);
	}

	static ::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean> _SkillPreViewSortByActionDelayCmp_g___GetOverrideValue_22_0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean>(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_22_0_OFFSET))(a1);
	}
};

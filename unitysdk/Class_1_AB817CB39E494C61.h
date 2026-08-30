#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarLinkOrder.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/RPG/Client/ActionDelayVisibleType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_1FFDD73C4573633F;
class Class_1_2A97E60807F449E7;
class Class_1_815CE3ECBEA68E49;
class Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B4CDE3278E4B50C2;
class Class_1_D3ADF079E7A3324D;
class Class_1_DDDB57AA67C3A9EA;
class Class_1_F44322B28A360184;
class Class_2_356A85032C965661;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xB98F7E0)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xB98F8C0)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xB98FAF0)
#define CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET UNITYSDK_OFFSET(0xB98FB80)
#define CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB98FCF0)
#define CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xB98F800)
#define CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xB98FCD0)
#define CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET UNITYSDK_OFFSET(0xB98FBD0)
#define CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xB98FAB0)
#define CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xB98FB60)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xB98FC90)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xB98FCB0)
#define CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xB98FC70)
#define CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xB98FAD0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB98DC90)
#define CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0xB98D3F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET UNITYSDK_OFFSET(0xB98D9A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0xB98F8E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET UNITYSDK_OFFSET(0xB990BB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1B741D19A85DAA63_OFFSET UNITYSDK_OFFSET(0xB98BBA0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0xB98E590)
#define CLASS_1_AB817CB39E494C61_METHOD_1_21303BBD2FC9F58A_OFFSET UNITYSDK_OFFSET(0xB98FB90)
#define CLASS_1_AB817CB39E494C61_METHOD_1_227F7CD1F3A93BBB_OFFSET UNITYSDK_OFFSET(0xB990E30)
#define CLASS_1_AB817CB39E494C61_METHOD_1_247C15FF5EDC5F21_OFFSET UNITYSDK_OFFSET(0xB98C750)
#define CLASS_1_AB817CB39E494C61_METHOD_1_26BF70A07B7953F1_OFFSET UNITYSDK_OFFSET(0xB98B850)
#define CLASS_1_AB817CB39E494C61_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xB9899F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2A4B5628CE2AC075_OFFSET UNITYSDK_OFFSET(0xB98F030)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET UNITYSDK_OFFSET(0xB98ECE0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_30A6A74133DD3A05_OFFSET UNITYSDK_OFFSET(0xB98FD10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB98FB10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB98B920)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET UNITYSDK_OFFSET(0xB991330)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xB98A070)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xB989DA0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4013D60CB58EADCD_OFFSET UNITYSDK_OFFSET(0xB98BE70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0xB98A470)
#define CLASS_1_AB817CB39E494C61_METHOD_1_47B18B228592626B_OFFSET UNITYSDK_OFFSET(0xB98DF40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET UNITYSDK_OFFSET(0xB98C2E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET UNITYSDK_OFFSET(0xB98C010)
#define CLASS_1_AB817CB39E494C61_METHOD_1_568C3D3E2A595537_OFFSET UNITYSDK_OFFSET(0xB98F290)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET UNITYSDK_OFFSET(0xB98C350)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET UNITYSDK_OFFSET(0xB98C460)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0xB98C1D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5AA52FE5CE867D63_OFFSET UNITYSDK_OFFSET(0xB98B760)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET UNITYSDK_OFFSET(0xB98F680)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET UNITYSDK_OFFSET(0xB98F5E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xB98A6D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_6966F639289EE678_OFFSET UNITYSDK_OFFSET(0xB98B590)
#define CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET UNITYSDK_OFFSET(0xB98B970)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xB989960)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xB990030)
#define CLASS_1_AB817CB39E494C61_METHOD_1_78EDB0CEF4C09D63_OFFSET UNITYSDK_OFFSET(0xB9896C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET UNITYSDK_OFFSET(0xB98D260)
#define CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xB989770)
#define CLASS_1_AB817CB39E494C61_METHOD_1_88BAD5AB2EA710EB_OFFSET UNITYSDK_OFFSET(0xB98B7F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB98BAD0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8ACE7543A5502AD9_OFFSET UNITYSDK_OFFSET(0xB98CDC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xB98C120)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8E39513D4E086B50_OFFSET UNITYSDK_OFFSET(0xB990080)
#define CLASS_1_AB817CB39E494C61_METHOD_1_901A4F07F0046C04_OFFSET UNITYSDK_OFFSET(0xB98C6C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_933B770C8AC988CB_OFFSET UNITYSDK_OFFSET(0xB990700)
#define CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB98A390)
#define CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0xB98D320)
#define CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xB98C570)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB98FC20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET UNITYSDK_OFFSET(0xB98DE90)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET UNITYSDK_OFFSET(0xB991440)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A6FFCB8633531F0D_OFFSET UNITYSDK_OFFSET(0xB9911A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET UNITYSDK_OFFSET(0xB98ED60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xB990530)
#define CLASS_1_AB817CB39E494C61_METHOD_1_BE09F7964133B0EA_OFFSET UNITYSDK_OFFSET(0xB990910)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB98D440)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0xB98D640)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C8A43F43DF1E99F0_OFFSET UNITYSDK_OFFSET(0xB98D0F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB98C0D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB990DC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB98A670)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CAD108B4AFF59F09_OFFSET UNITYSDK_OFFSET(0xB98B4F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET UNITYSDK_OFFSET(0xB98EF70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0xB98B9C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET UNITYSDK_OFFSET(0xB98BD80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D60F4BA24E06086B_OFFSET UNITYSDK_OFFSET(0xB98C9D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D7B22F939A68E4AA_OFFSET UNITYSDK_OFFSET(0xB9905F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_1_OFFSET UNITYSDK_OFFSET(0xB9914E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0xB991160)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xB98F720)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xB98C600)
#define CLASS_1_AB817CB39E494C61_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0xB98CC10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xB98A5F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EE5330C7D3A9E645_OFFSET UNITYSDK_OFFSET(0xB98F420)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xB98ADA0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xB98FA40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xB98A340)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB98FBE0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET UNITYSDK_OFFSET(0xB98F820)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xB98A180)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET UNITYSDK_OFFSET(0xB98C070)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xB98F7F0)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xB98F8D0)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xB98FB00)
#define CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB98FD00)
#define CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xB98F810)
#define CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xB98FCE0)
#define CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xB98FAC0)
#define CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xB98FB70)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xB98FCA0)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xB98FCC0)
#define CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xB98FC80)
#define CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xB98FAE0)
#define CLASS_1_AB817CB39E494C61__CCTOR_OFFSET UNITYSDK_OFFSET(0xB991950)
#define CLASS_1_AB817CB39E494C61__CTOR_OFFSET UNITYSDK_OFFSET(0xB991530)

inline static constexpr unsigned int Class_1_AB817CB39E494C61_TypeDefinitionIndex = 71164;

class Class_1_AB817CB39E494C61 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>** StaticGet_KIBGHBLLEGF()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB817CB39E494C61_TypeDefinitionIndex)->GetStaticField(0x2F180);
	}
	::UnityEngine::RectTransform* _ActionBarRect_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<::System::UInt32>*>* BLMMLLODFAN; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B4CDE3278E4B50C2*>* NIOGPDJGJBM; // 0x20
	::Il2CppArray<::UnityEngine::Vector2>* MLDPICFPPBH; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* _SkillPreviewRemoveCache_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::ShowAttackTimeParam*>* DLECJCLNHPA; // 0x38
	::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x40
	::Class_2_356A85032C965661* BOIPMHHNOCF; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelEntityActionDelayChanged*>* OMCEGIJGIEK; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>* _CustomEffects_k__BackingField; // 0x58
	::Class_1_ABFB5B7BFEBBC8F7* _ActionBarMgrRef_k__BackingField; // 0x60
	::Class_1_815CE3ECBEA68E49* GIOEGCLCFFG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* KNBPDHCEFHJ; // 0x70
	::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::Class_1_D3ADF079E7A3324D*>* BEIJENHIPMI; // 0x80
	::Il2CppArray<::RPG::Client::ActionBarItemUIStyle>* GCOLFBLOLJD; // 0x88
	::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* _AllPos_k__BackingField; // 0x98
	::System::Single KNAJADOIEID; // 0xA0
	::RPG::Client::ActionBarUpdateTiming _ActionBarUpdateTimingCache_k__BackingField; // 0xA4
	::System::Int32 NHJBFHOBGGJ; // 0xA8
	::System::Single GLAKCPNIHCP; // 0xAC
	::System::Single APFCCHBCNPI; // 0xB0
	::System::Single _TotalHeight_k__BackingField; // 0xB4
	::RPG::GameCore::TurnState AEAGKJJAJOA; // 0xB8
	::System::Int32 FKAAHJFEDBM; // 0xBC
	::System::Int32 JINAEKFCHCH; // 0xC0
	::System::Single BPELFOPIHFI; // 0xC4
	::System::Int32 _ShenJunLevel2Count_k__BackingField; // 0xC8
	::UnityEngine::Vector3 CDNNEOPKDND; // 0xCC
	::System::Int32 MPJGLFMLANL; // 0xD8
	::System::Int32 _ShenJunLevel1Count_k__BackingField; // 0xDC
	::System::Single KDGLNNDGLFD; // 0xE0
	::System::Int32 _CountDownWarningTime_k__BackingField; // 0xE4
	::System::Boolean _IsAnimNodeActionBarFadeInPlaying_k__BackingField; // 0xE8
	::System::Boolean _IsTicking_k__BackingField; // 0xE9
	::System::Boolean NBOOAPOOOPC; // 0xEA
	::System::Boolean _AutoSetTutorialDynamicKey_k__BackingField; // 0xEB
	::System::Int32 PPIOFDCIAHL; // 0xEC
	::UnityEngine::Vector3 BMOPKGBPLLB; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CCTOR_OFFSET))();
	}

	::System::Void Method_1_78EDB0CEF4C09D63(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_78EDB0CEF4C09D63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_40E6AFCB91524816_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* Method_1_CAD108B4AFF59F09(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CAD108B4AFF59F09_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelEntityActionDelayChanged* Method_1_5AA52FE5CE867D63(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5AA52FE5CE867D63_OFFSET))(this, a1);
	}

	::System::Void Method_1_88BAD5AB2EA710EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_88BAD5AB2EA710EB_OFFSET))(this, a1);
	}

	::RPG::Client::ShowAttackTimeParam* Method_1_26BF70A07B7953F1(::System::UInt32 a1)
	{
		return ((::RPG::Client::ShowAttackTimeParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_26BF70A07B7953F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_6F7881D70A7B0045(::RPG::Client::ActionDelayVisibleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_6966F639289EE678(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_6966F639289EE678_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_1B741D19A85DAA63(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1B741D19A85DAA63_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4013D60CB58EADCD(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4013D60CB58EADCD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_565706B64B509AA6(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_FE2023B029BCB581(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_901A4F07F0046C04(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_901A4F07F0046C04_OFFSET))(this, a1);
	}

	::System::Void Method_1_247C15FF5EDC5F21(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_247C15FF5EDC5F21_OFFSET))(this, a1);
	}

	::System::Void Method_1_D60F4BA24E06086B(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D60F4BA24E06086B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_7AA084BCCD5BD789(::Class_1_1FFDD73C4573633F* a1, ::Class_1_1FFDD73C4573633F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1FFDD73C4573633F*, ::Class_1_1FFDD73C4573633F*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ACE7543A5502AD9(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8ACE7543A5502AD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8A43F43DF1E99F0(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C8A43F43DF1E99F0_OFFSET))(a1, a2);
	}

	::System::Void Method_1_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A535E19C50EAF933(::RPG::GameCore::ActionDelayChangeReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET))(this, a1);
	}

	::System::Void Method_1_47B18B228592626B(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_47B18B228592626B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C10B76DCE350A5D(::RPG::Client::ActionDelayVisibleType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Boolean Method_1_146B82294136F2AB(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET))(this, a1);
	}

	::RPG::Client::ActionBarItemAction Method_1_2D2DBBE52259A093(::RPG::Client::ActionBarItemAction a1, ::RPG::Client::ActionBarItemAction a2)
	{
		return ((::RPG::Client::ActionBarItemAction(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_D3260B8F64623BF5(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_B1C3B03E2A683CEC(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_2A4B5628CE2AC075(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2A4B5628CE2AC075_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_CECBB3A062B4DB69(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890_1(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_568C3D3E2A595537(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_568C3D3E2A595537_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_EE5330C7D3A9E645(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EE5330C7D3A9E645_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::Class_1_ABFB5B7BFEBBC8F7* get_ActionBarMgrRef()
	{
		return ((::Class_1_ABFB5B7BFEBBC8F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET))(this);
	}

	::System::Void set_ActionBarMgrRef(::Class_1_ABFB5B7BFEBBC8F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ABFB5B7BFEBBC8F7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
	{
		return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET))(this);
	}

	::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC626B9B626ADBFC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* get_ActionBarRect()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET))(this);
	}

	::System::Void set_ActionBarRect(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Boolean get_IsAnimNodeActionBarFadeInPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this);
	}

	::System::Void set_IsAnimNodeActionBarFadeInPlaying(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this, a1);
	}

	::System::Single get_TotalHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET))(this);
	}

	::System::Void set_TotalHeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionBarUpdateTiming get_ActionBarUpdateTimingCache()
	{
		return ((::RPG::Client::ActionBarUpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this);
	}

	::System::Void set_ActionBarUpdateTimingCache(::RPG::Client::ActionBarUpdateTiming a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean get_IsTicking()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET))(this);
	}

	::System::Void set_IsTicking(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* get_AllPos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* Method_1_21303BBD2FC9F58A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_21303BBD2FC9F58A_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>* get_CustomEffects()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET))(this);
	}

	::Class_1_815CE3ECBEA68E49* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_815CE3ECBEA68E49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* get_SkillPreviewRemoveCache()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET))(this);
	}

	::System::Void set_SkillPreviewRemoveCache(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET))(this, a1);
	}

	::System::Int32 get_ShenJunLevel1Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel1Count(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_ShenJunLevel2Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel2Count(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_CountDownWarningTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET))(this);
	}

	::System::Void set_CountDownWarningTime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_AutoSetTutorialDynamicKey()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this);
	}

	::System::Void set_AutoSetTutorialDynamicKey(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this, a1);
	}

	::System::Void Method_1_30A6A74133DD3A05(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_30A6A74133DD3A05_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E39513D4E086B50(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8E39513D4E086B50_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::RPG::Client::ActionBarLinkOrder Method_1_D7B22F939A68E4AA(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActionBarLinkOrder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D7B22F939A68E4AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_933B770C8AC988CB(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_933B770C8AC988CB_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_BE09F7964133B0EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_BE09F7964133B0EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_1_227F7CD1F3A93BBB(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_227F7CD1F3A93BBB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ActionBarEventAction Method_1_A6FFCB8633531F0D(::System::Int32 a1, ::System::Boolean a2, ::Class_1_B4CDE3278E4B50C2*& a3)
	{
		return ((::RPG::Client::ActionBarEventAction(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Class_1_B4CDE3278E4B50C2*&))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A6FFCB8633531F0D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_3B55ECD4A0DFB7B0(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_A6D76F57494D3A55(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1AF42459E8A3BD99(::Class_1_DDDB57AA67C3A9EA* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>* Method_1_DA41DCAD7C27DB4D_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_1_OFFSET))(this);
	}
};

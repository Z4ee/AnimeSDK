#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
class Class_3_3F1B1DE9D9F51912;
class TutorialNode;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class TextOutline; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MATCHTHREEPIECE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD64DD80)
#define RPG_CLIENT_MATCHTHREEPIECE_GET_PIECEDATA_OFFSET UNITYSDK_OFFSET(0xD64B580)
#define RPG_CLIENT_MATCHTHREEPIECE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD64B390)
#define RPG_CLIENT_MATCHTHREEPIECE_INIT_OFFSET UNITYSDK_OFFSET(0xD64B5A0)
#define RPG_CLIENT_MATCHTHREEPIECE_MATCHED_OFFSET UNITYSDK_OFFSET(0xD64D510)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xD64DBA0)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD64BB60)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xD64D710)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD64E730)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xD64C030)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4EF01F55C8320404_OFFSET UNITYSDK_OFFSET(0xD64C6C0)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0xD64E6A0)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0xD64E600)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_592FC68A42F19409_1_OFFSET UNITYSDK_OFFSET(0xD64CE80)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_592FC68A42F19409_OFFSET UNITYSDK_OFFSET(0xD64D220)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0xD64D970)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_6D8B389448C59BE1_OFFSET UNITYSDK_OFFSET(0xD64BE90)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0xD64D8C0)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD64C410)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_9FBCB7EE3738DEA4_OFFSET UNITYSDK_OFFSET(0xD64D170)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_A3AECC7AAA326A11_OFFSET UNITYSDK_OFFSET(0xD64CE20)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0xD64C490)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_F1C2C3722C7B5E2C_OFFSET UNITYSDK_OFFSET(0xD64E5A0)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xD64E780)
#define RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xD64CDD0)
#define RPG_CLIENT_MATCHTHREEPIECE_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD64C5F0)
#define RPG_CLIENT_MATCHTHREEPIECE_MOVEPATH_OFFSET UNITYSDK_OFFSET(0xD64C720)
#define RPG_CLIENT_MATCHTHREEPIECE_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD64DFE0)
#define RPG_CLIENT_MATCHTHREEPIECE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD64E160)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD64E1C0)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xD64E280)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xD64E340)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xD64E220)
#define RPG_CLIENT_MATCHTHREEPIECE_PLAYBOMBLOOPANIM_OFFSET UNITYSDK_OFFSET(0xD64C5A0)
#define RPG_CLIENT_MATCHTHREEPIECE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xD64C360)
#define RPG_CLIENT_MATCHTHREEPIECE_SETBOARD_OFFSET UNITYSDK_OFFSET(0xD64B9A0)
#define RPG_CLIENT_MATCHTHREEPIECE_SETHOVERED_OFFSET UNITYSDK_OFFSET(0xD64BAD0)
#define RPG_CLIENT_MATCHTHREEPIECE_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xD64BA70)
#define RPG_CLIENT_MATCHTHREEPIECE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xD64BC90)
#define RPG_CLIENT_MATCHTHREEPIECE_SETSIZE_OFFSET UNITYSDK_OFFSET(0xD64B9F0)
#define RPG_CLIENT_MATCHTHREEPIECE_SETUPPIECEDATA_OFFSET UNITYSDK_OFFSET(0xD64C310)
#define RPG_CLIENT_MATCHTHREEPIECE_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD64BD50)
#define RPG_CLIENT_MATCHTHREEPIECE_SET_PIECEDATA_OFFSET UNITYSDK_OFFSET(0xD64B590)
#define RPG_CLIENT_MATCHTHREEPIECE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD64B3D0)
#define RPG_CLIENT_MATCHTHREEPIECE_SHAKE_OFFSET UNITYSDK_OFFSET(0xD64DA70)
#define RPG_CLIENT_MATCHTHREEPIECE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD64DC10)
#define RPG_CLIENT_MATCHTHREEPIECE_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0xD64DAF0)
#define RPG_CLIENT_MATCHTHREEPIECE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xD64E400)
#define RPG_CLIENT_MATCHTHREEPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0xD64E7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePiece_TypeDefinitionIndex = 66005;

	class MatchThreePiece : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 BBJNBAHIDPK = 0x5; // 0x0
		// static const ::System::String* LPLOCNEGJKG; // 0x0
		// static const ::System::String* LGJNOMEGOHG; // 0x0
		// static const ::System::String* FPJCMLOLPGH; // 0x0
		// static const ::System::String* KFLPMIFBIJA; // 0x0
		// static const ::System::String* DHHHBBGDGIN; // 0x0
		// static const ::System::String* FGJJFDEPHDI; // 0x0
		// static const ::System::String* FHGIABGCOBB; // 0x0
		// static const ::System::String* DPJGINMNAHD; // 0x0
		// static const ::System::String* BKFNPDMBKJN; // 0x0
		// static const ::System::String* GBPJMODHAIP; // 0x0
		// static const ::System::String* PDPKHOGOAHF; // 0x0
		// static const ::System::String* IJCAMCAKCHP; // 0x0
		// static const ::System::UInt32 LOIOMJIIMLN = 0xE; // 0x0
		::Class_1_1D65C84443DC695F* _PieceData_k__BackingField; // 0x18
		::UnityEngine::Vector2Int FNOMAKFJKFB; // 0x20
		::System::Single CNMJLANLGBK; // 0x28
		::System::Single GINLBNMBLCA; // 0x2C
		::System::Single KHECLAFLAPJ; // 0x30
		::System::Single GFHJNHOMCCN; // 0x34
		::System::Boolean LAMLKCBNAIP; // 0x38
		::System::Boolean FHBNNGCEPFD; // 0x39
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x40
		::UnityEngine::Animation* PMOJILOJEPE; // 0x48
		::UnityEngine::UI::Image* FFGMMMAJLBC; // 0x50
		::UnityEngine::UI::Image* HMDBNINAEDI; // 0x58
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x60
		::TutorialNode* PHCKLEILNME; // 0x68
		::UnityEngine::Transform* CGDDPIMNLJD; // 0x70
		::UnityEngine::Transform* OCANLBKMJCB; // 0x78
		::UnityEngine::Transform* FIDPAGNLAAN; // 0x80
		::UnityEngine::Transform* BDFAHHKOPBG; // 0x88
		::UnityEngine::Transform* DEMLLKECJLG; // 0x90
		::UnityEngine::Animator* APPGGMLEPLN; // 0x98
		::UnityEngine::Transform* GGGPEDOCALJ; // 0xA0
		::UnityEngine::UI::Text* DMAOHOGFHDI; // 0xA8
		::RPG::Client::TextOutline* EPFIBNGLAAM; // 0xB0
		::UnityEngine::Transform* FKIEMCKBNDA; // 0xB8
		::System::Int32 IJOELJINKBL; // 0xC0
		::System::Int32 PJHJKHCJPGC; // 0xC4
		::System::Int32 HCIFKIKMBAA; // 0xC8
		::System::UInt32 NCJAJNLIIIB; // 0xCC
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::UnityEngine::Color, ::UnityEngine::Color>>* CGPBKIPMJPL; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_PosIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SET_POSINDEX_OFFSET))(this, a1);
		}

		::Class_1_1D65C84443DC695F* get_PieceData()
		{
			return ((::Class_1_1D65C84443DC695F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GET_PIECEDATA_OFFSET))(this);
		}

		::System::Void set_PieceData(::Class_1_1D65C84443DC695F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SET_PIECEDATA_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_INIT_OFFSET))(this);
		}

		::System::Void SetBoard(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETBOARD_OFFSET))(this, a1);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetHovered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETHOVERED_OFFSET))(this, a1);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETSELECTED_OFFSET))(this, a1);
		}

		::System::Void SetupView(::Class_1_1D65C84443DC695F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void SetupPieceData(::Class_1_1D65C84443DC695F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETUPPIECEDATA_OFFSET))(this, a1);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void PlayBombLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PLAYBOMBLOOPANIM_OFFSET))(this);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MOVEIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void MovePath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MOVEPATH_OFFSET))(this, a1, a2);
		}

		::System::Void Matched(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MATCHED_OFFSET))(this, a1, a2);
		}

		::System::Void Shake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SHAKE_OFFSET))(this);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_STOPSHAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void SwitchTo(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SWITCHTO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_4EF01F55C8320404(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4EF01F55C8320404_OFFSET))(this, a1);
		}

		::System::Single Method_5_682FA2F0C959D8A1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_682FA2F0C959D8A1_OFFSET))(this);
		}

		::System::Single Method_5_705AF43C01ED360A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_705AF43C01ED360A_OFFSET))(this);
		}

		::System::String* Method_5_6D8B389448C59BE1(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::PieceTag a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_6D8B389448C59BE1_OFFSET))(this, a1, a2, a3);
		}

		::Class_3_3F1B1DE9D9F51912* Method_5_592FC68A42F19409(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3)
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_592FC68A42F19409_OFFSET))(this, a1, a2, a3);
		}

		::Class_3_3F1B1DE9D9F51912* Method_5_592FC68A42F19409_1(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3)
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_592FC68A42F19409_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Boolean Method_5_F1C2C3722C7B5E2C(::RPG::GameCore::Match3::BombType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_F1C2C3722C7B5E2C_OFFSET))(this, a1);
		}

		::System::Void Method_5_BCB087DFB7399B96(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_BCB087DFB7399B96_OFFSET))(this, a1);
		}

		::System::Void Method_5_558C6AE12602A241()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_558C6AE12602A241_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_19B91D58E02869BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_19B91D58E02869BC_OFFSET))(this);
		}

		::System::Boolean Method_5_A3AECC7AAA326A11(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_A3AECC7AAA326A11_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_9FBCB7EE3738DEA4(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_9FBCB7EE3738DEA4_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_570C5557A774C69E(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_570C5557A774C69E_OFFSET))(this, a1);
		}

		::System::Single Method_5_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Single Method_5_FF7B2911BBACA4A9_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_FF7B2911BBACA4A9_1_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_METHOD_5_4805283D59625FD9_OFFSET))(this);
		}
	};
}

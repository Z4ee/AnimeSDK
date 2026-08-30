#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BaseItemState.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/InsertionItemState.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1342B57709FD7AC5;
class Class_1_D27BF54F25500E5F;
class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETISHOVER_OFFSET UNITYSDK_OFFSET(0x160FD050)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET UNITYSDK_OFFSET(0x160FDEE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x160FA2C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISINANIMATION_OFFSET UNITYSDK_OFFSET(0x160FD1D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEMFAILD_OFFSET UNITYSDK_OFFSET(0x160FE9F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEM_OFFSET UNITYSDK_OFFSET(0x160FE980)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_METHOD_7_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x160FFB10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160FFF80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x160F9780)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0x160F9850)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0x160FFCC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_RESETLASTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0x160FDFA0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ROTATE_OFFSET UNITYSDK_OFFSET(0x160FB650)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETANIMATOR_OFFSET UNITYSDK_OFFSET(0x16100030)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x160FFE40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMSTATE_OFFSET UNITYSDK_OFFSET(0x160FA470)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCENTER_OFFSET UNITYSDK_OFFSET(0x160FB550)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0x160FF290)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETDITHERALPHAWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x160FC420)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x160FD090)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONSTATE_OFFSET UNITYSDK_OFFSET(0x160FB5C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0x160FB4E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETREDHIT_OFFSET UNITYSDK_OFFSET(0x160FDF20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETROTATECURVE_OFFSET UNITYSDK_OFFSET(0x160FFFE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETSCALEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x160F67D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETTRANSFERSTATE_OFFSET UNITYSDK_OFFSET(0x160FC610)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0x160F8000)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x161000C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x161000A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleItem_TypeDefinitionIndex = 78162;

	class InsertionPuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		static ::System::String** StaticGet_OAKPAGACBBO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InsertionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x63770);
		}
		static ::System::String** StaticGet_OMBNKEFHNBH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InsertionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x63778);
		}
		::System::Boolean IsRefreshPosition; // 0x30
		::System::Boolean IsInteractable; // 0x31
		::System::Boolean IsDisable; // 0x32
		::System::Boolean IsRetreat; // 0x33
		::System::Boolean IsExit; // 0x34
		::System::Boolean IsTarget; // 0x35
		::System::Boolean IsInsertion; // 0x36
		::System::Boolean IsBlock; // 0x37
		::System::Boolean IsTransfer; // 0x38
		::System::Boolean IsBoard; // 0x39
		::System::Boolean IsBoundary; // 0x3A
		::System::Int32 InsertionMatchID; // 0x3C
		::System::Int32 TransferMatchID; // 0x40
		::UnityEngine::Animator* TargetAnimator; // 0x48
		::UnityEngine::GameObject* TransferEffect; // 0x50
		::System::Single ItemOriginScale; // 0x58
		::RPG::Client::Prop::BaseItemState LFBAOFKKENA; // 0x5C
		::System::Boolean MDHFHDHIBEE; // 0x60
		::Struct_2_32361ACFB28DADC0 CPODFLIKCGO; // 0x64
		::Struct_2_32361ACFB28DADC0 GIOMINGLNOF; // 0x6C
		::UnityEngine::Vector2 FOOKCGJIBMM; // 0x74
		::UnityEngine::Vector2 CIMKFJBFEJO; // 0x7C
		::UnityEngine::Vector2 MLKKADCAMJH; // 0x84
		::System::Single ELAPNHKMPPC; // 0x8C
		::System::Boolean MHLHNOLKFNE; // 0x90
		::System::Single PGMIOKKLHIE; // 0x94
		::UnityEngine::Vector2 GPAPFJAKOHC; // 0x98
		::UnityEngine::Vector2 GBILFGBIGCF; // 0xA0
		::UnityEngine::AnimationCurve* APPFIKHLIOD; // 0xA8
		::System::Single PBKJKLAHGBP; // 0xB0
		::Class_3_CD04D3296DF4C842_12* DKGHCDHMKCP; // 0xB8
		::Class_1_D27BF54F25500E5F* CFIMJPFGBAL; // 0xC0
		::Class_1_D27BF54F25500E5F* IBGKOCINPOP; // 0xC8
		::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_TICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetCoordAndPosition(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCOORDANDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNextCoordAndPosition(::Struct_2_32361ACFB28DADC0 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_32361ACFB28DADC0, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetLastCoordAndPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_RESETLASTCOORDANDPOSITION_OFFSET))(this);
		}

		::System::Void SetCenter(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCENTER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISINANIMATION_OFFSET))(this);
		}

		::System::Boolean IsMatchItem(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchItemFaild(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEMFAILD_OFFSET))(this, a1);
		}

		::System::Void SetRotateCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETROTATECURVE_OFFSET))(this, a1);
		}

		::Struct_2_32361ACFB28DADC0 GetNextCoord()
		{
			return ((::Struct_2_32361ACFB28DADC0(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET))(this);
		}

		::System::Void SetAnimator(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETANIMATOR_OFFSET))(this, a1);
		}

		::System::Boolean GetIsHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETISHOVER_OFFSET))(this);
		}

		::System::Void Rotate(::Class_3_CD04D3296DF4C842_12* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CD04D3296DF4C842_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetInsertionHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetInsertionState(::RPG::Client::Prop::InsertionItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetBaseItemHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetBaseItemState(::RPG::Client::Prop::BaseItemState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BaseItemState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRedHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETREDHIT_OFFSET))(this);
		}

		::System::Void SetScaleWithAnimation(::System::Single a1, ::Class_3_CD04D3296DF4C842_12* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_3_CD04D3296DF4C842_12*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETSCALEWITHANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTransferState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETTRANSFERSTATE_OFFSET))(this, a1);
		}

		::System::Void SetDitherAlphaWithAnimation(::System::Single a1, ::System::Single a2, ::System::Single a3, ::Class_3_CD04D3296DF4C842_12* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::Class_3_CD04D3296DF4C842_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETDITHERALPHAWITHANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_7_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_METHOD_7_5A124CAF1E48B74F_OFFSET))(this);
		}
	};
}

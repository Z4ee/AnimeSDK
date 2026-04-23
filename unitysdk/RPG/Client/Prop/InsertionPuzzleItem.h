#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BaseItemState.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/InsertionItemState.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9CBC71DC5240DC00;
class Class_1_D27BF54F25500E5F;
class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETISHOVER_OFFSET UNITYSDK_OFFSET(0xAE264A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET UNITYSDK_OFFSET(0xAE27320)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xAE23C30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISINANIMATION_OFFSET UNITYSDK_OFFSET(0xAE26620)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEMFAILD_OFFSET UNITYSDK_OFFSET(0xAE27D40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEM_OFFSET UNITYSDK_OFFSET(0xAE27CD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_METHOD_7_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xAE28FB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAE29410)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAE23140)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAE23210)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAE29160)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_RESETLASTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xAE273E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ROTATE_OFFSET UNITYSDK_OFFSET(0xAE24B60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETANIMATOR_OFFSET UNITYSDK_OFFSET(0xAE294C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAE292D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMSTATE_OFFSET UNITYSDK_OFFSET(0xAE23DE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCENTER_OFFSET UNITYSDK_OFFSET(0xAE24A60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xAE28580)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETDITHERALPHAWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xAE25910)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAE264E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONSTATE_OFFSET UNITYSDK_OFFSET(0xAE24AD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xAE249F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETREDHIT_OFFSET UNITYSDK_OFFSET(0xAE27360)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETROTATECURVE_OFFSET UNITYSDK_OFFSET(0xAE29470)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETSCALEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xAE20490)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETTRANSFERSTATE_OFFSET UNITYSDK_OFFSET(0xAE25AD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0xAE21B40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE29550)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAE29530)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAE295A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAE29720)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAE29680)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAE295F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleItem_TypeDefinitionIndex = 72130;

	class InsertionPuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		static ::System::String** StaticGet_Field_7_34()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InsertionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0xB5B0);
		}
		static ::System::String** StaticGet_Field_7_35()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InsertionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0xB5B8);
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
		::RPG::Client::Prop::BaseItemState Field_7_16; // 0x5C
		::System::Boolean Field_7_17; // 0x60
		::Struct_2_2F8FC043285F98CD_1 Field_7_18; // 0x64
		::Struct_2_2F8FC043285F98CD_1 Field_7_19; // 0x6C
		::UnityEngine::Vector2 Field_7_20; // 0x74
		::UnityEngine::Vector2 Field_7_21; // 0x7C
		::UnityEngine::Vector2 Field_7_22; // 0x84
		::System::Single Field_7_23; // 0x8C
		::System::Boolean Field_7_24; // 0x90
		::System::Single Field_7_25; // 0x94
		::UnityEngine::Vector2 Field_7_26; // 0x98
		::UnityEngine::Vector2 Field_7_27; // 0xA0
		::UnityEngine::AnimationCurve* Field_7_28; // 0xA8
		::System::Single Field_7_29; // 0xB0
		::Class_3_CD04D3296DF4C842_12* Field_7_30; // 0xB8
		::Class_1_D27BF54F25500E5F* Field_7_31; // 0xC0
		::Class_1_D27BF54F25500E5F* Field_7_32; // 0xC8
		::Class_1_9CBC71DC5240DC00* Field_7_33; // 0xD0

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

		::System::Void SetNextCoordAndPosition(::Struct_2_2F8FC043285F98CD_1 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2F8FC043285F98CD_1, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET))(this, a1, a2, a3);
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

		::Struct_2_2F8FC043285F98CD_1 GetNextCoord()
		{
			return ((::Struct_2_2F8FC043285F98CD_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_Init(::RPG::Client::Prop::PuzzleBoardBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHover(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnHoverExit(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET))(this, P0);
		}
	};
}

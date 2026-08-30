#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/JigsawItemDirection.h"
#include "unitysdk/RPG/Client/Prop/JigsawItemState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_CLEARANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x161093C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161071B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0x16111E80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x1610DB40)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ISINANIMATION_OFFSET UNITYSDK_OFFSET(0x1610F490)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0x16114C90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16114E80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x1610A780)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1610C230)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0x16114C50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0x16114C10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ROTATEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x1610BA70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x16114A90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETANIMATORACTIVE_OFFSET UNITYSDK_OFFSET(0x1610DCC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETCOLORMASK_OFFSET UNITYSDK_OFFSET(0x161153F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDARKSTATE_OFFSET UNITYSDK_OFFSET(0x16115100)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x16114B00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVECENTER_OFFSET UNITYSDK_OFFSET(0x16111BC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0x161120E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x16115240)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x161150B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x161143E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x16112680)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0x16108740)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETUPITEM_OFFSET UNITYSDK_OFFSET(0x1610D970)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTMOVETOANIMATION_OFFSET UNITYSDK_OFFSET(0x1610CFC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTROTATEANIMATION_OFFSET UNITYSDK_OFFSET(0x16115590)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTSCALEANIMATION_OFFSET UNITYSDK_OFFSET(0x1610F270)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0x16107AD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x16110C60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGEROUTLINEFADEPERFORM_OFFSET UNITYSDK_OFFSET(0x161127D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0x16113190)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALCURRENTOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x16114500)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALTEXSCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x16114360)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16115900)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__INITOUTLINESHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0x16114480)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x16115800)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x16115480)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADCOLLIDERMESH_OFFSET UNITYSDK_OFFSET(0x16114830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADHINTMESH_OFFSET UNITYSDK_OFFSET(0x16113CB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADMESH_OFFSET UNITYSDK_OFFSET(0x161135D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADOUTLINE_OFFSET UNITYSDK_OFFSET(0x16113830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x16113260)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SHOWOUTLINESHADOW_OFFSET UNITYSDK_OFFSET(0x161146A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleItem_TypeDefinitionIndex = 78187;

	class JigsawPuzzleItem : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::System::Boolean IsDisable; // 0x28
		::System::Boolean IsTarget; // 0x29
		::System::Boolean IsNeedCollect; // 0x2A
		::System::Boolean IsBoundary; // 0x2B
		::System::Boolean IsBoard; // 0x2C
		::System::Boolean IsMoveable; // 0x2D
		::System::Boolean IsInteractable; // 0x2E
		::System::Boolean IsForUI; // 0x2F
		::System::Boolean IsFocusItem; // 0x30
		::System::Int32 OrderPriority; // 0x34
		::System::Int32 ShapeType; // 0x38
		::RPG::Client::Prop::JigsawItemDirection InitDirection; // 0x3C
		::RPG::Client::Prop::JigsawItemDirection Direction; // 0x40
		::RPG::Client::Prop::JigsawItemData* ItemData; // 0x48
		::UnityEngine::Texture2D* EmptyTex; // 0x50
		::System::Boolean _IsOnHover; // 0x58
		::RPG::Client::Prop::JigsawItemDirection _PendingDirection; // 0x5C
		::RPG::Client::Prop::JigsawItemState _CurState; // 0x60
		::UnityEngine::Vector3 _DragPosOffset; // 0x64
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x70
		::UnityEngine::Vector4 _Tex_ST; // 0x78
		::UnityEngine::Animator* _Animator; // 0x88
		::UnityEngine::Material* _Material; // 0x90
		::UnityEngine::MeshFilter* _MeshFilter; // 0x98
		::UnityEngine::Transform* _OutlineRoot; // 0xA0
		::UnityEngine::Material* _OutlineMaterial; // 0xA8
		::UnityEngine::MeshFilter* _OutlineMeshFilter; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _RuntimeLoadMeshes; // 0xB8
		::Class_1_D27BF54F25500E5F* _ScaleTransit; // 0xC0
		::UnityEngine::AnimationCurve* _ScaleAnimCurve; // 0xC8
		::System::Single _ScaleSize; // 0xD0
		::Class_1_D27BF54F25500E5F* _RotationTransit; // 0xD8
		::UnityEngine::AnimationCurve* _RotationAnimCurve; // 0xE0
		::UnityEngine::Quaternion _InitLocalRotation; // 0xE8
		::UnityEngine::Quaternion _CurrentRotation; // 0xF8
		::UnityEngine::Quaternion _TargetRotation; // 0x108
		::UnityEngine::Vector3 _CurrentOutlineOffset; // 0x118
		::UnityEngine::Vector3 _TargetOutlineOffset; // 0x124
		::Class_1_D27BF54F25500E5F* _ShadowTransit; // 0x130
		::Class_1_D27BF54F25500E5F* _PositionTransit; // 0x138
		::UnityEngine::AnimationCurve* _PositionTransitCurve; // 0x140
		::UnityEngine::Vector3 _CurrentPosition; // 0x148
		::UnityEngine::Vector3 _TargetPosition; // 0x154

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetupItem(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETUPITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetTexture(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SETTEXTURE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADMESH_OFFSET))(this);
		}

		::System::Void _LoadOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADOUTLINE_OFFSET))(this);
		}

		::System::Void _InitOutlineShadowOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__INITOUTLINESHADOWOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 _CalCurrentOutlineOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALCURRENTOUTLINEOFFSET_OFFSET))(this);
		}

		::System::Void _ShowOutlineShadow(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SHOWOUTLINESHADOW_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadHintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADHINTMESH_OFFSET))(this);
		}

		::System::Void _LoadColliderMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADCOLLIDERMESH_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECTUP_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDragBegin(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAGBEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrag(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemData(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETITEMDATA_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETANIMATORACTIVE_OFFSET))(this, a1);
		}

		::System::Void TriggerOutlineFadePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGEROUTLINEFADEPERFORM_OFFSET))(this);
		}

		::System::Void TriggerSuccessPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERSUCCESSPERFORM_OFFSET))(this);
		}

		::System::Void TriggerFadeoutPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERFADEOUTPERFORM_OFFSET))(this);
		}

		::System::Void ClearAnimatorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_CLEARANIMATORSTATE_OFFSET))(this);
		}

		::System::Void SetState(::RPG::Client::Prop::JigsawItemState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetDarkState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDARKSTATE_OFFSET))(this, a1);
		}

		::System::Void SetEmptyState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETEMPTYSTATE_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetDissolveCenter(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVECENTER_OFFSET))(this, a1, a2);
		}

		::System::Void SetDissolveRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVERATE_OFFSET))(this, a1);
		}

		::System::Void SetOutlineOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINEOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINECOLOR_OFFSET))(this, a1);
		}

		::System::Void HideOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_HIDEOUTLINE_OFFSET))(this, a1);
		}

		::System::Void SetColorMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETCOLORMASK_OFFSET))(this, a1);
		}

		::System::Void SetDirection(::RPG::Client::Prop::JigsawItemDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDIRECTION_OFFSET))(this, a1);
		}

		::System::Void RotateWithAnimation(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ROTATEWITHANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartRotateAnimation(::UnityEngine::Quaternion a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTROTATEANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartScaleAnimation(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTSCALEANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartMoveToAnimation(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTMOVETOANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ISINANIMATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion _ItemDir2LocalRotation(::RPG::Client::Prop::JigsawItemDirection a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _ItemDir2LocalOffset(::RPG::Client::Prop::JigsawItemDirection a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void _CalTexScaleAndOffset(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALTEXSCALEANDOFFSET_OFFSET))(this, a1, a2);
		}
	};
}

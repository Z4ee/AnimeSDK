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

#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_CLEARANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0xA0B38E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0B1740)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xA0BC1B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA0B8060)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ISINANIMATION_OFFSET UNITYSDK_OFFSET(0xA0B97F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xA0BF4B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA0BF6A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xA0B4BB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA0B6600)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xA0BF470)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0BF430)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ROTATEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xA0B5E70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA0BF2B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETANIMATORACTIVE_OFFSET UNITYSDK_OFFSET(0xA0B81F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETCOLORMASK_OFFSET UNITYSDK_OFFSET(0xA0BFC10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDARKSTATE_OFFSET UNITYSDK_OFFSET(0xA0BF920)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0xA0BF320)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVECENTER_OFFSET UNITYSDK_OFFSET(0xA0BBEF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xA0BC400)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0xA0BFA60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0xA0BF8D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xA0BEC90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xA0BC960)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA0B2CD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETUPITEM_OFFSET UNITYSDK_OFFSET(0xA0B7E80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTMOVETOANIMATION_OFFSET UNITYSDK_OFFSET(0xA0B7440)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTROTATEANIMATION_OFFSET UNITYSDK_OFFSET(0xA0BFDB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTSCALEANIMATION_OFFSET UNITYSDK_OFFSET(0xA0B9610)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0xA0B2080)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xA0BAFB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGEROUTLINEFADEPERFORM_OFFSET UNITYSDK_OFFSET(0xA0BCAC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TRIGGERSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0xA0BDB80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALCURRENTOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xA0BEDB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALTEXSCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0xA0BEC10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C00F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__INITOUTLINESHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xA0BED30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xA0BFFF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALROTATION_OFFSET UNITYSDK_OFFSET(0xA0BFCA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADCOLLIDERMESH_OFFSET UNITYSDK_OFFSET(0xA0BF0B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADHINTMESH_OFFSET UNITYSDK_OFFSET(0xA0BE5E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADMESH_OFFSET UNITYSDK_OFFSET(0xA0BDFA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADOUTLINE_OFFSET UNITYSDK_OFFSET(0xA0BE1B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA0BDC30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SHOWOUTLINESHADOW_OFFSET UNITYSDK_OFFSET(0xA0BEF50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C01B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA0C0160)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xA0C0280)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA0C0310)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xA0C0230)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA0C0220)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xA0C0210)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0C0200)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleItem_TypeDefinitionIndex = 64108;

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

		::System::Void SetupItem(::UnityEngine::Texture2D* tex, ::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETUPITEM_OFFSET))(this, tex, w, h);
		}

		::System::Void _SetTexture(::UnityEngine::Texture2D* tex, ::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SETTEXTURE_OFFSET))(this, tex, w, h);
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

		::System::Void _ShowOutlineShadow(::System::Boolean isShow, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__SHOWOUTLINESHADOW_OFFSET))(this, isShow, duration);
		}

		::System::Void _LoadHintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADHINTMESH_OFFSET))(this);
		}

		::System::Void _LoadColliderMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__LOADCOLLIDERMESH_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* board)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_INIT_OFFSET))(this, board);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_TICK_OFFSET))(this, deltaTime);
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

		::System::Void OnHover(::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVER_OFFSET))(this, isJoyStickSelect);
		}

		::System::Void OnHoverExit(::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, isJoyStickSelect);
		}

		::System::Void OnDragBegin(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAGBEGIN_OFFSET))(this, mousePosition, hitPosition);
		}

		::System::Void OnDrag(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ONDRAG_OFFSET))(this, mousePosition, hitPosition);
		}

		::System::Void SetItemData(::RPG::Client::Prop::JigsawItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETITEMDATA_OFFSET))(this, data);
		}

		::System::Void SetAnimatorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETANIMATORACTIVE_OFFSET))(this, isActive);
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

		::System::Void SetState(::RPG::Client::Prop::JigsawItemState state, ::System::Boolean forceReset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETSTATE_OFFSET))(this, state, forceReset);
		}

		::System::Void SetDarkState(::System::Boolean isDark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDARKSTATE_OFFSET))(this, isDark);
		}

		::System::Void SetEmptyState(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETEMPTYSTATE_OFFSET))(this, isEmpty);
		}

		::System::Void SetActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetDissolveCenter(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVECENTER_OFFSET))(this, center, forward);
		}

		::System::Void SetDissolveRate(::System::Single rate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDISSOLVERATE_OFFSET))(this, rate);
		}

		::System::Void SetOutlineOffset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINEOFFSET_OFFSET))(this, offset);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETOUTLINECOLOR_OFFSET))(this, color);
		}

		::System::Void HideOutline(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_HIDEOUTLINE_OFFSET))(this, isHide);
		}

		::System::Void SetColorMask(::System::Int32 colorMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETCOLORMASK_OFFSET))(this, colorMask);
		}

		::System::Void SetDirection(::RPG::Client::Prop::JigsawItemDirection dir)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_SETDIRECTION_OFFSET))(this, dir);
		}

		::System::Void RotateWithAnimation(::UnityEngine::AnimationCurve* curve, ::System::Single duration, ::System::Boolean isClockWise, ::System::Action* OnRotationDone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ROTATEWITHANIMATION_OFFSET))(this, curve, duration, isClockWise, OnRotationDone);
		}

		::System::Void StartRotateAnimation(::UnityEngine::Quaternion targetRotation, ::UnityEngine::AnimationCurve* curve, ::System::Single duration, ::System::Action* OnRotationDone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTROTATEANIMATION_OFFSET))(this, targetRotation, curve, duration, OnRotationDone);
		}

		::System::Void StartScaleAnimation(::UnityEngine::AnimationCurve* curve, ::System::Single scaleSize, ::System::Single duration, ::System::Action* OnScaleDone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTSCALEANIMATION_OFFSET))(this, curve, scaleSize, duration, OnScaleDone);
		}

		::System::Void StartMoveToAnimation(::UnityEngine::Vector3 targetPosition, ::System::Single duration, ::System::Action* OnMoveToDone, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_STARTMOVETOANIMATION_OFFSET))(this, targetPosition, duration, OnMoveToDone, curve);
		}

		::System::Boolean IsInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM_ISINANIMATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion _ItemDir2LocalRotation(::RPG::Client::Prop::JigsawItemDirection dir)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALROTATION_OFFSET))(this, dir);
		}

		::UnityEngine::Vector3 _ItemDir2LocalOffset(::RPG::Client::Prop::JigsawItemDirection dir, ::UnityEngine::Vector3 localOffset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::JigsawItemDirection, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__ITEMDIR2LOCALOFFSET_OFFSET))(this, dir, localOffset);
		}

		::System::Void _CalTexScaleAndOffset(::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM__CALTEXSCALEANDOFFSET_OFFSET))(this, w, h);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::Client::Prop::PuzzleBoardBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHover(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnHoverExit(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDragBegin(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONDRAGBEGIN_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0, P1);
		}
	};
}

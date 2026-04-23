#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/OracleItemColor.h"
#include "unitysdk/RPG/Client/Prop/OracleItemState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE80320)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETCENTERLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xAE81080)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETRASTERSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0xAE81140)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETWORLDSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0xAE81450)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ISPINNED_OFFSET UNITYSDK_OFFSET(0xAE81960)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_METHOD_6_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0xAE80CD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_MOVETOPINNEDPOS_OFFSET UNITYSDK_OFFSET(0xAE819A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_MOVETOTARGETPOSPERFORM_OFFSET UNITYSDK_OFFSET(0xAE81A80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xAE804E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONDRAG_OFFSET UNITYSDK_OFFSET(0xAE806C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAE80490)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAE80440)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xAE80400)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAE803C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0xAE80C80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETDITHERALPHAWITHANIM_OFFSET UNITYSDK_OFFSET(0xAE81C40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xAE801B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0xAE81030)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_STARTMOVETOANIMATION_OFFSET UNITYSDK_OFFSET(0xAE817B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0xAE7FE20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAE81F20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE81F70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xAE82080)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xAE82110)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAE82010)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAE82000)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xAE81FF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAE81FE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleItem_TypeDefinitionIndex = 72228;

	class OraclePuzzleItem : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::System::Int32 InitX; // 0x28
		::System::Int32 InitY; // 0x2C
		::System::Boolean IsInteractable; // 0x30
		::System::Nullable_1<::UnityEngine::Vector3> PinLocalPosition; // 0x34
		::UnityEngine::Vector3 TargetLocalPosition; // 0x44
		::UnityEngine::Vector3 Field_6_5; // 0x50
		::RPG::Client::Prop::OracleItemState ItemState; // 0x5C
		::System::Int32 ID; // 0x60
		::RPG::Client::Prop::OracleItemColor Color; // 0x64
		::Il2CppArray<::UnityEngine::Vector2Int>* RasterPoints; // 0x68
		::RPG::Client::Prop::OraclePuzzlePanel* Field_6_10; // 0x70
		::UnityEngine::MeshFilter* _MeshFilter; // 0x78
		::UnityEngine::MeshCollider* MeshCollider; // 0x80
		::UnityEngine::Renderer* _Renderer; // 0x88
		::Il2CppArray<::UnityEngine::Vector2>* _DynamicVerticesCopy; // 0x90
		::UnityEngine::Vector3 Field_6_15; // 0x98
		::UnityEngine::Vector3 Field_6_16; // 0xA4
		::Class_1_D27BF54F25500E5F* Field_6_17; // 0xB0
		::Class_1_D27BF54F25500E5F* Field_6_18; // 0xB8
		::UnityEngine::MaterialPropertyBlock* Field_6_19; // 0xC0
		::System::Action* Field_6_20; // 0xC8
		::System::Action* Field_6_21; // 0xD0
		::System::Single Field_6_22; // 0xD8
		::UnityEngine::Vector3 Field_6_23; // 0xDC
		::UnityEngine::Vector3 Field_6_24; // 0xE8
		::UnityEngine::AnimationCurve* Field_6_25; // 0xF8
		::Il2CppArray<::UnityEngine::Vector2>* Field_6_26; // 0x100
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_27; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONSELECTUP_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDragBegin(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONDRAGBEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrag(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshItem(::RPG::Client::Prop::OraclePuzzlePanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzlePanel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_REFRESHITEM_OFFSET))(this, a1);
		}

		::System::Void SetState(::RPG::Client::Prop::OracleItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OracleItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETCENTERLOCALPOSITION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetRasterSpaceVertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETRASTERSPACEVERTICES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetWorldSpaceVertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_GETWORLDSPACEVERTICES_OFFSET))(this);
		}

		::System::Void StartMoveToAnimation(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_STARTMOVETOANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsPinned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_ISPINNED_OFFSET))(this);
		}

		::System::Void MoveToPinnedPos(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_MOVETOPINNEDPOS_OFFSET))(this, a1);
		}

		::System::Void MoveToTargetPosPerform(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_MOVETOTARGETPOSPERFORM_OFFSET))(this, a1);
		}

		::System::Void SetDitherAlphaWithAnim(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETDITHERALPHAWITHANIM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void Method_6_8923446497E3D0C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM_METHOD_6_8923446497E3D0C5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHover(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnHoverExit(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDragBegin(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONDRAGBEGIN_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0, P1);
		}
	};
}

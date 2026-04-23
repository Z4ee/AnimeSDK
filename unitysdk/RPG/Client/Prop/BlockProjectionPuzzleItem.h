#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockProjectionBlockItemState.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD92930)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xAD92860)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISDEFAULTFILLED_OFFSET UNITYSDK_OFFSET(0xAD909B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISFILLED_OFFSET UNITYSDK_OFFSET(0xAD92A20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAD8B0F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAD8B3B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xAD929E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAD929A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKFILLED_OFFSET UNITYSDK_OFFSET(0xAD91600)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKPREVIEW_OFFSET UNITYSDK_OFFSET(0xAD90DC0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0xAD90A10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0xAD928D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAD92A70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD92AF0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAD92A80)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xAD92B90)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET UNITYSDK_OFFSET(0xAD92B80)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0xAD92B70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAD92B60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleItem_TypeDefinitionIndex = 71709;

	class BlockProjectionPuzzleItem : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::System::Int32 z; // 0x28
		::RPG::Client::Prop::BlockProjectionBlockItemState ItemState; // 0x2C
		::System::Boolean IsNewBlock; // 0x30
		::UnityEngine::Transform* _AvailiableBlock; // 0x38
		::UnityEngine::Transform* _NormalBlock; // 0x40
		::UnityEngine::Transform* _NormalNewBlock; // 0x48
		::UnityEngine::Renderer* _HoverRender; // 0x50
		::UnityEngine::MeshFilter* _HoverMeshFilter; // 0x58
		::UnityEngine::Mesh* _HoverMesh; // 0x60
		::UnityEngine::Mesh* _HoverMeshPreview; // 0x68
		::UnityEngine::Material* _HoverMat; // 0x70
		::System::Boolean Field_6_11; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECTUP_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Boolean IsFilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISFILLED_OFFSET))(this);
		}

		::System::Boolean IsDefaultFilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISDEFAULTFILLED_OFFSET))(this);
		}

		::System::Void SetState(::RPG::Client::Prop::BlockProjectionBlockItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionBlockItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void SetBlockPreview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKPREVIEW_OFFSET))(this, a1);
		}

		::System::Void SetBlockFilled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKFILLED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::Client::Prop::PuzzleBoardBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONSELECTUP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHover(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnHoverExit(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM___IFIXBASEPROXY_ONHOVEREXIT_OFFSET))(this, P0);
		}
	};
}

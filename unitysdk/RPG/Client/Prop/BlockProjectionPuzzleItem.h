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

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DEC770)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x16DEC6A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISDEFAULTFILLED_OFFSET UNITYSDK_OFFSET(0x16DEA3D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ISFILLED_OFFSET UNITYSDK_OFFSET(0x16DEC860)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x16DE4440)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0x16DE46F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0x16DEC820)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0x16DEC7E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKFILLED_OFFSET UNITYSDK_OFFSET(0x16DEAF60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETBLOCKPREVIEW_OFFSET UNITYSDK_OFFSET(0x16DEA7E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0x16DEA430)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0x16DEC710)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEC8B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleItem_TypeDefinitionIndex = 74256;

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
	};
}

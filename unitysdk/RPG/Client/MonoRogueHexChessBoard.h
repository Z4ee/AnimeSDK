#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::Client { class MonoRogueHexChessBoardItem; }
namespace RPG::Client { class MonoRogueHexChessBoard_ItemPool; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_CLEARCELLGAMEOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0xC141CB0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_GETMONOITEMLIST_OFFSET UNITYSDK_OFFSET(0xC142CB0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_INITCHESTBOARDITEM_OFFSET UNITYSDK_OFFSET(0xC141F40)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1419C0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xC142CF0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0xC142E90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC141030)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ADDSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0xC141D40)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CHANGEGAMEOBJECTLAYER_OFFSET UNITYSDK_OFFSET(0xC142A80)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CLEARSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0xC141C20)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC1434D0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ENDGETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC142B90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC142910)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_1_OFFSET UNITYSDK_OFFSET(0xC142FC0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_OFFSET UNITYSDK_OFFSET(0xC1429B0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETPREFABINDEX_OFFSET UNITYSDK_OFFSET(0xC142870)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xC141970)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__STARTGETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC142560)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xC1417C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRogueHexChessBoard_TypeDefinitionIndex = 64475;

	class MonoRogueHexChessBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* _Pointer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _UIRaycastResult; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoardItem*>* _SelectableItems; // 0x28
		::System::Boolean _NeedTickFadeIn; // 0x30
		::UnityEngine::Vector2 StartHexDoubleWidthCoord; // 0x34
		::UnityEngine::Vector2 StartPostion; // 0x3C
		::UnityEngine::Vector2 Spacing; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CellPrefabList; // 0x50
		::UnityEngine::Vector2 CellSize; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoard_ItemPool*>* _CellItemPools; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClearSelectableItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CLEARSELECTABLEITEM_OFFSET))(this);
		}

		::System::Void _AddSelectableItem(::RPG::Client::MonoRogueHexChessBoardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ADDSELECTABLEITEM_OFFSET))(this, a1);
		}

		::System::Void _OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__TICKFADEIN_OFFSET))(this);
		}

		::System::Void InitChestBoardItem(::RPG::Client::ChessRogueBoardDataItem* a1, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*>* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardDataItem*, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_INITCHESTBOARDITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoardItem*>* GetMonoItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_GETMONOITEMLIST_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_PLAYFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshPosition(::UnityEngine::RectTransform* a1, ::RPG::Client::ChessRogueBoardCellDataItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_REFRESHPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 _GetCellPostion(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetCellPostion_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetPrefabIndex(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETPREFABINDEX_OFFSET))(this, a1);
		}

		::System::Void _StartGetCellGameobject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__STARTGETCELLGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetCellGameObject(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void _EndGetCellGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ENDGETCELLGAMEOBJECT_OFFSET))(this);
		}

		::System::Void ClearCellGameObjectPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_CLEARCELLGAMEOBJECTPOOL_OFFSET))(this);
		}

		::System::Void _ChangeGameObjectLayer(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CHANGEGAMEOBJECTLAYER_OFFSET))(this, a1);
		}
	};
}

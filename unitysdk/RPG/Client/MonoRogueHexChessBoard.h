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

#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_CLEARCELLGAMEOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x9D30E00)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_GETMONOITEMLIST_OFFSET UNITYSDK_OFFSET(0x9D31B70)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_INITCHESTBOARDITEM_OFFSET UNITYSDK_OFFSET(0x9D30F90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D30B70)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x9D31BB0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0x9D31D70)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D30010)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ADDSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0x9D30E70)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CHANGEGAMEOBJECTLAYER_OFFSET UNITYSDK_OFFSET(0x9D31920)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CLEARSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0x9D30D90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9D32270)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ENDGETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D31A30)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D317A0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_1_OFFSET UNITYSDK_OFFSET(0x9D31DF0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_OFFSET UNITYSDK_OFFSET(0x9D31850)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETPREFABINDEX_OFFSET UNITYSDK_OFFSET(0x9D31700)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x9D30B20)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__STARTGETCELLGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D31430)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x9D30960)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRogueHexChessBoard_TypeDefinitionIndex = 56312;

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

		::System::Void _AddSelectableItem(::RPG::Client::MonoRogueHexChessBoardItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ADDSELECTABLEITEM_OFFSET))(this, item);
		}

		::System::Void _OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__TICKFADEIN_OFFSET))(this);
		}

		::System::Void InitChestBoardItem(::RPG::Client::ChessRogueBoardDataItem* boardDataItem, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*>* onItemSetupView, ::XLua::LuaTable* self)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardDataItem*, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_INITCHESTBOARDITEM_OFFSET))(this, boardDataItem, onItemSetupView, self);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoardItem*>* GetMonoItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoRogueHexChessBoardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_GETMONOITEMLIST_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::UInt32 startPosX, ::System::Single timeOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_PLAYFADEIN_OFFSET))(this, startPosX, timeOffset);
		}

		::System::Void RefreshPosition(::UnityEngine::RectTransform* transform, ::RPG::Client::ChessRogueBoardCellDataItem* boardCellDataItem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_REFRESHPOSITION_OFFSET))(this, transform, boardCellDataItem);
		}

		::UnityEngine::Vector2 _GetCellPostion(::RPG::Client::ChessRogueBoardCellDataItem* boardCellDataItem)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_OFFSET))(this, boardCellDataItem);
		}

		::UnityEngine::Vector2 _GetCellPostion_1(::System::UInt32 x, ::System::UInt32 y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLPOSTION_1_OFFSET))(this, x, y);
		}

		::System::Int32 _GetPrefabIndex(::RPG::Client::ChessRogueBoardCellDataItem* boardCellDataItem)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETPREFABINDEX_OFFSET))(this, boardCellDataItem);
		}

		::System::Void _StartGetCellGameobject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__STARTGETCELLGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetCellGameObject(::System::Int32 prefabIndex, ::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__GETCELLGAMEOBJECT_OFFSET))(this, prefabIndex, parentTransform);
		}

		::System::Void _EndGetCellGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__ENDGETCELLGAMEOBJECT_OFFSET))(this);
		}

		::System::Void ClearCellGameObjectPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_CLEARCELLGAMEOBJECTPOOL_OFFSET))(this);
		}

		::System::Void _ChangeGameObjectLayer(::UnityEngine::Transform* cellTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD__CHANGEGAMEOBJECTLAYER_OFFSET))(this, cellTransform);
		}
	};
}

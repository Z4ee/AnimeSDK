#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BADE65034284623D;
namespace RPG::Client { class UIBubbleItem; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIBUBBLEMANAGER_DESPAWNBUBBLE_OFFSET UNITYSDK_OFFSET(0xA677D90)
#define RPG_CLIENT_UIBUBBLEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA677EA0)
#define RPG_CLIENT_UIBUBBLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA678170)
#define RPG_CLIENT_UIBUBBLEMANAGER_SHOWBUBBLE_1_OFFSET UNITYSDK_OFFSET(0xA6782F0)
#define RPG_CLIENT_UIBUBBLEMANAGER_SHOWBUBBLE_OFFSET UNITYSDK_OFFSET(0xA6781C0)
#define RPG_CLIENT_UIBUBBLEMANAGER_SPAWNBUBBLE_1_OFFSET UNITYSDK_OFFSET(0xA6784C0)
#define RPG_CLIENT_UIBUBBLEMANAGER_SPAWNBUBBLE_OFFSET UNITYSDK_OFFSET(0xA6783A0)
#define RPG_CLIENT_UIBUBBLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0xA677F50)
#define RPG_CLIENT_UIBUBBLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA678690)
#define RPG_CLIENT_UIBUBBLEMANAGER__ONSHOWBUBBLE_OFFSET UNITYSDK_OFFSET(0xA678210)

namespace RPG::Client
{
	inline static constexpr unsigned int UIBubbleManager_TypeDefinitionIndex = 56308;

	class UIBubbleManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UIBubbleItem*>* _ShownBubbleList; // 0x18
		::System::Func_3<::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*, ::RPG::Client::UIBubbleItem*>* _OnNewBubbleSpawned; // 0x20
		::System::Collections::Generic::List_1<::Class_1_BADE65034284623D*>* _BubblePoolList; // 0x28
		::XLua::LuaTable* _LuaTable; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* _BubblePrefabList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Func_3<::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*, ::RPG::Client::UIBubbleItem*>* callback, ::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*, ::RPG::Client::UIBubbleItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_INIT_OFFSET))(this, callback, luaTable);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_SHOWBUBBLE_OFFSET))(this);
		}

		::RPG::Client::UIBubbleItem* ShowBubble_1(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_SHOWBUBBLE_1_OFFSET))(this, prefabIndex);
		}

		::System::Void _OnShowBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER__ONSHOWBUBBLE_OFFSET))(this);
		}

		::RPG::Client::UIBubbleItem* SpawnBubble(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_SPAWNBUBBLE_OFFSET))(this, prefabIndex);
		}

		::RPG::Client::UIBubbleItem* SpawnBubble_1(::RPG::Client::WeakAssetReference weakAsset)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::RPG::Client::WeakAssetReference))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_SPAWNBUBBLE_1_OFFSET))(this, weakAsset);
		}

		::System::Void DespawnBubble(::RPG::Client::UIBubbleItem* item, ::Class_1_BADE65034284623D* pool)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIBubbleItem*, ::Class_1_BADE65034284623D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEMANAGER_DESPAWNBUBBLE_OFFSET))(this, item, pool);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1143;
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { template <typename T> class NewsTickerItemPool_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_NEWSTICKER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD9D2490)
#define RPG_CLIENT_NEWSTICKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD9D26C0)
#define RPG_CLIENT_NEWSTICKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD9D25F0)
#define RPG_CLIENT_NEWSTICKER_PAUSE_OFFSET UNITYSDK_OFFSET(0xD9D3C50)
#define RPG_CLIENT_NEWSTICKER_PLAY_OFFSET UNITYSDK_OFFSET(0xD9D3AA0)
#define RPG_CLIENT_NEWSTICKER_SETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD9D3780)
#define RPG_CLIENT_NEWSTICKER_SETSETUPITEMCALLBACK_1_OFFSET UNITYSDK_OFFSET(0xD9D3690)
#define RPG_CLIENT_NEWSTICKER_SETSETUPITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xD9D3640)
#define RPG_CLIENT_NEWSTICKER_STOP_OFFSET UNITYSDK_OFFSET(0xD9D3B70)
#define RPG_CLIENT_NEWSTICKER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD9D2780)
#define RPG_CLIENT_NEWSTICKER__CANTICKITEMS_OFFSET UNITYSDK_OFFSET(0xD9D28D0)
#define RPG_CLIENT_NEWSTICKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD9D3DE0)
#define RPG_CLIENT_NEWSTICKER__ENSUREINIT_OFFSET UNITYSDK_OFFSET(0xD9D2550)
#define RPG_CLIENT_NEWSTICKER__ENSUREITEMPOOL_OFFSET UNITYSDK_OFFSET(0xD9D3D20)
#define RPG_CLIENT_NEWSTICKER__ONMOVEDIRECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD9D2960)
#define RPG_CLIENT_NEWSTICKER__RECYCLEALLITEMS_OFFSET UNITYSDK_OFFSET(0xD9D3870)
#define RPG_CLIENT_NEWSTICKER__TICKCREATENEWITEMS_OFFSET UNITYSDK_OFFSET(0xD9D3000)
#define RPG_CLIENT_NEWSTICKER__TICKMOVEITEMS_OFFSET UNITYSDK_OFFSET(0xD9D29E0)
#define RPG_CLIENT_NEWSTICKER__TICKRECYCLEITEMS_OFFSET UNITYSDK_OFFSET(0xD9D2CF0)
#define RPG_CLIENT_NEWSTICKER__TRYBUILDITEMSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xD9D39F0)

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTicker_TypeDefinitionIndex = 68992;

	class NewsTicker : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 _LoopCountLimit = 0x1F4; // 0x0
		// static const ::System::UInt32 _ItemCountLimit = 0x1F4; // 0x0
		::RPG::Client::NewsTicker_MoveDirectionType MoveDirection; // 0x18
		::System::Single ItemSpacing; // 0x1C
		::UnityEngine::GameObject* ItemPrefab; // 0x20
		::System::Single MoveSpeed; // 0x28
		::System::Single StartOffset; // 0x2C
		::System::Boolean IsPlayOnAwake; // 0x30
		::UnityEngine::RectTransform* _RectTrans; // 0x38
		::UnityEngine::GameObject* _GameObject; // 0x40
		::System::Boolean _IsInited; // 0x48
		::System::Boolean _IsDestroyed; // 0x49
		::System::Action_2<::RPG::Client::NewsTickerItem*, ::System::UInt32>* _SetupItemCallback; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::NewsTickerItem*>* _ShownItems; // 0x58
		::RPG::Client::NewsTickerItemPool_1<::RPG::Client::NewsTickerItem*>* _ItemPool; // 0x60
		::System::UInt32 _ItemCount; // 0x68
		::System::Boolean _IsPlaying; // 0x6C
		::RPG::Client::NewsTicker_MoveDirectionType _MoveDirLastFrame; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::NewsTickerItem*>* _TempItems; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_UPDATE_OFFSET))(this);
		}

		::System::Void SetSetupItemCallback(::System::Action_2<::RPG::Client::NewsTickerItem*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::NewsTickerItem*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_SETSETUPITEMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetSetupItemCallback_1(::System::Action_3<::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_SETSETUPITEMCALLBACK_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_SETITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER_PAUSE_OFFSET))(this);
		}

		::System::Boolean _EnsureInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__ENSUREINIT_OFFSET))(this);
		}

		::System::Void _EnsureItemPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__ENSUREITEMPOOL_OFFSET))(this);
		}

		::System::Boolean _CanTickItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__CANTICKITEMS_OFFSET))(this);
		}

		::System::Void _TryBuildItemsImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__TRYBUILDITEMSIMMEDIATE_OFFSET))(this);
		}

		::System::Void _OnMoveDirectionChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__ONMOVEDIRECTIONCHANGED_OFFSET))(this);
		}

		::System::Void _TickMoveItems(::Class_0_16E4307DCC419505_1143* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__TICKMOVEITEMS_OFFSET))(this, a1);
		}

		::System::Void _TickRecycleItems(::Class_0_16E4307DCC419505_1143* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__TICKRECYCLEITEMS_OFFSET))(this, a1);
		}

		::System::Void _TickCreateNewItems(::Class_0_16E4307DCC419505_1143* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__TICKCREATENEWITEMS_OFFSET))(this, a1);
		}

		::System::Void _RecycleAllItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKER__RECYCLEALLITEMS_OFFSET))(this);
		}
	};
}

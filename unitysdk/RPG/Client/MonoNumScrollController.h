#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_FORCEFINISH_OFFSET UNITYSDK_OFFSET(0xA9E7B50)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_GET__ISFIXEDLEN_OFFSET UNITYSDK_OFFSET(0xA9E7630)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xA9E7330)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9E7D90)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0xA9E7970)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERLUAPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9E7CE0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA9E7D40)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA9E7460)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9E68C0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E8060)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__DOPLAY_OFFSET UNITYSDK_OFFSET(0xA9E6C70)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETNUMLEN_OFFSET UNITYSDK_OFFSET(0xA9E75B0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETPLAYINDEX_OFFSET UNITYSDK_OFFSET(0xA9E7DF0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__NOTIFYPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xA9E7280)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xA9E7FF0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONNEWITEM_OFFSET UNITYSDK_OFFSET(0xA9E7F10)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__SETVALUE_OFFSET UNITYSDK_OFFSET(0xA9E7640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNumScrollController_TypeDefinitionIndex = 63610;

	class MonoNumScrollController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single StartWaitTime; // 0x18
		::System::Single DeltaTime; // 0x1C
		::System::UInt32 ExtraScrollTimes; // 0x20
		::System::String* AudioEventName; // 0x28
		::RPG::Client::StaticListView* _NumListView; // 0x30
		::System::Int32 _TotalCount; // 0x38
		::System::Int32 _StartValue; // 0x3C
		::System::Int32 _EndValue; // 0x40
		::System::Int32 _PlayCount; // 0x44
		::System::Boolean _IsPlaying; // 0x48
		::System::Single _TotalTime; // 0x4C
		::System::Single _PlayingTime; // 0x50
		::System::Single _LastProgress; // 0x54
		::System::Action* _OnPlayEnd; // 0x58
		::System::Action_1<::System::Single>* _OnProgressChanged; // 0x60
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _OnProgressChangedLuaCallback; // 0x68
		::XLua::LuaTable* _LuaSelf; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_INIT_OFFSET))(this, count);
		}

		::System::Void SetValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_SETVALUE_OFFSET))(this, value);
		}

		::System::Void Play(::System::Int32 startValue, ::System::Int32 endValue, ::System::Action* onPlayEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_PLAY_OFFSET))(this, startValue, endValue, onPlayEnd);
		}

		::System::Void ForceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_FORCEFINISH_OFFSET))(this);
		}

		::System::Void RegisterLuaProgressCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* callback, ::XLua::LuaTable* luaSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERLUAPROGRESSCALLBACK_OFFSET))(this, callback, luaSelf);
		}

		::System::Void RegisterProgressCallback(::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERPROGRESSCALLBACK_OFFSET))(this, callback);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 _GetPlayIndex(::System::Int32 startValue, ::System::Int32 endValue, ::System::Int32 total)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETPLAYINDEX_OFFSET))(this, startValue, endValue, total);
		}

		::System::Void _DoPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__DOPLAY_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewItem(::XLua::LuaTable* table, ::RPG::Client::StaticListView* listView, ::System::Int32 index)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONNEWITEM_OFFSET))(this, table, listView, index);
		}

		::System::Void _SetValue(::System::Int32 value, ::System::Int32 totalLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__SETVALUE_OFFSET))(this, value, totalLen);
		}

		::System::Int32 _GetNumLen(::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETNUMLEN_OFFSET))(this, value);
		}

		::System::Void _OnItemPlayFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONITEMPLAYFINISHED_OFFSET))(this);
		}

		::System::Void _NotifyProgressChanged(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__NOTIFYPROGRESSCHANGED_OFFSET))(this, progress);
		}

		::System::Boolean get__IsFixedLen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_GET__ISFIXEDLEN_OFFSET))(this);
		}
	};
}

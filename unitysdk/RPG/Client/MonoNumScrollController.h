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

#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_FORCEFINISH_OFFSET UNITYSDK_OFFSET(0x1ACFE0D0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_GET__ISFIXEDLEN_OFFSET UNITYSDK_OFFSET(0x1ACFDC00)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1ACFD8F0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACFE330)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x1ACFDED0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERLUAPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACFE280)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACFE2E0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1ACFDA30)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACFCDA0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFE680)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__DOPLAY_OFFSET UNITYSDK_OFFSET(0x1ACFD200)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETNUMLEN_OFFSET UNITYSDK_OFFSET(0x1ACFDB80)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1ACFE390)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__NOTIFYPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1ACFD830)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0x1ACFE610)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONNEWITEM_OFFSET UNITYSDK_OFFSET(0x1ACFE4B0)
#define RPG_CLIENT_MONONUMSCROLLCONTROLLER__SETVALUE_OFFSET UNITYSDK_OFFSET(0x1ACFDC10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNumScrollController_TypeDefinitionIndex = 68969;

	class MonoNumScrollController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single StartWaitTime; // 0x18
		::System::Single DeltaTime; // 0x1C
		::System::UInt32 ExtraScrollTimes; // 0x20
		::System::String* AudioEventName; // 0x28
		::RPG::Client::StaticListView* _NumListView; // 0x30
		::System::Int32 _TotalCount; // 0x38
		::System::UInt64 _StartValue; // 0x40
		::System::UInt64 _EndValue; // 0x48
		::System::Int32 _PlayCount; // 0x50
		::System::Boolean _IsPlaying; // 0x54
		::System::Single _TotalTime; // 0x58
		::System::Single _PlayingTime; // 0x5C
		::System::Single _LastProgress; // 0x60
		::System::Action* _OnPlayEnd; // 0x68
		::System::Action_1<::System::Single>* _OnProgressChanged; // 0x70
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _OnProgressChangedLuaCallback; // 0x78
		::XLua::LuaTable* _LuaSelf; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void Play(::System::UInt64 a1, ::System::UInt64 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_FORCEFINISH_OFFSET))(this);
		}

		::System::Void RegisterLuaProgressCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERLUAPROGRESSCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterProgressCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_REGISTERPROGRESSCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 _GetPlayIndex(::System::UInt64 a1, ::System::UInt64 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETPLAYINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__DOPLAY_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONNEWITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetValue(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetNumLen(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__GETNUMLEN_OFFSET))(this, a1);
		}

		::System::Void _OnItemPlayFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__ONITEMPLAYFINISHED_OFFSET))(this);
		}

		::System::Void _NotifyProgressChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER__NOTIFYPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get__IsFixedLen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONUMSCROLLCONTROLLER_GET__ISFIXEDLEN_OFFSET))(this);
		}
	};
}

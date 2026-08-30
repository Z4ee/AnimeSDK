#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_RANDOMLOOPBYFRAME_DOTICK_OFFSET UNITYSDK_OFFSET(0x1B644D20)
#define RPG_CLIENT_RANDOMLOOPBYFRAME_INIT_OFFSET UNITYSDK_OFFSET(0x1B644BA0)
#define RPG_CLIENT_RANDOMLOOPBYFRAME_SETPLAYEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1B644CE0)
#define RPG_CLIENT_RANDOMLOOPBYFRAME_SETRANDOMTEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B644BF0)
#define RPG_CLIENT_RANDOMLOOPBYFRAME_TRYSTARTPERFORM_OFFSET UNITYSDK_OFFSET(0x1B644A90)
#define RPG_CLIENT_RANDOMLOOPBYFRAME_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B645340)
#define RPG_CLIENT_RANDOMLOOPBYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B645390)
#define RPG_CLIENT_RANDOMLOOPBYFRAME__GETCURTARGETTIME_OFFSET UNITYSDK_OFFSET(0x1B6452C0)
#define RPG_CLIENT_RANDOMLOOPBYFRAME__PERFORMRANDOMLOOP_OFFSET UNITYSDK_OFFSET(0x1B644FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomLoopByFrame_TypeDefinitionIndex = 72563;

	class RandomLoopByFrame : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* TextCmpt; // 0x18
		::System::Int32 RandomListLength; // 0x20
		::System::Int32 RefreshSpeedInFrame; // 0x24
		::System::Int32 RefreshMaxCount; // 0x28
		::UnityEngine::UI::Image* BgImage; // 0x30
		::System::Single RefreshRateByTime; // 0x38
		::System::Single RefreshRateEndByTime; // 0x3C
		::System::UInt32 DecelarateIndex; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _RandomIDList; // 0x48
		::System::Single _CurTime; // 0x50
		::XLua::LuaTable* _CbkOwner; // 0x58
		::System::Action_1<::XLua::LuaTable*>* _OnLoopFinish; // 0x60
		::System::Boolean _ShouldTick; // 0x68
		::System::Int32 _RefreshedTime; // 0x6C
		::RPG::Client::TextID _FinalTextID; // 0x70
		::System::Single _TargetTime; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME__CTOR_OFFSET))(this);
		}

		::System::Void TryStartPerform(::XLua::LuaTable* a1, ::System::Action_1<::XLua::LuaTable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_TRYSTARTPERFORM_OFFSET))(this, a1, a2);
		}

		::System::Void SetRandomTextIDList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_SETRANDOMTEXTIDLIST_OFFSET))(this, a1, a2);
		}

		::System::Void SetPlayedStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_SETPLAYEDSTATUS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_INIT_OFFSET))(this);
		}

		::System::Void DoTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_DOTICK_OFFSET))(this);
		}

		::System::Void _PerformRandomLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME__PERFORMRANDOMLOOP_OFFSET))(this);
		}

		::System::Void _GetCurTargetTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME__GETCURTARGETTIME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMLOOPBYFRAME_UPDATE_OFFSET))(this);
		}
	};
}

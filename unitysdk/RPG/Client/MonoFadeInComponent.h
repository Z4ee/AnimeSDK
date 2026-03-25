#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOFADEINCOMPONENT_DOTICK_OFFSET UNITYSDK_OFFSET(0x9CFF410)
#define RPG_CLIENT_MONOFADEINCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x9CFF5C0)
#define RPG_CLIENT_MONOFADEINCOMPONENT_PERFORMFADEIN_OFFSET UNITYSDK_OFFSET(0x9CFF7D0)
#define RPG_CLIENT_MONOFADEINCOMPONENT_SETPLAYEDSTATUS_OFFSET UNITYSDK_OFFSET(0x9CFF610)
#define RPG_CLIENT_MONOFADEINCOMPONENT_TRYSTARTPERFORM_OFFSET UNITYSDK_OFFSET(0x9CFF520)
#define RPG_CLIENT_MONOFADEINCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CFF3C0)
#define RPG_CLIENT_MONOFADEINCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFF860)
#define RPG_CLIENT_MONOFADEINCOMPONENT__SETALPHA_OFFSET UNITYSDK_OFFSET(0x9CFF660)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFadeInComponent_TypeDefinitionIndex = 59477;

	class MonoFadeInComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaTable* _CbkOwner; // 0x18
		::System::Action_1<::XLua::LuaTable*>* _OnFadeInFinish; // 0x20
		::System::Boolean _ShouldTick; // 0x28
		::System::Single _TickedTime; // 0x2C
		::System::Single _CurrentAlpha; // 0x30
		::System::Single FadeInTime; // 0x34
		::System::Single FinalAlpha; // 0x38
		::System::Single StartAlpha; // 0x3C
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* CanvasGroups; // 0x40
		::System::Single PlayedAlpha; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void TryStartPerform(::XLua::LuaTable* cbkOwner, ::System::Action_1<::XLua::LuaTable*>* cbk)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_TRYSTARTPERFORM_OFFSET))(this, cbkOwner, cbk);
		}

		::System::Void SetPlayedStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_SETPLAYEDSTATUS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_INIT_OFFSET))(this);
		}

		::System::Void DoTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_DOTICK_OFFSET))(this);
		}

		::System::Void PerformFadeIn(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_PERFORMFADEIN_OFFSET))(this, time);
		}

		::System::Void _SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT__SETALPHA_OFFSET))(this, alpha);
		}
	};
}

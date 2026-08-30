#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOFADEINCOMPONENT_DOTICK_OFFSET UNITYSDK_OFFSET(0x1ACD7610)
#define RPG_CLIENT_MONOFADEINCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x1ACD77C0)
#define RPG_CLIENT_MONOFADEINCOMPONENT_PERFORMFADEIN_OFFSET UNITYSDK_OFFSET(0x1ACD79C0)
#define RPG_CLIENT_MONOFADEINCOMPONENT_SETPLAYEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1ACD7810)
#define RPG_CLIENT_MONOFADEINCOMPONENT_TRYSTARTPERFORM_OFFSET UNITYSDK_OFFSET(0x1ACD7720)
#define RPG_CLIENT_MONOFADEINCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACD75C0)
#define RPG_CLIENT_MONOFADEINCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD7A50)
#define RPG_CLIENT_MONOFADEINCOMPONENT__SETALPHA_OFFSET UNITYSDK_OFFSET(0x1ACD7860)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFadeInComponent_TypeDefinitionIndex = 72504;

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

		::System::Void TryStartPerform(::XLua::LuaTable* a1, ::System::Action_1<::XLua::LuaTable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_TRYSTARTPERFORM_OFFSET))(this, a1, a2);
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

		::System::Void PerformFadeIn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT_PERFORMFADEIN_OFFSET))(this, a1);
		}

		::System::Void _SetAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFADEINCOMPONENT__SETALPHA_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class SmoothMask; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOSLIDERANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C27E840)
#define RPG_CLIENT_MONOSLIDERANIM_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C27E6E0)
#define RPG_CLIENT_MONOSLIDERANIM_STARTANIM_OFFSET UNITYSDK_OFFSET(0x1C27E5E0)
#define RPG_CLIENT_MONOSLIDERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C27EA10)
#define RPG_CLIENT_MONOSLIDERANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27EB70)
#define RPG_CLIENT_MONOSLIDERANIM__SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C27E740)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSliderAnim_TypeDefinitionIndex = 72531;

	class MonoSliderAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Slider* _Slider; // 0x18
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x20
		::System::Single _from; // 0x28
		::System::Single _to; // 0x2C
		::System::Single _delay; // 0x30
		::System::Single _duration; // 0x34
		::XLua::LuaTable* _LuaTable; // 0x38
		::System::Action_1<::XLua::LuaTable*>* _AnimEndCallback; // 0x40
		::System::Boolean _updating; // 0x48
		::System::Single _startTime; // 0x4C
		::System::Boolean _NeedEasing; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM__CTOR_OFFSET))(this);
		}

		::System::Void StartAnim(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action_1<::XLua::LuaTable*>* a5, ::XLua::LuaTable* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM_STARTANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM_UPDATE_OFFSET))(this);
		}

		::System::Void _SetFillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSLIDERANIM__SETFILLAMOUNT_OFFSET))(this, a1);
		}
	};
}

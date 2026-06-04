#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class PopupMenuProxy_Option; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_POPUPMENUPROXY_HIDE_OFFSET UNITYSDK_OFFSET(0xC4B2E70)
#define RPG_CLIENT_POPUPMENUPROXY_INITDELEGATE_OFFSET UNITYSDK_OFFSET(0xC4B2ED0)
#define RPG_CLIENT_POPUPMENUPROXY_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0xC4B2D30)
#define RPG_CLIENT_POPUPMENUPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xC4B2DA0)
#define RPG_CLIENT_POPUPMENUPROXY_SHOW_OFFSET UNITYSDK_OFFSET(0xC4B2E10)
#define RPG_CLIENT_POPUPMENUPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B2D20)

namespace RPG::Client
{
	inline static constexpr unsigned int PopupMenuProxy_TypeDefinitionIndex = 67729;

	class PopupMenuProxy : public ::System::Object
	{
	public:
		::System::Action_2<::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*>* _SetOptionsDelegate; // 0x10
		::System::Action_2<::XLua::LuaTable*, ::UnityEngine::Vector2>* _SetPositionDelegate; // 0x18
		::XLua::LuaTable* _LuaPopupMenuPanel; // 0x20
		::System::Action_1<::XLua::LuaTable*>* _ShowDelegate; // 0x28
		::System::Action_1<::XLua::LuaTable*>* _HideDelegate; // 0x30

		::System::Void _ctor(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetOptions(::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SETOPTIONS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_HIDE_OFFSET))(this);
		}

		::System::Void InitDelegate(::System::Action_2<::XLua::LuaTable*, ::UnityEngine::Vector2>* a1, ::System::Action_2<::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*>* a2, ::System::Action_1<::XLua::LuaTable*>* a3, ::System::Action_1<::XLua::LuaTable*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::UnityEngine::Vector2>*, ::System::Action_2<::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*>*, ::System::Action_1<::XLua::LuaTable*>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_INITDELEGATE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}

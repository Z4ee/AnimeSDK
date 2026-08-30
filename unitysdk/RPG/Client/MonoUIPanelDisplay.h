#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOUIPANELDISPLAY_ADDPANEL_OFFSET UNITYSDK_OFFSET(0x1C2971B0)
#define RPG_CLIENT_MONOUIPANELDISPLAY_GETPANELS_OFFSET UNITYSDK_OFFSET(0x1C2972D0)
#define RPG_CLIENT_MONOUIPANELDISPLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C297310)
#define RPG_CLIENT_MONOUIPANELDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2973A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPanelDisplay_TypeDefinitionIndex = 72967;

	class MonoUIPanelDisplay : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::XLua::LuaTable*>* _PanelTables; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPANELDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void AddPanel(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPANELDISPLAY_ADDPANEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::XLua::LuaTable*>* GetPanels()
		{
			return ((::System::Collections::Generic::List_1<::XLua::LuaTable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPANELDISPLAY_GETPANELS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPANELDISPLAY_ONDESTROY_OFFSET))(this);
		}
	};
}

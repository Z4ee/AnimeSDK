#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMouseCursorCtrl_CursorState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A0D530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x9A0D000)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET UNITYSDK_OFFSET(0x9A0CE20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_START_OFFSET UNITYSDK_OFFSET(0x9A0D050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A0D0F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0D5D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x9A0D480)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__ISANYMOVED_OFFSET UNITYSDK_OFFSET(0x9A0D260)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYHIDECURSOR_OFFSET UNITYSDK_OFFSET(0x9A0D410)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x9A0D3A0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMouseCursorCtrl_TypeDefinitionIndex = 62887;

	class FiveDimMouseCursorCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _MOUSE_X; // 0x0
		// static const ::System::String* _MOUSE_Y; // 0x0
		::System::Single _AutoHideSeconds; // 0x18
		::System::Action_1<::System::Boolean>* _CurSorHandler; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimMouseCursorCtrl_CursorState _CursorState; // 0x28
		::System::Boolean _Enabled; // 0x2C
		::System::Single _CountDown; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void SetCursorHandler(::System::Action_1<::System::Boolean>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET))(this, handler);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_UPDATE_OFFSET))(this);
		}

		::System::Void _TryShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYSHOWCURSOR_OFFSET))(this);
		}

		::System::Void _TryHideCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYHIDECURSOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__ISANYMOVED_OFFSET))(this);
		}

		::System::Void _DefaultCursorHandler(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET))(this, isShow);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET))(this);
		}
	};
}

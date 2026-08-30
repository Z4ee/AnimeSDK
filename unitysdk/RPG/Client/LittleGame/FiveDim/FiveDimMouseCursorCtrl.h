#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMouseCursorCtrl_CursorState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B1A4450)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x1B1A3EE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1B1A3D00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_START_OFFSET UNITYSDK_OFFSET(0x1B1A3F30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B1A3FE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A44F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x1B1A43A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__ISANYMOVED_OFFSET UNITYSDK_OFFSET(0x1B1A4170)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYHIDECURSOR_OFFSET UNITYSDK_OFFSET(0x1B1A4330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x1B1A42B0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMouseCursorCtrl_TypeDefinitionIndex = 76752;

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

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetCursorHandler(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET))(this, a1);
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

		::System::Void _DefaultCursorHandler(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET))(this);
		}
	};
}

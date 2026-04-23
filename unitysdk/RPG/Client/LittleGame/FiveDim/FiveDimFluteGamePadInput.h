#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimFluteGamePadInput_InputInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0xA6A8DC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6A8E10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA6A8FD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A9A20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0xA6A93E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_1_OFFSET UNITYSDK_OFFSET(0xA6A98C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_OFFSET UNITYSDK_OFFSET(0xA6A9800)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__INITVIEW_OFFSET UNITYSDK_OFFSET(0xA6A8E60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__TRYINVOKERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6A97A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xA6A9040)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteGamePadInput_TypeDefinitionIndex = 70925;

	class FiveDimFluteGamePadInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::UInt32>* _InputHandler; // 0x18
		::UnityEngine::RectTransform* _WheelMark; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _InputIdList; // 0x28
		::System::UInt32 _LastInputId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__CTOR_OFFSET))(this);
		}

		::System::Void AddInputHandler(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_ADDINPUTHANDLER_OFFSET))(this, callback);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__UPDATEGAMEPADINPUT_OFFSET))(this);
		}

		::System::Void _TryInvokerCallback(::System::UInt32 inputId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__TRYINVOKERCALLBACK_OFFSET))(this, inputId);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__INITVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetIncontrolLeftStickInputDirection()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo _GetInputInfo(::UnityEngine::Vector2 inputDir)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_OFFSET))(this, inputDir);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo _GetInputInfo_1(::System::Single angle)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_1_OFFSET))(this, angle);
		}
	};
}

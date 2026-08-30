#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimFluteGamePadInput_InputInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AC45CC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AC45D10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC45ED0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC468E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1AC46280)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_1_OFFSET UNITYSDK_OFFSET(0x1AC46760)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_OFFSET UNITYSDK_OFFSET(0x1AC466A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__INITVIEW_OFFSET UNITYSDK_OFFSET(0x1AC45D60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__TRYINVOKERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AC46630)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x1AC45F40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteGamePadInput_TypeDefinitionIndex = 76750;

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

		::System::Void AddInputHandler(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_ADDINPUTHANDLER_OFFSET))(this, a1);
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

		::System::Void _TryInvokerCallback(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__TRYINVOKERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__INITVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetIncontrolLeftStickInputDirection()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo _GetInputInfo(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo _GetInputInfo_1(::System::Single a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteGamePadInput_InputInfo(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT__GETINPUTINFO_1_OFFSET))(this, a1);
		}
	};
}

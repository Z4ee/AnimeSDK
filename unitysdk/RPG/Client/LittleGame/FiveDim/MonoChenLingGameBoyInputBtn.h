#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MonoChenLingGameBoyInputBtn_InputInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_ADDINPUTHANDLER_OFFSET UNITYSDK_OFFSET(0xBE14640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE14690)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE146D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__CTOR_OFFSET UNITYSDK_OFFSET(0xBE150F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0xBE14A40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINPUTINFO_1_OFFSET UNITYSDK_OFFSET(0xBE14F60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINPUTINFO_OFFSET UNITYSDK_OFFSET(0xBE14E80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__TRYINVOKERCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE14DF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__UPDATEGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xBE14740)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoChenLingGameBoyInputBtn_TypeDefinitionIndex = 71755;

	class MonoChenLingGameBoyInputBtn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _InputIdList; // 0x18
		::System::String* _LastInputKey; // 0x20
		::System::Action_1<::System::String*>* _InputHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__CTOR_OFFSET))(this);
		}

		::System::Void AddInputHandler(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_ADDINPUTHANDLER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__UPDATEGAMEPADINPUT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::MonoChenLingGameBoyInputBtn_InputInfo _GetInputInfo(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::MonoChenLingGameBoyInputBtn_InputInfo(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINPUTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::MonoChenLingGameBoyInputBtn_InputInfo _GetInputInfo_1(::System::Single a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::MonoChenLingGameBoyInputBtn_InputInfo(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINPUTINFO_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetIncontrolLeftStickInputDirection()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__GETINCONTROLLEFTSTICKINPUTDIRECTION_OFFSET))(this);
		}

		::System::Void _TryInvokerCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOCHENLINGGAMEBOYINPUTBTN__TRYINVOKERCALLBACK_OFFSET))(this, a1);
		}
	};
}

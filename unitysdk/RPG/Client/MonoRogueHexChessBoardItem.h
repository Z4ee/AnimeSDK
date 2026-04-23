#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class HexRogueMoveInputData; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA9F5A70)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA9F4C00)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA9F3F60)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONDISSELECT_OFFSET UNITYSDK_OFFSET(0xA9F3D00)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA9F5740)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA9F3CA0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA9F4EC0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xA9F5A90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA9F5A80)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xA9F4150)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F5C30)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__GETINPUTDATA_OFFSET UNITYSDK_OFFSET(0xA9F57C0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0xA9F5AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRogueHexChessBoardItem_TypeDefinitionIndex = 63558;

	class MonoRogueHexChessBoardItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::HexRogueMoveInputData** StaticGet__InputData()
		{
			return (::RPG::Client::HexRogueMoveInputData**)Il2CppClass::FromTypeDefinitionIndex(MonoRogueHexChessBoardItem_TypeDefinitionIndex)->GetStaticField(0x41060);
		}
		::System::Object* mUserObjectData; // 0x18
		::RPG::Client::ChessRogueBoardCellDataItem* _CellDataItem; // 0x20
		::System::Boolean _Interactable; // 0x28
		::RPG::Client::AnimatorButton* _AnimationButton; // 0x30
		::UnityEngine::Animator* _Animator; // 0x38
		::System::Single _FadeInBeginStamp; // 0x40
		::System::Boolean _NeedTickFadeIn; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__CTOR_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONMOVE_OFFSET))(this, eventData);
		}

		::RPG::Client::HexRogueMoveInputData* _GetInputData(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::RPG::Client::HexRogueMoveInputData*(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__GETINPUTDATA_OFFSET))(this, eventData);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SET_USEROBJECTDATA_OFFSET))(this, value);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void Init(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_INIT_OFFSET))(this, cellDataItem);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnDisSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONDISSELECT_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONCLEAR_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::UInt32 startPosX, ::System::Single timeOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_PLAYFADEIN_OFFSET))(this, startPosX, timeOffset);
		}

		::System::Void TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_TICKFADEIN_OFFSET))(this);
		}

		::System::Void _TriggerFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__TRIGGERFADEIN_OFFSET))(this);
		}
	};
}

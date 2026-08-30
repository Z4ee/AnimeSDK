#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class HexRogueMoveInputData; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xD8614B0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_INIT_OFFSET UNITYSDK_OFFSET(0xD860530)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xD85F640)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONDISSELECT_OFFSET UNITYSDK_OFFSET(0xD85F3A0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONMOVE_OFFSET UNITYSDK_OFFSET(0xD861170)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xD85F340)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD8607B0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xD8614D0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xD8614C0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xD85F8D0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD861670)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__GETINPUTDATA_OFFSET UNITYSDK_OFFSET(0xD8611F0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0xD861520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRogueHexChessBoardItem_TypeDefinitionIndex = 68888;

	class MonoRogueHexChessBoardItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::HexRogueMoveInputData** StaticGet__InputData()
		{
			return (::RPG::Client::HexRogueMoveInputData**)Il2CppClass::FromTypeDefinitionIndex(MonoRogueHexChessBoardItem_TypeDefinitionIndex)->GetStaticField(0x165F0);
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

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_ONMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::HexRogueMoveInputData* _GetInputData(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::RPG::Client::HexRogueMoveInputData*(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM__GETINPUTDATA_OFFSET))(this, a1);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_INIT_OFFSET))(this, a1);
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

		::System::Void PlayFadeIn(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARDITEM_PLAYFADEIN_OFFSET))(this, a1, a2);
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

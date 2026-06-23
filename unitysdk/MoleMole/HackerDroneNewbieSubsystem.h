#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3BBBB53D18AF6973.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace MoleMole { class HackerDroneNewbieSubsystem_InputHoldEntry; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x182F0240)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x182F0EE0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONUP_OFFSET UNITYSDK_OFFSET(0x182F10C0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182F0520)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182F0C20)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_REGISTERINPUTHOLD_OFFSET UNITYSDK_OFFSET(0x182F0920)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_UNREGISTERINPUTHOLD_OFFSET UNITYSDK_OFFSET(0x182F0AD0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182F12A0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x182F1380)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182F1410)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182F14A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneNewbieSubsystem_TypeDefinitionIndex = 76329;

	class HackerDroneNewbieSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackerDroneNewbieSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HackerDroneNewbieSubsystem_InputHoldEntry*>* _entries; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _pendingRemove; // 0x18
		::System::Action_1<::System::EventArgs*>* _onButtonDown; // 0x20
		::System::Action_1<::System::EventArgs*>* _onButtonUp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterInputHold(::System::String* tag, ::Enum_3_3BBBB53D18AF6973 inputType, ::System::Single holdTimeThreshold, ::System::Boolean disposeAfterTriggered, ::System::Action* onTriggered, ::System::Action* onDispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_3BBBB53D18AF6973, ::System::Single, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_REGISTERINPUTHOLD_OFFSET))(this, tag, inputType, holdTimeThreshold, disposeAfterTriggered, onTriggered, onDispose);
		}

		::System::Void UnregisterInputHold(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_UNREGISTERINPUTHOLD_OFFSET))(this, tag);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnButtonDown(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONDOWN_OFFSET))(this, args);
		}

		::System::Void OnButtonUp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONUP_OFFSET))(this, args);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}

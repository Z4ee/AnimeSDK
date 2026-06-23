#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"
#include "unitysdk/MoleMole/LogicAxis2DInputType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIFOCUSINPUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xF968D00)

inline static constexpr unsigned int MonoUIFocusInputGroup_TypeDefinitionIndex = 87216;

class MonoUIFocusInputGroup : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::System::Boolean AllowInputPass; // 0x58
	::System::Boolean EnabledAllListenMode; // 0x59
	::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>* ListenLogicButtonInputList; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::LogicAxis2DInputType>* ListenLogicAxis2DInputList; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Key>* ListenRawKeyboardButtonInputList; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::GamepadButton>* ListenRawGamepadButtonInputList; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::GamepadButtonEx>* ListenRawGamepadButtonExInputList; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUSINPUTGROUP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D66FF03D93DBBB59_Struct_2_D359DE2EB47031EC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

class Class_1_D66FF03D93DBBB59_Class_0_16E7307DCC43CB2C_80;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define CLASS_1_D66FF03D93DBBB59_CONTAINS_OFFSET UNITYSDK_OFFSET(0xE7F4350)
#define CLASS_1_D66FF03D93DBBB59_DISABLE_OFFSET UNITYSDK_OFFSET(0xE7F4580)
#define CLASS_1_D66FF03D93DBBB59_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7F4010)
#define CLASS_1_D66FF03D93DBBB59_ENABLE_OFFSET UNITYSDK_OFFSET(0xE7F4530)
#define CLASS_1_D66FF03D93DBBB59_FINDACTION_OFFSET UNITYSDK_OFFSET(0xE7F4640)
#define CLASS_1_D66FF03D93DBBB59_FINDBINDING_OFFSET UNITYSDK_OFFSET(0xE7F46B0)
#define CLASS_1_D66FF03D93DBBB59_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7F4410)
#define CLASS_1_D66FF03D93DBBB59_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0xE7F40F0)
#define CLASS_1_D66FF03D93DBBB59_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0xE7F45D0)
#define CLASS_1_D66FF03D93DBBB59_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0xE7F4310)
#define CLASS_1_D66FF03D93DBBB59_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0xE7F4230)
#define CLASS_1_D66FF03D93DBBB59_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0xE7F47A0)
#define CLASS_1_D66FF03D93DBBB59_METHOD_1_FA5975137CC99DA0_OFFSET UNITYSDK_OFFSET(0xE7F47B0)
#define CLASS_1_D66FF03D93DBBB59_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0xE7F4140)
#define CLASS_1_D66FF03D93DBBB59_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0xE7F4290)
#define CLASS_1_D66FF03D93DBBB59_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7F4490)
#define CLASS_1_D66FF03D93DBBB59__CTOR_OFFSET UNITYSDK_OFFSET(0xE7F3F20)

inline static constexpr unsigned int Class_1_D66FF03D93DBBB59_TypeDefinitionIndex = 83798;

class Class_1_D66FF03D93DBBB59 : public ::System::Object
{
public:
	::UnityEngine::InputSystem::InputActionAsset* Field_1_0; // 0x10
	::UnityEngine::InputSystem::InputAction* Field_1_3; // 0x18
	::UnityEngine::InputSystem::InputAction* Field_1_4; // 0x20
	::Class_1_D66FF03D93DBBB59_Class_0_16E7307DCC43CB2C_80* Field_1_2; // 0x28
	::UnityEngine::InputSystem::InputAction* Field_1_5; // 0x30
	::UnityEngine::InputSystem::InputActionMap* Field_1_1; // 0x38
	::UnityEngine::InputSystem::InputAction* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_DISPOSE_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
	{
		return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_GET_BINDINGMASK_OFFSET))(this);
	}

	::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_SET_BINDINGMASK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices()
	{
		return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_GET_DEVICES_OFFSET))(this);
	}

	::System::Void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_SET_DEVICES_OFFSET))(this, a1);
	}

	::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes()
	{
		return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_GET_CONTROLSCHEMES_OFFSET))(this);
	}

	::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_CONTAINS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Enable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_ENABLE_OFFSET))(this);
	}

	::System::Void Disable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_DISABLE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_GET_BINDINGS_OFFSET))(this);
	}

	::UnityEngine::InputSystem::InputAction* FindAction(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_FINDACTION_OFFSET))(this, a1, a2);
	}

	::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding a1, ::UnityEngine::InputSystem::InputAction*& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_FINDBINDING_OFFSET))(this, a1, a2);
	}

	::Class_1_D66FF03D93DBBB59_Struct_2_D359DE2EB47031EC Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_D66FF03D93DBBB59_Struct_2_D359DE2EB47031EC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::UnityEngine::InputSystem::InputActionAsset* Method_1_FA5975137CC99DA0()
	{
		return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D66FF03D93DBBB59_METHOD_1_FA5975137CC99DA0_OFFSET))(this);
	}
};

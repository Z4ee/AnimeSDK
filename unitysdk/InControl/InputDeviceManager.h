#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputDevice; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCONTROL_INPUTDEVICEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x15B77D00)
#define INCONTROL_INPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B77D10)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceManager_TypeDefinitionIndex = 31425;

	class InputDeviceManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* devices; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMANAGER_DESTROY_OFFSET))(this);
		}
	};
}

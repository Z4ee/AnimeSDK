#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputDevice; }
namespace System { template <typename T> class Comparison_1; }

#define INCONTROL_INPUTMANAGER___C__ATTACHDEVICE_B__92_0_OFFSET UNITYSDK_OFFSET(0x1717B230)
#define INCONTROL_INPUTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1717B1E0)
#define INCONTROL_INPUTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1717B220)

namespace InControl
{
	inline static constexpr unsigned int InputManager___c_TypeDefinitionIndex = 37160;

	class InputManager___c : public ::System::Object
	{
	public:
		static ::InControl::InputManager___c** StaticGet___9()
		{
			return (::InControl::InputManager___c**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c_TypeDefinitionIndex)->GetStaticField(0xC350);
		}
		static ::System::Comparison_1<::InControl::InputDevice*>** StaticGet___9__92_0()
		{
			return (::System::Comparison_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c_TypeDefinitionIndex)->GetStaticField(0xC358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AttachDevice_b__92_0(::InControl::InputDevice* d1, ::InControl::InputDevice* d2)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::InputDevice*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C__ATTACHDEVICE_B__92_0_OFFSET))(this, d1, d2);
		}
	};
}

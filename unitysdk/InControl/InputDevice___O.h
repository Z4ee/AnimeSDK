#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class DeadZoneFunc; }

namespace InControl
{
	inline static constexpr unsigned int InputDevice___O_TypeDefinitionIndex = 31421;

	class InputDevice___O : public ::System::Object
	{
	public:
		static ::InControl::DeadZoneFunc** StaticGet__0___Separate()
		{
			return (::InControl::DeadZoneFunc**)Il2CppClass::FromTypeDefinitionIndex(InputDevice___O_TypeDefinitionIndex)->GetStaticField(0x35DE0);
		}
	};
}

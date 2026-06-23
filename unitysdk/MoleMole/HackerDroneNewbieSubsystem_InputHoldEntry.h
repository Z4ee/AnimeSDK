#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3BBBB53D18AF6973.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_INPUTHOLDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF0600)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneNewbieSubsystem_InputHoldEntry_TypeDefinitionIndex = 76330;

	class HackerDroneNewbieSubsystem_InputHoldEntry : public ::System::Object
	{
	public:
		::System::Action* OnTriggered; // 0x10
		::System::Action* OnDispose; // 0x18
		::System::String* Tag; // 0x20
		::Enum_3_3BBBB53D18AF6973 InputType; // 0x28
		::System::Single HoldTimeThreshold; // 0x2C
		::System::Boolean IsPressing; // 0x30
		::System::Boolean DisposeAfterTriggered; // 0x31
		::System::Single PressTimer; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_INPUTHOLDENTRY__CTOR_OFFSET))(this);
		}
	};
}

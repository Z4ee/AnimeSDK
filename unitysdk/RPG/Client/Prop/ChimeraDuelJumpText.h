#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelJumpTextType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELJUMPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA049510)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelJumpText_TypeDefinitionIndex = 63723;

	class ChimeraDuelJumpText : public ::System::Object
	{
	public:
		::System::Int32 ActualValue; // 0x10
		::RPG::Client::Prop::ChimeraDuelJumpTextType Type; // 0x14
		::System::Int32 ExpectedValue; // 0x18
		::System::Int32 UniqueID; // 0x1C
		::System::Int32 InitialValue; // 0x20

		::System::Void _ctor(::System::Int32 uniqueID, ::RPG::Client::Prop::ChimeraDuelJumpTextType type, ::System::Int32 expectedValue, ::System::Int32 actualValue, ::System::Int32 initialValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::ChimeraDuelJumpTextType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELJUMPTEXT__CTOR_OFFSET))(this, uniqueID, type, expectedValue, actualValue, initialValue);
		}
	};
}

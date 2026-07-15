#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_STATEVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6B1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateValueEntry_TypeDefinitionIndex = 67808;

	class StateValueEntry : public ::System::Object
	{
	public:
		::System::String* SlotId; // 0x10
		::System::String* DemodId; // 0x18
		::System::String* StateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEVALUEENTRY__CTOR_OFFSET))(this);
		}
	};
}

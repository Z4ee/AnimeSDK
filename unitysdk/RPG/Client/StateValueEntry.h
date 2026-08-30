#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_STATEVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5068F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateValueEntry_TypeDefinitionIndex = 70976;

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

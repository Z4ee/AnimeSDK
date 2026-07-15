#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PAIRVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DD930)

namespace RPG::Client
{
	inline static constexpr unsigned int PairValueEntry_TypeDefinitionIndex = 67813;

	class PairValueEntry : public ::System::Object
	{
	public:
		::System::String* SlotId; // 0x10
		::System::String* DemodId; // 0x18
		::System::String* StateA; // 0x20
		::System::String* StateB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAIRVALUEENTRY__CTOR_OFFSET))(this);
		}
	};
}

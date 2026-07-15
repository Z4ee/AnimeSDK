#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_MEMGRAPHTAKER_TAKE_OFFSET UNITYSDK_OFFSET(0x1D2A0640)
#define RPG_MEMGRAPHTAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A06F0)

namespace RPG
{
	inline static constexpr unsigned int MemGraphTaker_TypeDefinitionIndex = 33718;

	class MemGraphTaker : public ::System::Object
	{
	public:
		// static const ::System::String* IP_KEY; // 0x0
		// static const ::System::String* PORT_KEY; // 0x0
		// static const ::System::String* DEFAULT_IP; // 0x0
		// static const ::System::Int32 DEFAULT_PORT = 0x2537; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MEMGRAPHTAKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Take(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_MEMGRAPHTAKER_TAKE_OFFSET))(a1);
		}
	};
}

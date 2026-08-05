#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_TRAFFIC_AREA__CTOR_OFFSET UNITYSDK_OFFSET(0x19742020)

namespace MoleMole
{
	inline static constexpr unsigned int Traffic_Area_TypeDefinitionIndex = 76586;

	class Traffic_Area : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::Int32 ObjectID; // 0x18
		::System::Int32 ObjectStateID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRAFFIC_AREA__CTOR_OFFSET))(this);
		}
	};
}

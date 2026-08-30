#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_AREADOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE33250)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AreaDoor_TypeDefinitionIndex = 77747;

	class AreaDoor : public ::System::Object
	{
	public:
		::System::Int32 Edge; // 0x10
		::System::Boolean InitOpen; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_AREADOOR__CTOR_OFFSET))(this);
		}
	};
}

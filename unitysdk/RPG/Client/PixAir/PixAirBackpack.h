#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRBACKPACK__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE66B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBackpack_TypeDefinitionIndex = 78840;

	class PixAirBackpack : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBACKPACK__CTOR_OFFSET))(this);
		}
	};
}

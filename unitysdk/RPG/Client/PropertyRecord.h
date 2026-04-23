#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_PROPERTYRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xAF23450)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyRecord_TypeDefinitionIndex = 66916;

	class PropertyRecord : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::System::Single alpha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYRECORD__CTOR_OFFSET))(this);
		}
	};
}

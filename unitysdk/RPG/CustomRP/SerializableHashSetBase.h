#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xE44D550)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSetBase_TypeDefinitionIndex = 52173;

	class SerializableHashSetBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE__CTOR_OFFSET))(this);
		}
	};
}

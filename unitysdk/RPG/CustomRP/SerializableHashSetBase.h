#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AFB60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSetBase_TypeDefinitionIndex = 41912;

	class SerializableHashSetBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE__CTOR_OFFSET))(this);
		}
	};
}

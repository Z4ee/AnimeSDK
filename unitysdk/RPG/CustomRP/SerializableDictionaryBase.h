#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SERIALIZABLEDICTIONARYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F2AE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableDictionaryBase_TypeDefinitionIndex = 47879;

	class SerializableDictionaryBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERIALIZABLEDICTIONARYBASE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_FLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB26F510)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ComputeMaterial_FloatProperty_TypeDefinitionIndex = 67748;

	class ComputeMaterial_FloatProperty : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_FLOATPROPERTY__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTPARAMETER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B727570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B727580)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataRequestParameter_TypeDefinitionIndex = 37300;

	class CGDataRequestParameter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::FluffyUnderware::Curvy::Generator::CGDataRequestParameter* a)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTPARAMETER_OP_IMPLICIT_OFFSET))(a);
		}
	};
}

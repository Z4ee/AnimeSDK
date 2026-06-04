#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }

#define INCONTROL_OPTIONALTYPEHASNOVALUEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18034520)

namespace InControl
{
	inline static constexpr unsigned int OptionalTypeHasNoValueException_TypeDefinitionIndex = 37940;

	class OptionalTypeHasNoValueException : public ::System::SystemException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALTYPEHASNOVALUEEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}

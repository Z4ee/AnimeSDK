#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NAP_NAPECS_NAPDEBUG_VERYIMPORTANTERROR_OFFSET UNITYSDK_OFFSET(0x1B2F1940)
#define NAP_NAPECS_NAPDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30BE10)

namespace Nap::NapECS
{
	inline static constexpr unsigned int NapDebug_TypeDefinitionIndex = 37364;

	class NapDebug : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_NAPDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void VeryImportantError(::System::String* msg, ::System::Boolean throwException)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_NAPDEBUG_VERYIMPORTANTERROR_OFFSET))(msg, throwException);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define RPG_CLIENT_DATETIMEPRO_DATETIMEAMBIGUITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC46B40)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_DateTimeAmbiguityException_TypeDefinitionIndex = 35260;

	class DateTimePro_DateTimeAmbiguityException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_DATETIMEAMBIGUITYEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}

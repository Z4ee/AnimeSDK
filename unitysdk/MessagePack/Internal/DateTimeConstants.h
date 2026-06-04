#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DATETIMECONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x181528B0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DateTimeConstants_TypeDefinitionIndex = 7243;

	class DateTimeConstants : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTimeConstants_TypeDefinitionIndex)->GetStaticField(0x4110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DATETIMECONSTANTS__CCTOR_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1A0A37B0)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A0A3870)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int NoReflectionHelper_TypeDefinitionIndex = 2435;

	class NoReflectionHelper : public ::System::Object
	{
	public:
		static ::System::Object* GetInternalValidator(::System::Object* provider, ::System::Object* settings)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETINTERNALVALIDATOR_OFFSET))(provider, settings);
		}

		static ::System::Object* GetProvider()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET))();
		}
	};
}

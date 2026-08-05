#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_X509_X520__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5A90)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_TypeDefinitionIndex = 2308;

	class X520 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x185484D0)
#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185485B0)
#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18542050)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKeyComparer_TypeDefinitionIndex = 108;

	class RegistryKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}

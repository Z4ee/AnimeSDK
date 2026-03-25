#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x16161930)
#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16161A20)
#define MICROSOFT_WIN32_REGISTRYKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1615B590)

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

		::System::Boolean Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}

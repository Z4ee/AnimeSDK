#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF18B90)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF18BA0)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF18B80)

namespace R3
{
	inline static constexpr unsigned int SerialDisposableCore_DisposedSentinel_TypeDefinitionIndex = 35281;

	class SerialDisposableCore_DisposedSentinel : public ::System::Object
	{
	public:
		static ::R3::SerialDisposableCore_DisposedSentinel** StaticGet_Instance()
		{
			return (::R3::SerialDisposableCore_DisposedSentinel**)Il2CppClass::FromTypeDefinitionIndex(SerialDisposableCore_DisposedSentinel_TypeDefinitionIndex)->GetStaticField(0xD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTUDPMESSAGEHELLO_READ_OFFSET UNITYSDK_OFFSET(0x16A75900)
#define HDG_RDTUDPMESSAGEHELLO_WRITE_OFFSET UNITYSDK_OFFSET(0x16A5FCB0)
#define HDG_RDTUDPMESSAGEHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F370)

namespace Hdg
{
	inline static constexpr unsigned int rdtUdpMessageHello_TypeDefinitionIndex = 47452;

	class rdtUdpMessageHello : public ::System::Object
	{
	public:
		::System::String* m_deviceType; // 0x10
		::System::String* m_devicePlatform; // 0x18
		::System::String* m_deviceName; // 0x20
		::System::String* m_serverVersion; // 0x28
		::System::Int32 m_serverPort; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTUDPMESSAGEHELLO__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTUDPMESSAGEHELLO_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTUDPMESSAGEHELLO_READ_OFFSET))(this, a1);
		}
	};
}

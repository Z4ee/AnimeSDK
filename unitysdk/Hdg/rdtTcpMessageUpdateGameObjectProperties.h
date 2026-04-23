#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageUpdateGameObjectProperties_Flags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_HASFLAG_OFFSET UNITYSDK_OFFSET(0x262A0)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_READ_OFFSET UNITYSDK_OFFSET(0x26200)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_SETFLAG_OFFSET UNITYSDK_OFFSET(0x26280)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_WRITE_OFFSET UNITYSDK_OFFSET(0x26180)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageUpdateGameObjectProperties_TypeDefinitionIndex = 43801;

	struct alignas(8) rdtTcpMessageUpdateGameObjectProperties
	{
		::System::Int32 m_instanceId; // 0x10
		::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags m_flags; // 0x14
		::System::Boolean m_enabled; // 0x18
		::System::String* m_tag; // 0x20
		::System::Int32 m_layer; // 0x28

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_READ_OFFSET))(this, r);
		}

		::System::Void SetFlag(::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags flag, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_SETFLAG_OFFSET))(this, flag, enabled);
		}

		::System::Boolean HasFlag(::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_HASFLAG_OFFSET))(this, flag);
		}
	};
}

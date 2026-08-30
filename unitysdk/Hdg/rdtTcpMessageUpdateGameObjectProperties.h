#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageUpdateGameObjectProperties_Flags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_HASFLAG_OFFSET UNITYSDK_OFFSET(0x27510)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_READ_OFFSET UNITYSDK_OFFSET(0x274E0)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_SETFLAG_OFFSET UNITYSDK_OFFSET(0x274F0)
#define HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_WRITE_OFFSET UNITYSDK_OFFSET(0x274D0)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageUpdateGameObjectProperties_TypeDefinitionIndex = 47449;

	struct alignas(8) rdtTcpMessageUpdateGameObjectProperties
	{
		::System::Int32 m_instanceId; // 0x10
		::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags m_flags; // 0x14
		::System::Boolean m_enabled; // 0x18
		::System::String* m_tag; // 0x20
		::System::Int32 m_layer; // 0x28

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_READ_OFFSET))(this, a1);
		}

		::System::Void SetFlag(::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_SETFLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasFlag(::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtTcpMessageUpdateGameObjectProperties_Flags))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATEGAMEOBJECTPROPERTIES_HASFLAG_OFFSET))(this, a1);
		}
	};
}

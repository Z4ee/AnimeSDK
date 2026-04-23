#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGETCOMPONENTS_READ_OFFSET UNITYSDK_OFFSET(0x25D50)
#define HDG_RDTTCPMESSAGEGETCOMPONENTS_WRITE_OFFSET UNITYSDK_OFFSET(0x25D20)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageGetComponents_TypeDefinitionIndex = 43796;

	struct alignas(4) rdtTcpMessageGetComponents
	{
		::System::Int32 m_instanceId; // 0x10

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETCOMPONENTS_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETCOMPONENTS_READ_OFFSET))(this, r);
		}
	};
}

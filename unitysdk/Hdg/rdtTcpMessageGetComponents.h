#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGETCOMPONENTS_READ_OFFSET UNITYSDK_OFFSET(0x38E53E0)
#define HDG_RDTTCPMESSAGEGETCOMPONENTS_WRITE_OFFSET UNITYSDK_OFFSET(0x38E5350)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageGetComponents_TypeDefinitionIndex = 45208;

	struct alignas(4) rdtTcpMessageGetComponents
	{
		::System::Int32 m_instanceId; // 0x10

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETCOMPONENTS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETCOMPONENTS_READ_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGETGAMEOBJECTS_READ_OFFSET UNITYSDK_OFFSET(0x1020)
#define HDG_RDTTCPMESSAGEGETGAMEOBJECTS_WRITE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageGetGameObjects_TypeDefinitionIndex = 37920;

	struct alignas(1) rdtTcpMessageGetGameObjects
	{
		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETGAMEOBJECTS_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETGAMEOBJECTS_READ_OFFSET))(this, r);
		}
	};
}

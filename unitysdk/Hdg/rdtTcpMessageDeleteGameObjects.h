#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEDELETEGAMEOBJECTS_READ_OFFSET UNITYSDK_OFFSET(0x3A9B3C0)
#define HDG_RDTTCPMESSAGEDELETEGAMEOBJECTS_WRITE_OFFSET UNITYSDK_OFFSET(0x3A9B3B0)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageDeleteGameObjects_TypeDefinitionIndex = 47441;

	struct alignas(8) rdtTcpMessageDeleteGameObjects
	{
		::System::Collections::Generic::List_1<::System::Int32>* m_instanceIds; // 0x10

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEDELETEGAMEOBJECTS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEDELETEGAMEOBJECTS_READ_OFFSET))(this, a1);
		}
	};
}

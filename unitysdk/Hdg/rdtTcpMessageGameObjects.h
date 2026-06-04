#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageGameObjects_Gob.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGAMEOBJECTS_READ_OFFSET UNITYSDK_OFFSET(0x269A0)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_WRITE_OFFSET UNITYSDK_OFFSET(0x26990)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageGameObjects_TypeDefinitionIndex = 44336;

	struct alignas(8) rdtTcpMessageGameObjects
	{
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageGameObjects_Gob>* m_allGobs; // 0x10

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_READ_OFFSET))(this, a1);
		}
	};
}

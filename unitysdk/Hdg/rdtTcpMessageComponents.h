#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Component.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGECOMPONENTS_READ_OFFSET UNITYSDK_OFFSET(0x38E4F10)
#define HDG_RDTTCPMESSAGECOMPONENTS_WRITE_OFFSET UNITYSDK_OFFSET(0x38E4F00)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageComponents_TypeDefinitionIndex = 45201;

	struct alignas(8) rdtTcpMessageComponents
	{
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Component>* m_components; // 0x10
		::System::Int32 m_layer; // 0x18
		::System::String* m_tag; // 0x20
		::System::Boolean m_enabled; // 0x28
		::System::Int32 m_instanceId; // 0x2C

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_READ_OFFSET))(this, a1);
		}
	};
}

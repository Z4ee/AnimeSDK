#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGESETARRAYSIZE_READ_OFFSET UNITYSDK_OFFSET(0x25FA0)
#define HDG_RDTTCPMESSAGESETARRAYSIZE_WRITE_OFFSET UNITYSDK_OFFSET(0x25F90)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageSetArraySize_TypeDefinitionIndex = 43799;

	struct alignas(8) rdtTcpMessageSetArraySize
	{
		::System::Int32 m_gameObjectInstanceId; // 0x10
		::System::Int32 m_componentInstanceId; // 0x14
		::System::String* m_componentName; // 0x18
		::System::Int32 m_size; // 0x20
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* m_properties; // 0x28

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGESETARRAYSIZE_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGESETARRAYSIZE_READ_OFFSET))(this, r);
		}
	};
}

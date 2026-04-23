#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEUPDATECOMPONENTPROPERTIES_READ_OFFSET UNITYSDK_OFFSET(0x26040)
#define HDG_RDTTCPMESSAGEUPDATECOMPONENTPROPERTIES_WRITE_OFFSET UNITYSDK_OFFSET(0x26030)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageUpdateComponentProperties_TypeDefinitionIndex = 43800;

	struct alignas(8) rdtTcpMessageUpdateComponentProperties
	{
		::System::Int32 m_gameObjectInstanceId; // 0x10
		::System::Int32 m_componentInstanceId; // 0x14
		::System::String* m_componentName; // 0x18
		::System::Boolean m_enabled; // 0x20
		::System::Int32 m_arrayIndex; // 0x24
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* m_properties; // 0x28

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATECOMPONENTPROPERTIES_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEUPDATECOMPONENTPROPERTIES_READ_OFFSET))(this, r);
		}
	};
}

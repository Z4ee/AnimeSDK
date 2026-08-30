#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_READPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16A5E270)
#define HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_READ_OFFSET UNITYSDK_OFFSET(0x3A9B290)
#define HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A9B240)
#define HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_WRITEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16A58C30)
#define HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_WRITE_OFFSET UNITYSDK_OFFSET(0x3A9B280)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageComponents_Component_TypeDefinitionIndex = 47440;

	struct alignas(8) rdtTcpMessageComponents_Component
	{
		::System::Boolean m_canBeDisabled; // 0x10
		::System::Boolean m_enabled; // 0x11
		::System::String* m_name; // 0x18
		::System::String* m_assemblyName; // 0x20
		::System::Int32 m_instanceId; // 0x28
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* m_properties; // 0x30

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_TOSTRING_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_WRITE_OFFSET))(this, a1);
		}

		static ::System::Void WriteProperties(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_WRITEPROPERTIES_OFFSET))(a1, a2);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_READ_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* ReadProperties(::System::IO::BinaryReader* a1)
		{
			return ((::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_COMPONENT_READPROPERTIES_OFFSET))(a1);
		}
	};
}

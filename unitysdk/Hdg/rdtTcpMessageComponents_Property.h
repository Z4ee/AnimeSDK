#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property_Type.h"
#include "unitysdk/System/ValueType.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_CLONE_OFFSET UNITYSDK_OFFSET(0x3A9B330)
#define HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_DESERIALISE_OFFSET UNITYSDK_OFFSET(0x3A9B360)
#define HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_READ_OFFSET UNITYSDK_OFFSET(0x3A9B380)
#define HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A9B2C0)
#define HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_WRITE_OFFSET UNITYSDK_OFFSET(0x3A9B370)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageComponents_Property_TypeDefinitionIndex = 47438;

	struct alignas(8) rdtTcpMessageComponents_Property
	{
		::System::String* m_name; // 0x10
		::System::Object* m_value; // 0x18
		::Hdg::rdtTcpMessageComponents_Property_Type m_type; // 0x20
		::System::Boolean m_isArray; // 0x24

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_TOSTRING_OFFSET))(this);
		}

		::Hdg::rdtTcpMessageComponents_Property Clone()
		{
			return ((::Hdg::rdtTcpMessageComponents_Property(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_CLONE_OFFSET))(this);
		}

		::System::Void Deserialise(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_DESERIALISE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGECOMPONENTS_PROPERTY_READ_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x26B30)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_READ_OFFSET UNITYSDK_OFFSET(0x26C70)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x26AC0)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_WRITE_OFFSET UNITYSDK_OFFSET(0x26BD0)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageGameObjects_Gob_TypeDefinitionIndex = 44337;

	struct alignas(8) rdtTcpMessageGameObjects_Gob
	{
		::System::Boolean m_enabled; // 0x10
		::System::String* m_name; // 0x18
		::System::Int32 m_instanceId; // 0x20
		::System::Boolean m_hasParent; // 0x24
		::System::Int32 m_parentInstanceId; // 0x28
		::System::String* m_scene; // 0x30

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_READ_OFFSET))(this, a1);
		}
	};
}

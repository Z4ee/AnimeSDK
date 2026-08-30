#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGELOG_READ_OFFSET UNITYSDK_OFFSET(0x27380)
#define HDG_RDTTCPMESSAGELOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x27340)
#define HDG_RDTTCPMESSAGELOG_WRITE_OFFSET UNITYSDK_OFFSET(0x27370)
#define HDG_RDTTCPMESSAGELOG__CTOR_OFFSET UNITYSDK_OFFSET(0x27330)

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageLog_TypeDefinitionIndex = 47446;

	struct alignas(8) rdtTcpMessageLog
	{
		::System::String* m_message; // 0x10
		::System::String* m_stackTrace; // 0x18
		::UnityEngine::LogType m_logType; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGELOG__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGELOG_TOSTRING_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGELOG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGELOG_READ_OFFSET))(this, a1);
		}
	};
}

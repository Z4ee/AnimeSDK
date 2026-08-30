#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_RPUDPMESSAGEHELLO_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C6DF200)
#define RPG_CUSTOMRP_RPUDPMESSAGEHELLO_READ_OFFSET UNITYSDK_OFFSET(0x1C6DF010)
#define RPG_CUSTOMRP_RPUDPMESSAGEHELLO_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6DEDF0)
#define RPG_CUSTOMRP_RPUDPMESSAGEHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DF240)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUdpMessageHello_TypeDefinitionIndex = 37225;

	class RPUdpMessageHello : public ::System::Object
	{
	public:
		::System::String* deviceName; // 0x10
		::System::String* deviceType; // 0x18
		::System::String* devicePlatform; // 0x20
		::System::Int32 serverPort; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUDPMESSAGEHELLO__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUDPMESSAGEHELLO_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUDPMESSAGEHELLO_READ_OFFSET))(this, a1);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUDPMESSAGEHELLO_GETMESSAGETYPE_OFFSET))(this);
		}
	};
}

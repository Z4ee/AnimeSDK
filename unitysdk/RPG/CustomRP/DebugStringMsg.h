#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSTRINGMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C6A59D0)
#define RPG_CUSTOMRP_DEBUGSTRINGMSG_READ_OFFSET UNITYSDK_OFFSET(0x1C6A5800)
#define RPG_CUSTOMRP_DEBUGSTRINGMSG_RESET_OFFSET UNITYSDK_OFFSET(0x1C6A5650)
#define RPG_CUSTOMRP_DEBUGSTRINGMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6A5660)
#define RPG_CUSTOMRP_DEBUGSTRINGMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A5A10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugStringMsg_TypeDefinitionIndex = 37056;

	class DebugStringMsg : public ::System::Object
	{
	public:
		::System::String* str; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSG__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSG_RESET_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSG_READ_OFFSET))(this, a1);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSG_GETMESSAGETYPE_OFFSET))(this);
		}
	};
}

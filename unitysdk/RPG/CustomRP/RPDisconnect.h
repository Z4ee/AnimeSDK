#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_RPDISCONNECT_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x18149840)
#define RPG_CUSTOMRP_RPDISCONNECT_READ_OFFSET UNITYSDK_OFFSET(0x18149830)
#define RPG_CUSTOMRP_RPDISCONNECT_WRITE_OFFSET UNITYSDK_OFFSET(0x18149820)
#define RPG_CUSTOMRP_RPDISCONNECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18149880)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPDisconnect_TypeDefinitionIndex = 35285;

	class RPDisconnect : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_READ_OFFSET))(this, r);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_GETMESSAGETYPE_OFFSET))(this);
		}
	};
}

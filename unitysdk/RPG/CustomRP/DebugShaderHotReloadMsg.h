#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DebugShaderHotReloadMsg_UpdateType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C6A4510)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_READ_OFFSET UNITYSDK_OFFSET(0x1C6A4810)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_RESET_OFFSET UNITYSDK_OFFSET(0x1C6A4AA0)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6A4550)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A4AC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadMsg_TypeDefinitionIndex = 37062;

	class DebugShaderHotReloadMsg : public ::System::Object
	{
	public:
		::System::String* shaderName; // 0x10
		::Il2CppArray<::System::Byte>* data; // 0x18
		::RPG::CustomRP::DebugShaderHotReloadMsg_UpdateType updateType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSG_RESET_OFFSET))(this);
		}
	};
}

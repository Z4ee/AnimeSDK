#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DebugShaderHotReloadMsg_UpdateType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x16BE4AF0)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_READ_OFFSET UNITYSDK_OFFSET(0x16BE4D70)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_RESET_OFFSET UNITYSDK_OFFSET(0x16BE4F60)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x16BE4B30)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE4F90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadResultMsg_TypeDefinitionIndex = 36205;

	class DebugShaderHotReloadResultMsg : public ::System::Object
	{
	public:
		::System::String* detail; // 0x10
		::System::String* shaderName; // 0x18
		::RPG::CustomRP::DebugShaderHotReloadMsg_UpdateType updateType; // 0x20
		::System::Boolean success; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADRESULTMSG_RESET_OFFSET))(this);
		}
	};
}

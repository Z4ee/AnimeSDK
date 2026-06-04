#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DebugShaderVIPMaterialTestMsg_MaterialSource.h"
#include "unitysdk/RPG/CustomRP/DebugShaderVIPMaterialTestMsg_TestMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x18EDEB50)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_READ_OFFSET UNITYSDK_OFFSET(0x18EDEC40)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_RESET_OFFSET UNITYSDK_OFFSET(0x18EDECC0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x18EDEB90)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDECE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderVIPMaterialTestMsg_TypeDefinitionIndex = 35427;

	class DebugShaderVIPMaterialTestMsg : public ::System::Object
	{
	public:
		::System::String* materialName; // 0x10
		::System::String* materialPath; // 0x18
		::RPG::CustomRP::DebugShaderVIPMaterialTestMsg_MaterialSource source; // 0x20
		::RPG::CustomRP::DebugShaderVIPMaterialTestMsg_TestMode mode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSG_RESET_OFFSET))(this);
		}
	};
}

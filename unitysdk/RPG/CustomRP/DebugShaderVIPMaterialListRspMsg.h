#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x18EDE7B0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x18EDE850)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_READ_OFFSET UNITYSDK_OFFSET(0x18EDE980)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_RESET_OFFSET UNITYSDK_OFFSET(0x18EDEAA0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x18EDE890)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDEB40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderVIPMaterialListRspMsg_TypeDefinitionIndex = 35430;

	class DebugShaderVIPMaterialListRspMsg : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* materialNames; // 0x10
		::Il2CppArray<::System::String*>* shaderNames; // 0x18
		::System::Int32 materialCount; // 0x20
		::System::Boolean shaderTestInitialized; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_RESET_OFFSET))(this);
		}

		::System::Void EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTRSPMSG_ENSURECAPACITY_OFFSET))(this, a1);
		}
	};
}

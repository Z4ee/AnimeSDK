#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_6C27481E1C47C2A6_INIT_OFFSET UNITYSDK_OFFSET(0x10A009F0)
#define CLASS_2_6C27481E1C47C2A6_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x10A00AB0)
#define CLASS_2_6C27481E1C47C2A6__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x10A00A70)
#define CLASS_2_6C27481E1C47C2A6__CTOR_OFFSET UNITYSDK_OFFSET(0x10A00B00)
#define CLASS_2_6C27481E1C47C2A6___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10A00B20)
#define CLASS_2_6C27481E1C47C2A6___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x10A00BB0)

inline static constexpr unsigned int Class_2_6C27481E1C47C2A6_TypeDefinitionIndex = 52264;

class Class_2_6C27481E1C47C2A6 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6_INIT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C27481E1C47C2A6___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DynamicTrailModule_Class_1_7EE1B066A3FF5E80; }

#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A697330)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752_METHOD_1_FFBA317F4D1B70EB_OFFSET UNITYSDK_OFFSET(0x1A6969E0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752__CTOR_OFFSET UNITYSDK_OFFSET(0x1A696400)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_Class_1_2FD11D119AC15752_TypeDefinitionIndex = 70409;

	class DynamicTrailModule_Class_1_2FD11D119AC15752 : public ::System::Object
	{
	public:
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* GAOAMKBNDPN; // 0x10
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* EBJKJAGJGPK; // 0x18
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* KIBPKPGDECO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FFBA317F4D1B70EB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752_METHOD_1_FFBA317F4D1B70EB_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_2FD11D119AC15752_METHOD_1_1290EA767C459179_OFFSET))(this);
		}
	};
}

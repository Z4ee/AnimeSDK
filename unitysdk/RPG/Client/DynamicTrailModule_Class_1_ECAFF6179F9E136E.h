#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DynamicTrailModule_Class_1_7EE1B066A3FF5E80; }

#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9527D00)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E_METHOD_1_FF9D70DA28C905A2_OFFSET UNITYSDK_OFFSET(0x95271B0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E__CTOR_OFFSET UNITYSDK_OFFSET(0x9526B10)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_Class_1_ECAFF6179F9E136E_TypeDefinitionIndex = 57680;

	class DynamicTrailModule_Class_1_ECAFF6179F9E136E : public ::System::Object
	{
	public:
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* Field_1_1; // 0x10
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* Field_1_2; // 0x18
		::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* Field_1_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FF9D70DA28C905A2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E_METHOD_1_FF9D70DA28C905A2_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_ECAFF6179F9E136E_METHOD_1_1290EA767C459179_OFFSET))(this);
		}
	};
}

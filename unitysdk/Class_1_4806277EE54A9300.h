#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/Struct_2_5C0B0D7675435A20.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimBaseCameraConfig; }

#define CLASS_1_4806277EE54A9300_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1BF449F0)
#define CLASS_1_4806277EE54A9300_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1BF449A0)
#define CLASS_1_4806277EE54A9300_METHOD_1_FBF589CB9CE54FA8_OFFSET UNITYSDK_OFFSET(0x1BF44960)
#define CLASS_1_4806277EE54A9300__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF44A40)

inline static constexpr unsigned int Class_1_4806277EE54A9300_TypeDefinitionIndex = 40662;

class Class_1_4806277EE54A9300 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimBaseCameraConfig* Field_1_0; // 0x10
	::Struct_2_5C0B0D7675435A20 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4806277EE54A9300__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimCameraPriority Method_1_FBF589CB9CE54FA8()
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4806277EE54A9300_METHOD_1_FBF589CB9CE54FA8_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4806277EE54A9300_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4806277EE54A9300_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};

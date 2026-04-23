#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x9A7E2A0)
#define CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x9A7E2E0)
#define CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9A7E260)
#define CLASS_1_03012F75E773046C_2_METHOD_1_1E578ED319BE3AC6_OFFSET UNITYSDK_OFFSET(0x9A7E250)
#define CLASS_1_03012F75E773046C_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9A7E320)
#define CLASS_1_03012F75E773046C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7E330)

inline static constexpr unsigned int Class_1_03012F75E773046C_2_TypeDefinitionIndex = 66513;

class Class_1_03012F75E773046C_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ElationTimeAtmosphereType Method_1_1E578ED319BE3AC6()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2_METHOD_1_1E578ED319BE3AC6_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

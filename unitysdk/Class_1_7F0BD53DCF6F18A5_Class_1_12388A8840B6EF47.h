#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
namespace System { class Action; }

#define CLASS_1_7F0BD53DCF6F18A5_CLASS_1_12388A8840B6EF47_METHOD_1_DF5453F02AA2AF1E_OFFSET UNITYSDK_OFFSET(0x13AD55F0)
#define CLASS_1_7F0BD53DCF6F18A5_CLASS_1_12388A8840B6EF47__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD55E0)

inline static constexpr unsigned int Class_1_7F0BD53DCF6F18A5_Class_1_12388A8840B6EF47_TypeDefinitionIndex = 49165;

class Class_1_7F0BD53DCF6F18A5_Class_1_12388A8840B6EF47 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_CLASS_1_12388A8840B6EF47__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF5453F02AA2AF1E(::ConfigMainCityObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_CLASS_1_12388A8840B6EF47_METHOD_1_DF5453F02AA2AF1E_OFFSET))(this, a1);
	}
};

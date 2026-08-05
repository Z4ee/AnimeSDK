#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
namespace System { class Action; }

#define CLASS_1_7F0BD53DCF6F18A5_CLASS_1_F0E051088A5A4FA3_METHOD_1_C4104815BD8EDF5D_OFFSET UNITYSDK_OFFSET(0x1870B380)
#define CLASS_1_7F0BD53DCF6F18A5_CLASS_1_F0E051088A5A4FA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1870B370)

inline static constexpr unsigned int Class_1_7F0BD53DCF6F18A5_Class_1_F0E051088A5A4FA3_TypeDefinitionIndex = 63781;

class Class_1_7F0BD53DCF6F18A5_Class_1_F0E051088A5A4FA3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_CLASS_1_F0E051088A5A4FA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C4104815BD8EDF5D(::ConfigMainCityObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_CLASS_1_F0E051088A5A4FA3_METHOD_1_C4104815BD8EDF5D_OFFSET))(this, a1);
	}
};

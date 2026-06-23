#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E98A6D21B6642FAD.h"

class Class_0_16E4307DCC419505_33;
class Class_2_69FE2A2F26EAE95C;
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_2_41463F5363E714C5_METHOD_2_7CDF583A5722841B_OFFSET UNITYSDK_OFFSET(0x1E809320)
#define CLASS_2_41463F5363E714C5_METHOD_2_996B989A23502441_OFFSET UNITYSDK_OFFSET(0x1E809370)
#define CLASS_2_41463F5363E714C5_METHOD_2_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x1E8091A0)
#define CLASS_2_41463F5363E714C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E809120)

inline static constexpr unsigned int Class_2_41463F5363E714C5_TypeDefinitionIndex = 18534;

class Class_2_41463F5363E714C5 : public ::Class_1_E98A6D21B6642FAD
{
public:
	::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Class_2_69FE2A2F26EAE95C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_2_41463F5363E714C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B43DD0430B0FE876(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_2_41463F5363E714C5_METHOD_2_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7CDF583A5722841B(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_2_41463F5363E714C5_METHOD_2_7CDF583A5722841B_OFFSET))(this, a1);
	}

	::System::Void Method_2_996B989A23502441(::Class_0_16E4307DCC419505_33* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41463F5363E714C5_METHOD_2_996B989A23502441_OFFSET))(this, a1, a2);
	}
};

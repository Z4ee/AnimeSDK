#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_B096AF19DEA8BDD2.h"
#include "unitysdk/System/Object.h"

class Class_1_B0877C107BC7F2BF;
class Class_1_FC3A9C07FC781527;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FC3A9C07FC781527_CLASS_1_E79EEA9D8F85EFE8_METHOD_1_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x11315080)
#define CLASS_1_FC3A9C07FC781527_CLASS_1_E79EEA9D8F85EFE8__CTOR_OFFSET UNITYSDK_OFFSET(0x11315070)

inline static constexpr unsigned int Class_1_FC3A9C07FC781527_Class_1_E79EEA9D8F85EFE8_TypeDefinitionIndex = 40675;

class Class_1_FC3A9C07FC781527_Class_1_E79EEA9D8F85EFE8 : public ::System::Object
{
public:
	::Class_1_FC3A9C07FC781527* Field_1_0; // 0x10
	::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x20
	::Class_1_FC3A9C07FC781527_Enum_3_B096AF19DEA8BDD2 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC3A9C07FC781527_CLASS_1_E79EEA9D8F85EFE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CD1A6D1096A6CB7(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_1_FC3A9C07FC781527_CLASS_1_E79EEA9D8F85EFE8_METHOD_1_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}
};

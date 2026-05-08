#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_2;
class Class_2_69FE2A2F26EAE95C;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_E98A6D21B6642FAD_METHOD_1_3258EA3D2E5F2CC1_OFFSET UNITYSDK_OFFSET(0x1BEEABB0)
#define CLASS_1_E98A6D21B6642FAD_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1BEEABA0)
#define CLASS_1_E98A6D21B6642FAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEEAB20)

inline static constexpr unsigned int Class_1_E98A6D21B6642FAD_TypeDefinitionIndex = 9422;

class Class_1_E98A6D21B6642FAD : public ::System::Object
{
public:
	::Class_2_69FE2A2F26EAE95C* Field_1_1; // 0x10
	::System::Func_2<::Class_0_16E4307DCC419505_2*, ::System::Object*>* Field_1_0; // 0x18

	::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Class_2_69FE2A2F26EAE95C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_1_E98A6D21B6642FAD__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_69FE2A2F26EAE95C* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_69FE2A2F26EAE95C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E98A6D21B6642FAD_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Object* Method_1_3258EA3D2E5F2CC1(::Class_0_16E4307DCC419505_2* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_0_16E4307DCC419505_2*))((::PBYTE)hIl2Cpp + CLASS_1_E98A6D21B6642FAD_METHOD_1_3258EA3D2E5F2CC1_OFFSET))(this, a1);
	}
};

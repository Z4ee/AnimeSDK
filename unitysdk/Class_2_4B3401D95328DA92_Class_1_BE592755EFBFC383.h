#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_4B3401D95328DA92;
class Class_3_87492AF8E794E45E_15;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET UNITYSDK_OFFSET(0x12EA5280)
#define CLASS_2_4B3401D95328DA92_CLASS_1_BE592755EFBFC383__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA5270)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_BE592755EFBFC383_TypeDefinitionIndex = 68306;

class Class_2_4B3401D95328DA92_Class_1_BE592755EFBFC383 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_7; // 0x10
	::System::Action* Field_1_6; // 0x18
	::Class_2_4B3401D95328DA92* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_BE592755EFBFC383__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1192BDF8FF0D8F9C(::Class_3_87492AF8E794E45E_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_15*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET))(this, a1);
	}
};

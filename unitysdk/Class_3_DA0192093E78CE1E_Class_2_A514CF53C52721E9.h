#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0_2.h"

class Class_3_DA0192093E78CE1E;
class Class_3_EC25B6E84130E2CA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x178229A0)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17822990)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9__CTOR_OFFSET UNITYSDK_OFFSET(0x17822900)

inline static constexpr unsigned int Class_3_DA0192093E78CE1E_Class_2_A514CF53C52721E9_TypeDefinitionIndex = 89696;

class Class_3_DA0192093E78CE1E_Class_2_A514CF53C52721E9 : public ::Class_1_0F5195356F0210F0_2
{
public:
	::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor(::Class_3_DA0192093E78CE1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA0192093E78CE1E*))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_A514CF53C52721E9_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}
};

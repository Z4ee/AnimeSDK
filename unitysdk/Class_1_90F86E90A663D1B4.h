#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_90F86E90A663D1B4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1416F3E0)
#define CLASS_1_90F86E90A663D1B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1416F3A0)

inline static constexpr unsigned int Class_1_90F86E90A663D1B4_TypeDefinitionIndex = 86267;

class Class_1_90F86E90A663D1B4 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* Field_1_1; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F86E90A663D1B4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F86E90A663D1B4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};

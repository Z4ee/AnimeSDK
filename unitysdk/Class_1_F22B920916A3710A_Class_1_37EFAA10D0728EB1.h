#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_8F063601BC8471E7;

#define CLASS_1_F22B920916A3710A_CLASS_1_37EFAA10D0728EB1_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x1133EBE0)
#define CLASS_1_F22B920916A3710A_CLASS_1_37EFAA10D0728EB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1133ED10)

inline static constexpr unsigned int Class_1_F22B920916A3710A_Class_1_37EFAA10D0728EB1_TypeDefinitionIndex = 52582;

class Class_1_F22B920916A3710A_Class_1_37EFAA10D0728EB1 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_8F063601BC8471E7*>* FrontRoles; // 0x10
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_8F063601BC8471E7*>* BackRoles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_37EFAA10D0728EB1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_37EFAA10D0728EB1_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}
};

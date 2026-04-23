#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_C9A4469080B8F42A;

#define CLASS_1_90E07F539BBA9EB2_CLASS_1_D61246606DA6D5D3_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x12351CB0)
#define CLASS_1_90E07F539BBA9EB2_CLASS_1_D61246606DA6D5D3__CTOR_OFFSET UNITYSDK_OFFSET(0x12351DE0)

inline static constexpr unsigned int Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3_TypeDefinitionIndex = 59621;

class Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_90E07F539BBA9EB2_Class_1_C9A4469080B8F42A*>* FrontRoles; // 0x10
	::Il2CppArray<::Class_1_90E07F539BBA9EB2_Class_1_C9A4469080B8F42A*>* BackRoles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_D61246606DA6D5D3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_D61246606DA6D5D3_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}
};

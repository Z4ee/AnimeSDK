#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_C9A4469080B8F42A;

#define CLASS_1_35769E9BC1F47769_CLASS_1_EA09F20FCF92DD72_METHOD_1_A7677D4433EFAF21_OFFSET UNITYSDK_OFFSET(0x1630E570)
#define CLASS_1_35769E9BC1F47769_CLASS_1_EA09F20FCF92DD72__CTOR_OFFSET UNITYSDK_OFFSET(0x1630E6C0)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72_TypeDefinitionIndex = 61847;

class Class_1_35769E9BC1F47769_Class_1_EA09F20FCF92DD72 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_35769E9BC1F47769_Class_1_C9A4469080B8F42A*>* FrontRoles; // 0x10
	::Il2CppArray<::Class_1_35769E9BC1F47769_Class_1_C9A4469080B8F42A*>* BackRoles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_EA09F20FCF92DD72__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A7677D4433EFAF21(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_EA09F20FCF92DD72_METHOD_1_A7677D4433EFAF21_OFFSET))(this, a1);
	}
};

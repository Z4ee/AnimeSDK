#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_35769E9BC1F47769_CLASS_1_C9A4469080B8F42A__CTOR_OFFSET UNITYSDK_OFFSET(0xB62DE80)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_C9A4469080B8F42A_TypeDefinitionIndex = 64831;

class Class_1_35769E9BC1F47769_Class_1_C9A4469080B8F42A : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x10
	::System::UInt32 RoleID; // 0x18
	::System::Boolean IsCarry; // 0x1C
	::System::UInt32 PosIndex; // 0x20
	::System::UInt32 Star; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_C9A4469080B8F42A__CTOR_OFFSET))(this);
	}
};

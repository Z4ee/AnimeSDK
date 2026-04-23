#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_569E2CC0C0F24F64_CLASS_1_C9A4469080B8F42A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x97ECEF0)

inline static constexpr unsigned int Class_1_569E2CC0C0F24F64_Class_1_C9A4469080B8F42A_1_TypeDefinitionIndex = 59615;

class Class_1_569E2CC0C0F24F64_Class_1_C9A4469080B8F42A_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Equips; // 0x10
	::System::Boolean IsMain; // 0x18
	::System::UInt32 RoleID; // 0x1C
	::System::UInt32 PosIndex; // 0x20
	::System::UInt32 Star; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569E2CC0C0F24F64_CLASS_1_C9A4469080B8F42A_1__CTOR_OFFSET))(this);
	}
};

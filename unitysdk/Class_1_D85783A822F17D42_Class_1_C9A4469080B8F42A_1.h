#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D85783A822F17D42_CLASS_1_C9A4469080B8F42A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83B380)

inline static constexpr unsigned int Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1_TypeDefinitionIndex = 64826;

class Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Equips; // 0x10
	::System::UInt32 RoleID; // 0x18
	::System::UInt32 Star; // 0x1C
	::System::UInt32 PosIndex; // 0x20
	::System::Boolean IsMain; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D85783A822F17D42_CLASS_1_C9A4469080B8F42A_1__CTOR_OFFSET))(this);
	}
};

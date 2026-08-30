#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D85783A822F17D42_CLASS_1_E31A8B64E4DA2485_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDD77940)

inline static constexpr unsigned int Class_1_D85783A822F17D42_Class_1_E31A8B64E4DA2485_1_TypeDefinitionIndex = 64827;

class Class_1_D85783A822F17D42_Class_1_E31A8B64E4DA2485_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x10
	::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x18
	::System::UInt32 RoleID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D85783A822F17D42_CLASS_1_E31A8B64E4DA2485_1__CTOR_OFFSET))(this);
	}
};

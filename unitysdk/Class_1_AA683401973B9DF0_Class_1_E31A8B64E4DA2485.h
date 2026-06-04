#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AA683401973B9DF0_CLASS_1_E31A8B64E4DA2485__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F9C80)

inline static constexpr unsigned int Class_1_AA683401973B9DF0_Class_1_E31A8B64E4DA2485_TypeDefinitionIndex = 60482;

class Class_1_AA683401973B9DF0_Class_1_E31A8B64E4DA2485 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* EquipIDs; // 0x10
	::System::UInt32 Star; // 0x18
	::System::UInt32 Pos; // 0x1C
	::System::UInt32 RoleID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA683401973B9DF0_CLASS_1_E31A8B64E4DA2485__CTOR_OFFSET))(this);
	}
};

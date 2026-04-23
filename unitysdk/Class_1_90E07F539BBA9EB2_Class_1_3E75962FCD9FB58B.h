#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90E07F539BBA9EB2_CLASS_1_3E75962FCD9FB58B__CTOR_OFFSET UNITYSDK_OFFSET(0x12351E40)

inline static constexpr unsigned int Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B_TypeDefinitionIndex = 59619;

class Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x10
	::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x18
	::System::UInt32 EquipIndex; // 0x20
	::System::UInt32 RoleID; // 0x24
	::System::Boolean IsCarry; // 0x28
	::System::UInt32 PosIndex; // 0x2C
	::System::UInt32 Star; // 0x30
	::System::Int32 RecIndex; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_3E75962FCD9FB58B__CTOR_OFFSET))(this);
	}
};

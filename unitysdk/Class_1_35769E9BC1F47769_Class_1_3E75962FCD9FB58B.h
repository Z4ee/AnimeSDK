#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_35769E9BC1F47769_CLASS_1_3E75962FCD9FB58B__CTOR_OFFSET UNITYSDK_OFFSET(0xB62E510)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B_TypeDefinitionIndex = 64830;

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x10
	::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x18
	::System::UInt32 RoleID; // 0x20
	::System::UInt32 Star; // 0x24
	::System::Boolean IsCarry; // 0x28
	::System::UInt32 EquipIndex; // 0x2C
	::System::Int32 RecIndex; // 0x30
	::System::UInt32 PosIndex; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_3E75962FCD9FB58B__CTOR_OFFSET))(this);
	}
};

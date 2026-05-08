#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B897E51F16FDAD6D__CTOR_OFFSET UNITYSDK_OFFSET(0xFF76220)

inline static constexpr unsigned int Class_1_B897E51F16FDAD6D_TypeDefinitionIndex = 38366;

class Class_1_B897E51F16FDAD6D : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_5674E7B417F2830A_1>* Field_1_4; // 0x10
	::Il2CppArray<::Struct_2_5674E7B417F2830A_1>* Field_1_5; // 0x18
	::Il2CppArray<::Struct_2_5674E7B417F2830A_1>* Field_1_6; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Int32 Field_1_3; // 0x30
	::System::Int32 Field_1_2; // 0x34
	::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B897E51F16FDAD6D__CTOR_OFFSET))(this);
	}
};

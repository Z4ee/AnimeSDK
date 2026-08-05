#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/Struct_2_5674E7B417F2830A.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BBF7B11B2CB6EA78__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E4A60)

inline static constexpr unsigned int Class_1_BBF7B11B2CB6EA78_TypeDefinitionIndex = 77212;

class Class_1_BBF7B11B2CB6EA78 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_5674E7B417F2830A>* Field_1_5; // 0x10
	::Il2CppArray<::Struct_2_5674E7B417F2830A>* Field_1_4; // 0x18
	::Il2CppArray<::Struct_2_5674E7B417F2830A>* Field_1_11; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Int32 Field_1_6; // 0x2C
	::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum Field_1_10; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF7B11B2CB6EA78__CTOR_OFFSET))(this);
	}
};

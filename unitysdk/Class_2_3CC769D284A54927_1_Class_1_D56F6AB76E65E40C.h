#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_00FFDC50F7969380.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_1;
class Class_3_5175B904C7D2D4F0_1;

#define CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_METHOD_1_F2CD605D677624EB_OFFSET UNITYSDK_OFFSET(0x16E76800)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E767F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C_TypeDefinitionIndex = 62902;

class Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1* Field_1_0; // 0x10
	::Class_3_5175B904C7D2D4F0_1* Field_1_6; // 0x18
	::System::Single Field_1_7; // 0x20
	::System::Single Field_1_8; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_9; // 0x2C
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_10; // 0x34
	::System::Int32 Field_1_11; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_F2CD605D677624EB(::Class_2_3CC769D284A54927_1_Enum_3_00FFDC50F7969380 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_00FFDC50F7969380))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_METHOD_1_F2CD605D677624EB_OFFSET))(this, a1);
	}
};

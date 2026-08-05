#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31;
class Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798;
class Class_1_F5B35B1B6669CF16;
class Class_3_402121D94A91AFBA;
namespace MoleMole { class TextureSheetData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_263C2CFAE3835C4C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B5B50)
#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_263C2CFAE3835C4C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_263C2CFAE3835C4C_TypeDefinitionIndex = 67043;

struct alignas(8) Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_263C2CFAE3835C4C
{
	::Class_1_F5B35B1B6669CF16* Field_2_5; // 0x10
	::MoleMole::TextureSheetData* Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::UniTask Field_2_9; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x40
	::Class_3_402121D94A91AFBA* Field_2_11; // 0x50
	::Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31* Field_2_6; // 0x58
	::Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798* Field_2_4; // 0x60
	::System::Int32 Field_2_0; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_263C2CFAE3835C4C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_263C2CFAE3835C4C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};

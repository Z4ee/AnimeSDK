#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31;
class Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798;
class Class_1_F5B35B1B6669CF16;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_F2CE8ABEA740BD4F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x752100)
#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_F2CE8ABEA740BD4F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_F2CE8ABEA740BD4F_TypeDefinitionIndex = 76278;

struct alignas(8) Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_F2CE8ABEA740BD4F
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_F5B35B1B6669CF16* Field_2_7; // 0x20
	::Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31* Field_2_4; // 0x28
	::Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::MoleMole::HollowChessboard::GeometryHeightType Field_2_6; // 0x4C
	::System::Boolean Field_2_3; // 0x50
	::System::Boolean Field_2_5; // 0x51

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_F2CE8ABEA740BD4F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_F2CE8ABEA740BD4F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};

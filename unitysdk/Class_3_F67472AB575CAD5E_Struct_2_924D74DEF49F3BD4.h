#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_5203B7D603EEC4F6;
class Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_F67472AB575CAD5E_STRUCT_2_924D74DEF49F3BD4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x775B80)
#define CLASS_3_F67472AB575CAD5E_STRUCT_2_924D74DEF49F3BD4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Struct_2_924D74DEF49F3BD4_TypeDefinitionIndex = 44213;

struct alignas(8) Class_3_F67472AB575CAD5E_Struct_2_924D74DEF49F3BD4
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::Battle::Entity*> Field_2_2; // 0x10
	::Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x30
	::Class_3_5203B7D603EEC4F6* Field_2_1; // 0x40
	::System::UInt32 Field_2_0; // 0x48
	::System::Int32 Field_2_3; // 0x4C
	::System::Single Field_2_5; // 0x50
	::UnityEngine::Vector3 Field_2_6; // 0x54
	::System::UInt32 Field_2_7; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_924D74DEF49F3BD4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_924D74DEF49F3BD4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B5C60)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_76FE475E84A3BE1D_TypeDefinitionIndex = 54281;

struct alignas(8) Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_76FE475E84A3BE1D
{
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x18
	::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6* Field_2_6; // 0x28
	::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D Field_2_19; // 0x30
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_2_5; // 0xB0
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_22; // 0x100
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::System::Int32>*> Field_2_15; // 0x110
	::System::Boolean Field_2_4; // 0x120
	::System::Boolean Field_2_9; // 0x121
	::System::Boolean Field_2_17; // 0x122
	::UnityEngine::Vector3 Field_2_10; // 0x124
	::System::Int32 Field_2_0; // 0x130
	::System::Int32 Field_2_23; // 0x134
	::System::Int32 Field_2_12; // 0x138
	::System::Int32 Field_2_11; // 0x13C
	::System::Int32 Field_2_13; // 0x140
	::UnityEngine::Vector3 Field_2_8; // 0x144
	::System::Single Field_2_16; // 0x150
	::System::Int32 Field_2_18; // 0x154

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};

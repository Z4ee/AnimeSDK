#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_5303376718342F72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C11B0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_5303376718342F72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_5303376718342F72_TypeDefinitionIndex = 54278;

struct alignas(8) Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_5303376718342F72
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x40
	::System::Single Field_2_4; // 0x48
	::System::Int32 Field_2_1; // 0x4C
	::System::Single Field_2_10; // 0x50
	::UnityEngine::Vector3 Field_2_7; // 0x54
	::System::Int32 Field_2_11; // 0x60
	::UnityEngine::Vector3 Field_2_6; // 0x64
	::System::Single Field_2_5; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_5303376718342F72_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_STRUCT_2_5303376718342F72_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};

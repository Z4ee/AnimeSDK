#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_1C7B18C229C14996_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x12B84740)
#define CLASS_1_1C7B18C229C14996_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x12B84940)
#define CLASS_1_1C7B18C229C14996_METHOD_1_9E8B6996C5AC2675_OFFSET UNITYSDK_OFFSET(0x12B847F0)
#define CLASS_1_1C7B18C229C14996_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x12B84B70)
#define CLASS_1_1C7B18C229C14996_METHOD_1_CCF79B4DD41D62C3_OFFSET UNITYSDK_OFFSET(0x12B84CC0)
#define CLASS_1_1C7B18C229C14996_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x12B849D0)
#define CLASS_1_1C7B18C229C14996__CTOR_OFFSET UNITYSDK_OFFSET(0x12B84730)

inline static constexpr unsigned int Class_1_1C7B18C229C14996_TypeDefinitionIndex = 75288;

class Class_1_1C7B18C229C14996 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::System::Action_2<::System::Boolean, ::System::Int32>* Field_1_1; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_1_9E8B6996C5AC2675(::System::Action_2<::System::Boolean, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_9E8B6996C5AC2675_OFFSET))(this, a1);
	}

	::System::Void Method_1_286570692E8A7912()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_286570692E8A7912_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_CCF79B4DD41D62C3(::System::Action_2<::System::Boolean, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1C7B18C229C14996_METHOD_1_CCF79B4DD41D62C3_OFFSET))(this, a1);
	}
};

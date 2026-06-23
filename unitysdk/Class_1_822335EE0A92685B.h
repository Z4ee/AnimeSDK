#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_822335EE0A92685B_METHOD_1_36445590275306F5_OFFSET UNITYSDK_OFFSET(0x17FCDC30)
#define CLASS_1_822335EE0A92685B_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x17FCE680)
#define CLASS_1_822335EE0A92685B_METHOD_1_8C7B7BC2C698AF35_OFFSET UNITYSDK_OFFSET(0x17FCDAD0)
#define CLASS_1_822335EE0A92685B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17FCDB90)
#define CLASS_1_822335EE0A92685B_METHOD_1_A7FFC3F344999C0B_OFFSET UNITYSDK_OFFSET(0x17FCDE60)
#define CLASS_1_822335EE0A92685B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17FCE040)
#define CLASS_1_822335EE0A92685B_METHOD_1_B97AD46BDF8DF4C8_OFFSET UNITYSDK_OFFSET(0x17FCDCE0)
#define CLASS_1_822335EE0A92685B_METHOD_1_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x17FCDF80)
#define CLASS_1_822335EE0A92685B_METHOD_1_E6F5FAAF399B22D6_OFFSET UNITYSDK_OFFSET(0x17FCE140)
#define CLASS_1_822335EE0A92685B_METHOD_1_EA566673A7F8329E_OFFSET UNITYSDK_OFFSET(0x17FCE420)
#define CLASS_1_822335EE0A92685B_METHOD_1_FB042E51A2A312BC_OFFSET UNITYSDK_OFFSET(0x17FCE0D0)
#define CLASS_1_822335EE0A92685B__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCDAC0)

inline static constexpr unsigned int Class_1_822335EE0A92685B_TypeDefinitionIndex = 74168;

class Class_1_822335EE0A92685B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* Field_1_2; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B__CTOR_OFFSET))(this);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_8C7B7BC2C698AF35(::System::Collections::Generic::IEnumerator_1<::System::Single>* a1)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_8C7B7BC2C698AF35_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_36445590275306F5(::Foundation::Coroutine::CoroutineHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_36445590275306F5_OFFSET))(this, a1);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_B97AD46BDF8DF4C8(::System::Single a1, ::System::Action* a2, ::Foundation::Coroutine::Segment a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_B97AD46BDF8DF4C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* Method_1_A7FFC3F344999C0B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_A7FFC3F344999C0B_OFFSET))(this);
	}

	::System::Void Method_1_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_FB042E51A2A312BC(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_FB042E51A2A312BC_OFFSET))(this, a1, a2);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_E6F5FAAF399B22D6(::System::Nullable_1<::System::Int32> a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4, ::System::Boolean a5)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_E6F5FAAF399B22D6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EA566673A7F8329E(::Foundation::Coroutine::CoroutineHandle a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_EA566673A7F8329E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822335EE0A92685B_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};

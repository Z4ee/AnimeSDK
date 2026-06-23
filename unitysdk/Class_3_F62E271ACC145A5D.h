#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F5EF0A4754477DAE.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_769471637ABAF003;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_F62E271ACC145A5D_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13D26000)
#define CLASS_3_F62E271ACC145A5D_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13D25F00)
#define CLASS_3_F62E271ACC145A5D__CTOR_OFFSET UNITYSDK_OFFSET(0x13D25E40)

inline static constexpr unsigned int Class_3_F62E271ACC145A5D_TypeDefinitionIndex = 64504;

class Class_3_F62E271ACC145A5D : public ::Class_2_F5EF0A4754477DAE
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_3_0; // 0x40

	::System::Void _ctor(::Class_1_769471637ABAF003* a1, ::System::Threading::CancellationToken a2, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* a3, ::System::Func_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_769471637ABAF003*, ::System::Threading::CancellationToken, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_F62E271ACC145A5D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F62E271ACC145A5D_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F62E271ACC145A5D_METHOD_3_9681042564541CD6_OFFSET))(this);
	}
};

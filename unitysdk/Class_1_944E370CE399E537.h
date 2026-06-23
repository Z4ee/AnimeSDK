#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_BF85135934DD45B5;
class Class_3_8840398725162854_1;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_944E370CE399E537_METHOD_1_473C67C87378873A_OFFSET UNITYSDK_OFFSET(0x113B0140)

inline static constexpr unsigned int Class_1_944E370CE399E537_TypeDefinitionIndex = 54478;

class Class_1_944E370CE399E537 : public ::System::Object
{
public:
	static ::Class_3_8840398725162854_1* Method_1_473C67C87378873A(::Class_1_BF85135934DD45B5* a1, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* a2, ::System::Action* a3)
	{
		return ((::Class_3_8840398725162854_1*(*)(::Class_1_BF85135934DD45B5*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537_METHOD_1_473C67C87378873A_OFFSET))(a1, a2, a3);
	}
};

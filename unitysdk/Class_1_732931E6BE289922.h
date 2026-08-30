#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace R3 { template <typename T> class Observable_1; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3, typename T4> class UnityEvent_4; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityEvent_3; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityEvent_2; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define CLASS_1_732931E6BE289922_METHOD_1_3C76C5DCEE8C8595_OFFSET UNITYSDK_OFFSET(0xD254950)

inline static constexpr unsigned int Class_1_732931E6BE289922_TypeDefinitionIndex = 50309;

class Class_1_732931E6BE289922 : public ::System::Object
{
public:
	static ::R3::Observable_1<::R3::Unit>* Method_1_3C76C5DCEE8C8595(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
	{
		return ((::R3::Observable_1<::R3::Unit>*(*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922_METHOD_1_3C76C5DCEE8C8595_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> class Func_11; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class Action_10; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class Func_10; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Action_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_DELEGATEX_CALLSAFELY_OFFSET UNITYSDK_OFFSET(0x1BAE5580)
#define FOUNDATION_DELEGATEX_INVOKESAFELY_1_OFFSET UNITYSDK_OFFSET(0x1BAE5400)
#define FOUNDATION_DELEGATEX_INVOKESAFELY_OFFSET UNITYSDK_OFFSET(0x1BAE5240)

namespace Foundation
{
	inline static constexpr unsigned int DelegateX_TypeDefinitionIndex = 7779;

	class DelegateX : public ::System::Object
	{
	public:
		static ::System::Void InvokeSafely(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_INVOKESAFELY_OFFSET))(action);
		}

		static ::System::Void InvokeSafely_1(::System::Action_1<::System::Object*>* action, ::System::Object* Parmas)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_INVOKESAFELY_1_OFFSET))(action, Parmas);
		}

		static ::System::Void CallSafely(::System::Action* func)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_CALLSAFELY_OFFSET))(func);
		}
	};
}

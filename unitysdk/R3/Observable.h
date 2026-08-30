#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define R3_OBSERVABLE_RETURN_OFFSET UNITYSDK_OFFSET(0x1BF17530)

namespace R3
{
	inline static constexpr unsigned int Observable_TypeDefinitionIndex = 35230;

	class Observable : public ::System::Object
	{
	public:
		static ::R3::Observable_1<::System::Boolean>* Return(::System::Boolean a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + R3_OBSERVABLE_RETURN_OFFSET))(a1);
		}
	};
}

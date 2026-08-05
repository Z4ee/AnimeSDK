#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_02919382EEDEBC32_METHOD_1_7CDFD327BC2D6B41_OFFSET UNITYSDK_OFFSET(0x1814F720)

inline static constexpr unsigned int Class_1_02919382EEDEBC32_TypeDefinitionIndex = 44052;

class Class_1_02919382EEDEBC32 : public ::System::Object
{
public:
	static ::System::String* Method_1_7CDFD327BC2D6B41(::System::Collections::IEnumerable* a1)
	{
		return ((::System::String*(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_02919382EEDEBC32_METHOD_1_7CDFD327BC2D6B41_OFFSET))(a1);
	}
};

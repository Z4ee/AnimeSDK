#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_8D06FCA347C65CA3_METHOD_1_CE21B2676467522C_OFFSET UNITYSDK_OFFSET(0x13B81BB0)

inline static constexpr unsigned int Class_1_8D06FCA347C65CA3_TypeDefinitionIndex = 71032;

class Class_1_8D06FCA347C65CA3 : public ::System::Object
{
public:
	static ::System::String* Method_1_CE21B2676467522C(::System::Collections::IEnumerable* a1)
	{
		return ((::System::String*(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_8D06FCA347C65CA3_METHOD_1_CE21B2676467522C_OFFSET))(a1);
	}
};

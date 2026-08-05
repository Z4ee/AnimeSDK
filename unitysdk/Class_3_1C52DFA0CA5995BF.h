#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1C52DFA0CA5995BF_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x12A6C510)
#define CLASS_3_1C52DFA0CA5995BF_METHOD_3_C4425D7230845246_OFFSET UNITYSDK_OFFSET(0x12A6C740)
#define CLASS_3_1C52DFA0CA5995BF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A6C6B0)
#define CLASS_3_1C52DFA0CA5995BF__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6C4D0)

inline static constexpr unsigned int Class_3_1C52DFA0CA5995BF_TypeDefinitionIndex = 51328;

class Class_3_1C52DFA0CA5995BF : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C4425D7230845246(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_METHOD_3_C4425D7230845246_OFFSET))(this, a1);
	}
};

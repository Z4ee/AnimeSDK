#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_00CB503A02FBE2AB_OFFSET UNITYSDK_OFFSET(0x172616E0)
#define CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17261540)
#define CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17261730)
#define CLASS_3_1C52DFA0CA5995BF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17261500)

inline static constexpr unsigned int Class_3_1C52DFA0CA5995BF_3_TypeDefinitionIndex = 61953;

class Class_3_1C52DFA0CA5995BF_3 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_00CB503A02FBE2AB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_00CB503A02FBE2AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C52DFA0CA5995BF_3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_A540129706C5FCD7_METHOD_2_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x12B3A580)
#define CLASS_2_A540129706C5FCD7__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3A460)

inline static constexpr unsigned int Class_2_A540129706C5FCD7_TypeDefinitionIndex = 72661;

class Class_2_A540129706C5FCD7 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::Int64 Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A540129706C5FCD7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A540129706C5FCD7_METHOD_2_1E1FFD875CA8014A_OFFSET))(this);
	}
};

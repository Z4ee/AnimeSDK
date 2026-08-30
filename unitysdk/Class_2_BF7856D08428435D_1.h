#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_BF7856D08428435D_1_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17BD96C0)
#define CLASS_2_BF7856D08428435D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD9410)

inline static constexpr unsigned int Class_2_BF7856D08428435D_1_TypeDefinitionIndex = 80905;

class Class_2_BF7856D08428435D_1 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* IIHFKAGKEMC; // 0x20
	::System::Boolean EPCOMCNJFBN; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BF7856D08428435D_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF7856D08428435D_1_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}
};

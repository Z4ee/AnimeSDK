#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B_METHOD_1_BB3239127671D3A6_OFFSET UNITYSDK_OFFSET(0x1F9BA950)
#define CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B_METHOD_1_C2FAD0718FF403ED_OFFSET UNITYSDK_OFFSET(0x1F9BAB80)
#define CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BACF0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_6_Class_1_F6FF6DB83145861B_TypeDefinitionIndex = 28839;

class Class_1_43BD383C98B4C0C5_6_Class_1_F6FF6DB83145861B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_C2FAD0718FF403ED(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B_METHOD_1_C2FAD0718FF403ED_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_BB3239127671D3A6(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F6FF6DB83145861B_METHOD_1_BB3239127671D3A6_OFFSET))(a1);
	}
};

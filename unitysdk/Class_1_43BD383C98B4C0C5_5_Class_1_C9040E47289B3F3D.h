#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D_METHOD_1_D9B17012A0056E12_OFFSET UNITYSDK_OFFSET(0x1E5AF320)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D_METHOD_1_E5CB4D3372A5294B_OFFSET UNITYSDK_OFFSET(0x1E5AF1A0)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF490)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_5_Class_1_C9040E47289B3F3D_TypeDefinitionIndex = 28199;

class Class_1_43BD383C98B4C0C5_5_Class_1_C9040E47289B3F3D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_D9B17012A0056E12(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D_METHOD_1_D9B17012A0056E12_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_E5CB4D3372A5294B(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_C9040E47289B3F3D_METHOD_1_E5CB4D3372A5294B_OFFSET))(a1);
	}
};

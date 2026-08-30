#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_0148C27B3A598FA0_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB443DD0)
#define CLASS_2_0148C27B3A598FA0__CTOR_OFFSET UNITYSDK_OFFSET(0xB443B10)

inline static constexpr unsigned int Class_2_0148C27B3A598FA0_TypeDefinitionIndex = 80911;

class Class_2_0148C27B3A598FA0 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* GKHIHPGCLIK; // 0x20
	::System::Type* EPGPJMHNBON; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_0148C27B3A598FA0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0148C27B3A598FA0_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}
};

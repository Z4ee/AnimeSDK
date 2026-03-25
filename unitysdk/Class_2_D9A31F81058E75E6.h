#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_D9A31F81058E75E6_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1105DD60)
#define CLASS_2_D9A31F81058E75E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1105DC50)

inline static constexpr unsigned int Class_2_D9A31F81058E75E6_TypeDefinitionIndex = 64597;

class Class_2_D9A31F81058E75E6 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int64 Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_D9A31F81058E75E6__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9A31F81058E75E6_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}
};

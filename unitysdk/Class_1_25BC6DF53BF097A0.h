#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_25BC6DF53BF097A0_METHOD_1_C31DA22DE1BB25C5_OFFSET UNITYSDK_OFFSET(0x17BDD930)
#define CLASS_1_25BC6DF53BF097A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BDDA60)

inline static constexpr unsigned int Class_1_25BC6DF53BF097A0_TypeDefinitionIndex = 34596;

class Class_1_25BC6DF53BF097A0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25BC6DF53BF097A0_TypeDefinitionIndex)->GetStaticField(0x69F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25BC6DF53BF097A0__CCTOR_OFFSET))();
	}

	static ::System::Object* Method_1_C31DA22DE1BB25C5(::System::RuntimeTypeHandle a1)
	{
		return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_25BC6DF53BF097A0_METHOD_1_C31DA22DE1BB25C5_OFFSET))(a1);
	}
};

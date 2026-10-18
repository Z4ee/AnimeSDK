#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF8B05AA8A133584_METHOD_1_B553340F060E5AE1_OFFSET UNITYSDK_OFFSET(0xB486D40)
#define CLASS_1_CF8B05AA8A133584__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4756B0)

inline static constexpr unsigned int Class_1_CF8B05AA8A133584_TypeDefinitionIndex = 59293;

class Class_1_CF8B05AA8A133584 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>** StaticGet_EPFCOLIMEMM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF8B05AA8A133584_TypeDefinitionIndex)->GetStaticField(0xEB60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF8B05AA8A133584__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B553340F060E5AE1(::System::RuntimeTypeHandle a1, ::System::UInt16& a2)
	{
		return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_CF8B05AA8A133584_METHOD_1_B553340F060E5AE1_OFFSET))(a1, a2);
	}
};

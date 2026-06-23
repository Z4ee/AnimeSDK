#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8D2833B9DD6E77E4_METHOD_1_035FB05768996FEB_OFFSET UNITYSDK_OFFSET(0x12E2E170)
#define CLASS_1_8D2833B9DD6E77E4_METHOD_1_162A8F772A244D6D_OFFSET UNITYSDK_OFFSET(0x12E2E0A0)
#define CLASS_1_8D2833B9DD6E77E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E2E040)

inline static constexpr unsigned int Class_1_8D2833B9DD6E77E4_TypeDefinitionIndex = 85231;

class Class_1_8D2833B9DD6E77E4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D2833B9DD6E77E4_TypeDefinitionIndex)->GetStaticField(0x48FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D2833B9DD6E77E4__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_162A8F772A244D6D(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D2833B9DD6E77E4_METHOD_1_162A8F772A244D6D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_035FB05768996FEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D2833B9DD6E77E4_METHOD_1_035FB05768996FEB_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3C4AE27582164C41_Struct_2_BBD456EBC9087BC2_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3C4AE27582164C41_METHOD_1_354E246A7CD25EAC_OFFSET UNITYSDK_OFFSET(0xCD1C560)
#define CLASS_1_3C4AE27582164C41__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD1C770)

inline static constexpr unsigned int Class_1_3C4AE27582164C41_TypeDefinitionIndex = 50044;

class Class_1_3C4AE27582164C41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C4AE27582164C41_Struct_2_BBD456EBC9087BC2_2>** StaticGet_HDAGADJGEKF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C4AE27582164C41_Struct_2_BBD456EBC9087BC2_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C4AE27582164C41_TypeDefinitionIndex)->GetStaticField(0x5E9A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C4AE27582164C41__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_354E246A7CD25EAC(::System::String* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3C4AE27582164C41_METHOD_1_354E246A7CD25EAC_OFFSET))(a1, a2, a3);
	}
};

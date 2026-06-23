#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63D476C405CEAF7E_2.h"
#include "unitysdk/System/Object.h"

class Class_1_C9FCD193B2E091DD;
class Class_1_D375C91CCE5D3999;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_958C76D2A7307F68__CCTOR_OFFSET UNITYSDK_OFFSET(0x190727D0)

inline static constexpr unsigned int Class_1_958C76D2A7307F68_TypeDefinitionIndex = 45360;

class Class_1_958C76D2A7307F68 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_63D476C405CEAF7E_2, ::System::Func_3<::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*, ::Class_1_C9FCD193B2E091DD*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_63D476C405CEAF7E_2, ::System::Func_3<::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*, ::Class_1_C9FCD193B2E091DD*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_958C76D2A7307F68_TypeDefinitionIndex)->GetStaticField(0x2BE20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_958C76D2A7307F68__CCTOR_OFFSET))();
	}
};

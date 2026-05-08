#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class CancellationTokenSource; }

inline static constexpr unsigned int Class_1_27728F9F196E6352_TypeDefinitionIndex = 52887;

class Class_1_27728F9F196E6352 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::CancellationTokenSource*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::CancellationTokenSource*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27728F9F196E6352_TypeDefinitionIndex)->GetStaticField(0x42F90);
	}
};

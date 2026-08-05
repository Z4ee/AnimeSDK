#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F933EDA6A92EC609_Enum_3_7C9BB6787F559CBC.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F933EDA6A92EC609_METHOD_1_D9260BEA40A3C3D6_OFFSET UNITYSDK_OFFSET(0x13783440)
#define CLASS_1_F933EDA6A92EC609__CCTOR_OFFSET UNITYSDK_OFFSET(0x13782B40)

inline static constexpr unsigned int Class_1_F933EDA6A92EC609_TypeDefinitionIndex = 66709;

class Class_1_F933EDA6A92EC609 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F933EDA6A92EC609_TypeDefinitionIndex)->GetStaticField(0x2F390);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F933EDA6A92EC609_TypeDefinitionIndex)->GetStaticField(0x2F398);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_F933EDA6A92EC609_Enum_3_7C9BB6787F559CBC>* Method_1_D9260BEA40A3C3D6()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F933EDA6A92EC609_Enum_3_7C9BB6787F559CBC>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609_METHOD_1_D9260BEA40A3C3D6_OFFSET))();
	}
};

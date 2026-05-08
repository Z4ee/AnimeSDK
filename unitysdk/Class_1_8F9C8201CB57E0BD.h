#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F9C8201CB57E0BD_METHOD_1_D9260BEA40A3C3D6_OFFSET UNITYSDK_OFFSET(0x122808C0)
#define CLASS_1_8F9C8201CB57E0BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12280080)

inline static constexpr unsigned int Class_1_8F9C8201CB57E0BD_TypeDefinitionIndex = 68290;

class Class_1_8F9C8201CB57E0BD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F9C8201CB57E0BD_TypeDefinitionIndex)->GetStaticField(0x30E20);
	}
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F9C8201CB57E0BD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC>* Method_1_D9260BEA40A3C3D6()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F9C8201CB57E0BD_METHOD_1_D9260BEA40A3C3D6_OFFSET))();
	}
};

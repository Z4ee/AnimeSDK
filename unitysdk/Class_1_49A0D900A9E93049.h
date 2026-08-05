#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D6975E78EC694A05.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_49A0D900A9E93049_METHOD_1_F9C12B5E2F96E1FC_OFFSET UNITYSDK_OFFSET(0x1F30F1A0)
#define CLASS_1_49A0D900A9E93049__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F30E900)

inline static constexpr unsigned int Class_1_49A0D900A9E93049_TypeDefinitionIndex = 94897;

class Class_1_49A0D900A9E93049 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_D6975E78EC694A05, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_D6975E78EC694A05, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49A0D900A9E93049_TypeDefinitionIndex)->GetStaticField(0x527E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49A0D900A9E93049__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_F9C12B5E2F96E1FC(::Enum_3_D6975E78EC694A05 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Enum_3_D6975E78EC694A05, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49A0D900A9E93049_METHOD_1_F9C12B5E2F96E1FC_OFFSET))(a1, a2);
	}
};

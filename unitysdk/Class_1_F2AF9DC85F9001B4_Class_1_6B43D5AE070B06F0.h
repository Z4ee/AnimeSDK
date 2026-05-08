#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0_METHOD_1_0FBE20CF97C2DC7A_OFFSET UNITYSDK_OFFSET(0x1B5F0C40)
#define CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0_METHOD_1_58B085AB23218417_OFFSET UNITYSDK_OFFSET(0x1B5F1070)
#define CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5F0FD0)

inline static constexpr unsigned int Class_1_F2AF9DC85F9001B4_Class_1_6B43D5AE070B06F0_TypeDefinitionIndex = 9386;

class Class_1_F2AF9DC85F9001B4_Class_1_6B43D5AE070B06F0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2AF9DC85F9001B4_Class_1_6B43D5AE070B06F0_TypeDefinitionIndex)->GetStaticField(0x8650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_0FBE20CF97C2DC7A(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0_METHOD_1_0FBE20CF97C2DC7A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* Method_1_58B085AB23218417(::System::Type* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F2AF9DC85F9001B4_CLASS_1_6B43D5AE070B06F0_METHOD_1_58B085AB23218417_OFFSET))(a1);
	}
};

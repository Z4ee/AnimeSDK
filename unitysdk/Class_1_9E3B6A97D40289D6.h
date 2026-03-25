#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E3B6A97D40289D6_Class_1_5A8B023293F69255;
class Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4;
class Class_1_F84A89D9E3CCB841;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E3B6A97D40289D6_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xE47F0B0)
#define CLASS_1_9E3B6A97D40289D6_METHOD_1_5E56CCE1521B1C2E_OFFSET UNITYSDK_OFFSET(0xE47F480)
#define CLASS_1_9E3B6A97D40289D6_METHOD_1_FFD7F21F32077B59_OFFSET UNITYSDK_OFFSET(0xE47FDC0)
#define CLASS_1_9E3B6A97D40289D6__CCTOR_OFFSET UNITYSDK_OFFSET(0xE47FF10)

inline static constexpr unsigned int Class_1_9E3B6A97D40289D6_TypeDefinitionIndex = 56622;

class Class_1_9E3B6A97D40289D6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_9E3B6A97D40289D6_Class_1_5A8B023293F69255*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_9E3B6A97D40289D6_Class_1_5A8B023293F69255*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3B6A97D40289D6_TypeDefinitionIndex)->GetStaticField(0x47F20);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F84A89D9E3CCB841*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F84A89D9E3CCB841*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3B6A97D40289D6_TypeDefinitionIndex)->GetStaticField(0x47F28);
	}
	static ::System::Collections::Generic::List_1<::Class_1_F84A89D9E3CCB841*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_F84A89D9E3CCB841*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3B6A97D40289D6_TypeDefinitionIndex)->GetStaticField(0x47F30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_METHOD_1_4D2A473556700CDC_OFFSET))();
	}

	static ::System::Void Method_1_5E56CCE1521B1C2E(::System::String* a1, ::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_METHOD_1_5E56CCE1521B1C2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFD7F21F32077B59(::System::String* a1, ::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_METHOD_1_FFD7F21F32077B59_OFFSET))(a1, a2);
	}
};

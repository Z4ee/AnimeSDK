#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D3B32792E0DA71CB_Class_1_04A718CFB2B0DB18_25;
class Class_2_78783A73BC2E7725;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3B32792E0DA71CB_METHOD_1_817ADB949107EF96_OFFSET UNITYSDK_OFFSET(0x126DFEB0)
#define CLASS_1_D3B32792E0DA71CB_METHOD_1_BB229B22BAE508B3_OFFSET UNITYSDK_OFFSET(0x126DF900)
#define CLASS_1_D3B32792E0DA71CB_METHOD_1_BB255A49C961DD32_OFFSET UNITYSDK_OFFSET(0x126DF3A0)
#define CLASS_1_D3B32792E0DA71CB_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x126DFA60)
#define CLASS_1_D3B32792E0DA71CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x126DF310)

inline static constexpr unsigned int Class_1_D3B32792E0DA71CB_TypeDefinitionIndex = 84627;

class Class_1_D3B32792E0DA71CB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_D3B32792E0DA71CB_Class_1_04A718CFB2B0DB18_25*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_D3B32792E0DA71CB_Class_1_04A718CFB2B0DB18_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3B32792E0DA71CB_TypeDefinitionIndex)->GetStaticField(0x4F2B0);
	}
	static ::Class_2_78783A73BC2E7725** StaticGet_Field_1_6()
	{
		return (::Class_2_78783A73BC2E7725**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3B32792E0DA71CB_TypeDefinitionIndex)->GetStaticField(0x4F2B8);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3B32792E0DA71CB_TypeDefinitionIndex)->GetStaticField(0x123F0);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3B32792E0DA71CB_TypeDefinitionIndex)->GetStaticField(0x123F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3B32792E0DA71CB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_BB255A49C961DD32(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D3B32792E0DA71CB_METHOD_1_BB255A49C961DD32_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3B32792E0DA71CB_METHOD_1_F7300E87EC49A206_OFFSET))();
	}

	static ::System::Int32 Method_1_BB229B22BAE508B3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D3B32792E0DA71CB_METHOD_1_BB229B22BAE508B3_OFFSET))(a1);
	}

	static ::System::Void Method_1_817ADB949107EF96(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D3B32792E0DA71CB_METHOD_1_817ADB949107EF96_OFFSET))(a1);
	}
};

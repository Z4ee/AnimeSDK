#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5EF6FA78DF0E25E3.h"
#include "unitysdk/Struct_2_774AE34007386904.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_983;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_297D285210884BFF_METHOD_1_2CE610DEBDA74759_OFFSET UNITYSDK_OFFSET(0x19557CC0)
#define CLASS_1_297D285210884BFF_METHOD_1_411728CF8A1D1FDD_OFFSET UNITYSDK_OFFSET(0x19557710)
#define CLASS_1_297D285210884BFF_METHOD_1_81BDADE0FA03E483_OFFSET UNITYSDK_OFFSET(0x19557F60)
#define CLASS_1_297D285210884BFF_METHOD_1_868C8961923C85B9_OFFSET UNITYSDK_OFFSET(0x19558520)
#define CLASS_1_297D285210884BFF_METHOD_1_8BF747156A8F6A38_OFFSET UNITYSDK_OFFSET(0x19558290)
#define CLASS_1_297D285210884BFF_METHOD_1_B87453CBBBC927B3_OFFSET UNITYSDK_OFFSET(0x19557A50)

inline static constexpr unsigned int Class_1_297D285210884BFF_TypeDefinitionIndex = 56294;

class Class_1_297D285210884BFF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_983*>* Method_1_411728CF8A1D1FDD(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_983*>*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_411728CF8A1D1FDD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B87453CBBBC927B3(::System::Int32 a1, ::Struct_2_5EF6FA78DF0E25E3& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Struct_2_5EF6FA78DF0E25E3&))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_B87453CBBBC927B3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_2CE610DEBDA74759(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_2CE610DEBDA74759_OFFSET))(a1);
	}

	static ::System::Void Method_1_81BDADE0FA03E483(::System::Int32 a1, ::Struct_2_774AE34007386904& a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Struct_2_774AE34007386904&))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_81BDADE0FA03E483_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8BF747156A8F6A38(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_8BF747156A8F6A38_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_868C8961923C85B9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_297D285210884BFF_METHOD_1_868C8961923C85B9_OFFSET))(a1);
	}
};

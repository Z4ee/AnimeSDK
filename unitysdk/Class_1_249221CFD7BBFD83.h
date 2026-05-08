#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DF72C89EA582800B.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_249221CFD7BBFD83_METHOD_1_054781FCF30CE949_OFFSET UNITYSDK_OFFSET(0x138C4170)
#define CLASS_1_249221CFD7BBFD83_METHOD_1_1FABD2A627FD63DF_OFFSET UNITYSDK_OFFSET(0x138C4250)
#define CLASS_1_249221CFD7BBFD83_METHOD_1_553B00FA06A58E4D_OFFSET UNITYSDK_OFFSET(0x138C40C0)
#define CLASS_1_249221CFD7BBFD83_METHOD_1_964A321E1F2846D1_OFFSET UNITYSDK_OFFSET(0x138C3DF0)
#define CLASS_1_249221CFD7BBFD83_METHOD_1_D371E62FBDD261B1_OFFSET UNITYSDK_OFFSET(0x138C4010)
#define CLASS_1_249221CFD7BBFD83__CCTOR_OFFSET UNITYSDK_OFFSET(0x138C3D50)

inline static constexpr unsigned int Class_1_249221CFD7BBFD83_TypeDefinitionIndex = 44227;

class Class_1_249221CFD7BBFD83 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DF72C89EA582800B, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DF72C89EA582800B, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_249221CFD7BBFD83_TypeDefinitionIndex)->GetStaticField(0x40F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_964A321E1F2846D1(::Enum_3_DF72C89EA582800B a1)
	{
		return ((::System::String*(*)(::Enum_3_DF72C89EA582800B))((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83_METHOD_1_964A321E1F2846D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D371E62FBDD261B1(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468* a1, ::Enum_3_DF72C89EA582800B a2, ::System::Object*& a3)
	{
		return ((::System::Boolean(*)(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468*, ::Enum_3_DF72C89EA582800B, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83_METHOD_1_D371E62FBDD261B1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_553B00FA06A58E4D(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468* a1, ::Enum_3_DF72C89EA582800B a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Boolean(*)(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468*, ::Enum_3_DF72C89EA582800B, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83_METHOD_1_553B00FA06A58E4D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_054781FCF30CE949(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468* a1, ::Enum_3_DF72C89EA582800B a2, ::Struct_2_A47ACAABA9AAFE92 a3)
	{
		return ((::System::Void(*)(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468*, ::Enum_3_DF72C89EA582800B, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83_METHOD_1_054781FCF30CE949_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1FABD2A627FD63DF(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468* a1, ::Enum_3_DF72C89EA582800B a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::Class_1_688FBF6C0FC439E7_Class_2_7A96C4A48C662468*, ::Enum_3_DF72C89EA582800B, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_249221CFD7BBFD83_METHOD_1_1FABD2A627FD63DF_OFFSET))(a1, a2, a3);
	}
};

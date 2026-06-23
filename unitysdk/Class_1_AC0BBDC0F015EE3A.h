#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF.h"
#include "unitysdk/Struct_2_12607DDCBFAB5CA5.h"
#include "unitysdk/Struct_2_BBD1842F08605895.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D79D852F682C7303;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_2E572A7DBF7A710B_OFFSET UNITYSDK_OFFSET(0x14804DA0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_6E4C62D6D9A27491_OFFSET UNITYSDK_OFFSET(0x148068E0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_7E03CC10E6A7FE28_OFFSET UNITYSDK_OFFSET(0x148062E0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_8B3EC21475CD13BC_OFFSET UNITYSDK_OFFSET(0x14804700)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_9C6221085838BD79_OFFSET UNITYSDK_OFFSET(0x14806B10)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_D228EF7E986FFD2B_OFFSET UNITYSDK_OFFSET(0x148050F0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_D6F1D0BB1D54A890_OFFSET UNITYSDK_OFFSET(0x14806B90)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_E51A7B0CF46FD216_OFFSET UNITYSDK_OFFSET(0x148064C0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x148050A0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_FA567DD5829B3A23_OFFSET UNITYSDK_OFFSET(0x14805EE0)
#define CLASS_1_AC0BBDC0F015EE3A_METHOD_1_FBA2DC0DB77B0687_OFFSET UNITYSDK_OFFSET(0x14804A40)
#define CLASS_1_AC0BBDC0F015EE3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x14804620)

inline static constexpr unsigned int Class_1_AC0BBDC0F015EE3A_TypeDefinitionIndex = 63585;

class Class_1_AC0BBDC0F015EE3A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A_TypeDefinitionIndex)->GetStaticField(0x47710);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A_TypeDefinitionIndex)->GetStaticField(0x47718);
	}
	static ::Class_1_D79D852F682C7303** StaticGet_Field_1_2()
	{
		return (::Class_1_D79D852F682C7303**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A_TypeDefinitionIndex)->GetStaticField(0x47720);
	}
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A__CCTOR_OFFSET))();
	}

	static ::Struct_2_BBD1842F08605895 Method_1_FBA2DC0DB77B0687(::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>* a1)
	{
		return ((::Struct_2_BBD1842F08605895(*)(::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>*))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_FBA2DC0DB77B0687_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E572A7DBF7A710B(::Struct_2_BBD1842F08605895 a1, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF> a2)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_2E572A7DBF7A710B_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::String*, ::Struct_2_BBD1842F08605895> Method_1_D228EF7E986FFD2B(::System::String* a1, ::System::String* a2, ::Struct_2_BBD1842F08605895& a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::Struct_2_BBD1842F08605895>(*)(::System::String*, ::System::String*, ::Struct_2_BBD1842F08605895&))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_D228EF7E986FFD2B_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D79D852F682C7303* Method_1_8B3EC21475CD13BC()
	{
		return ((::Class_1_D79D852F682C7303*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_8B3EC21475CD13BC_OFFSET))();
	}

	static ::System::Int32 Method_1_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_E6184566299DAB0F_OFFSET))(a1);
	}

	static ::System::Void Method_1_E51A7B0CF46FD216(::Struct_2_BBD1842F08605895 a1, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5> a2)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5>))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_E51A7B0CF46FD216_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E03CC10E6A7FE28(::Struct_2_BBD1842F08605895 a1, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF> a2)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_7E03CC10E6A7FE28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9C6221085838BD79(::Struct_2_BBD1842F08605895 a1)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_9C6221085838BD79_OFFSET))(a1);
	}

	static ::Struct_2_BBD1842F08605895 Method_1_FA567DD5829B3A23(::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>* a1)
	{
		return ((::Struct_2_BBD1842F08605895(*)(::System::Collections::Generic::List_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>*))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_FA567DD5829B3A23_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E4C62D6D9A27491(::Struct_2_BBD1842F08605895 a1, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF> a2)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895, ::System::Span_1<::Class_1_AC0BBDC0F015EE3A_Struct_2_26861AF4DE2523DF>))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_6E4C62D6D9A27491_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6F1D0BB1D54A890(::Struct_2_BBD1842F08605895 a1)
	{
		return ((::System::Void(*)(::Struct_2_BBD1842F08605895))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A_METHOD_1_D6F1D0BB1D54A890_OFFSET))(a1);
	}
};

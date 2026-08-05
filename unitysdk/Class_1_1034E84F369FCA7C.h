#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1034E84F369FCA7C_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x1824DDC0)
#define CLASS_1_1034E84F369FCA7C_METHOD_1_4D44152F6FC0FF2C_OFFSET UNITYSDK_OFFSET(0x1824DE60)
#define CLASS_1_1034E84F369FCA7C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824DB40)

inline static constexpr unsigned int Class_1_1034E84F369FCA7C_TypeDefinitionIndex = 61477;

class Class_1_1034E84F369FCA7C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D>*>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1034E84F369FCA7C_TypeDefinitionIndex)->GetStaticField(0x43EF0);
	}
	static ::System::Single* StaticGet_Field_1_16()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1034E84F369FCA7C_TypeDefinitionIndex)->GetStaticField(0xFCA0);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x1; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::Single Field_1_19; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x14; // 0x0
	// static const ::System::Single Field_1_17; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1034E84F369FCA7C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1034E84F369FCA7C_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::String* Method_1_4D44152F6FC0FF2C(::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D a1)
	{
		return ((::System::String*(*)(::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D))((::PBYTE)hIl2Cpp + CLASS_1_1034E84F369FCA7C_METHOD_1_4D44152F6FC0FF2C_OFFSET))(a1);
	}
};

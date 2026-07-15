#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_3A0FA29AE5396862_METHOD_1_5306053B195D0B8D_OFFSET UNITYSDK_OFFSET(0x17A1D370)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_5BC65BE1D8B60BB4_OFFSET UNITYSDK_OFFSET(0x17A1D830)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17A1D300)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_B5A7BAA06C7E2F4A_OFFSET UNITYSDK_OFFSET(0x17A1D780)
#define CLASS_1_3A0FA29AE5396862__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A1D920)
#define CLASS_1_3A0FA29AE5396862__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1D8A0)

inline static constexpr unsigned int Class_1_3A0FA29AE5396862_TypeDefinitionIndex = 70024;

class Class_1_3A0FA29AE5396862 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A0FA29AE5396862_TypeDefinitionIndex)->GetStaticField(0x5F0C0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	::System::Text::StringBuilder* Field_1_10; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862__CCTOR_OFFSET))();
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_5306053B195D0B8D(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862_METHOD_1_5306053B195D0B8D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_B5A7BAA06C7E2F4A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862_METHOD_1_B5A7BAA06C7E2F4A_OFFSET))(this, a1, a2);
	}

	::System::IFormatProvider* Method_1_5BC65BE1D8B60BB4()
	{
		return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862_METHOD_1_5BC65BE1D8B60BB4_OFFSET))(this);
	}
};

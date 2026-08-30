#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_3A0FA29AE5396862_METHOD_1_5306053B195D0B8D_OFFSET UNITYSDK_OFFSET(0x195DEE90)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_5BC65BE1D8B60BB4_OFFSET UNITYSDK_OFFSET(0x195DF350)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x195DEE20)
#define CLASS_1_3A0FA29AE5396862_METHOD_1_B5A7BAA06C7E2F4A_OFFSET UNITYSDK_OFFSET(0x195DF2A0)
#define CLASS_1_3A0FA29AE5396862__CCTOR_OFFSET UNITYSDK_OFFSET(0x195DF440)
#define CLASS_1_3A0FA29AE5396862__CTOR_OFFSET UNITYSDK_OFFSET(0x195DF3C0)

inline static constexpr unsigned int Class_1_3A0FA29AE5396862_TypeDefinitionIndex = 73281;

class Class_1_3A0FA29AE5396862 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_HLHJINEJLOA()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A0FA29AE5396862_TypeDefinitionIndex)->GetStaticField(0x2AE90);
	}
	// static const ::System::String* HNKDAMMJLJG; // 0x0
	// static const ::System::String* IKEMNGNFBEI; // 0x0
	// static const ::System::String* GHGDKIILONO; // 0x0
	// static const ::System::String* BHMDCKHCLMH; // 0x0
	// static const ::System::String* FENHOHLCKMI; // 0x0
	// static const ::System::String* MPDPBKBBLFI; // 0x0
	// static const ::System::String* CNCNDMKFHHB; // 0x0
	// static const ::System::String* OCLALHDJBGN; // 0x0
	// static const ::System::String* EFPFNNDEMPA; // 0x0
	::System::Text::StringBuilder* NBGGLAANOJH; // 0x10

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

	::System::String* Method_1_5306053B195D0B8D(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_3A0FA29AE5396862_METHOD_1_5306053B195D0B8D_OFFSET))(this, a1, a2, a3, a4);
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

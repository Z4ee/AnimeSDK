#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DA7C9B2D7841637.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D2154AC147D4ED66_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xF5DE370)
#define CLASS_3_D2154AC147D4ED66_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF5DE430)
#define CLASS_3_D2154AC147D4ED66_METHOD_3_CB16591254E267CD_OFFSET UNITYSDK_OFFSET(0xF5DE380)
#define CLASS_3_D2154AC147D4ED66__CTOR_OFFSET UNITYSDK_OFFSET(0xF5DE330)

inline static constexpr unsigned int Class_3_D2154AC147D4ED66_TypeDefinitionIndex = 40248;

class Class_3_D2154AC147D4ED66 : public ::Class_2_3DA7C9B2D7841637
{
public:
	::System::String* Field_3_1; // 0x38
	::System::Double Field_3_0; // 0x40
	::System::Int32 Field_3_2; // 0x48

	::System::Void _ctor(::System::String* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB16591254E267CD(::System::Func_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_CB16591254E267CD_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};

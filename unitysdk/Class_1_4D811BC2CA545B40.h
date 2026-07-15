#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_4D811BC2CA545B40_METHOD_1_6372433EABD1F162_OFFSET UNITYSDK_OFFSET(0x15F3FFD0)
#define CLASS_1_4D811BC2CA545B40_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15F3FF60)
#define CLASS_1_4D811BC2CA545B40__CTOR_OFFSET UNITYSDK_OFFSET(0x15F40440)

inline static constexpr unsigned int Class_1_4D811BC2CA545B40_TypeDefinitionIndex = 70007;

class Class_1_4D811BC2CA545B40 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Text::RegularExpressions::Regex* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D811BC2CA545B40__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D811BC2CA545B40_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_6372433EABD1F162(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_4D811BC2CA545B40_METHOD_1_6372433EABD1F162_OFFSET))(this, a1, a2, a3, a4);
	}
};

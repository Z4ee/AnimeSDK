#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_2CBFCA774C170B7F_METHOD_1_0A55E82BD5C5ABD2_OFFSET UNITYSDK_OFFSET(0x1385C0C0)
#define CLASS_1_2CBFCA774C170B7F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1385C0B0)
#define CLASS_1_2CBFCA774C170B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1385C2E0)

inline static constexpr unsigned int Class_1_2CBFCA774C170B7F_TypeDefinitionIndex = 68508;

class Class_1_2CBFCA774C170B7F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CBFCA774C170B7F__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CBFCA774C170B7F_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_0A55E82BD5C5ABD2(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_2CBFCA774C170B7F_METHOD_1_0A55E82BD5C5ABD2_OFFSET))(this, a1, a2, a3, a4);
	}
};

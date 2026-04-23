#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_815;
class Class_1_1A781135C1474CFC;
namespace System { class String; }

#define CLASS_1_742CB39518E54627_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1291CDB0)
#define CLASS_1_742CB39518E54627_METHOD_1_E715C58BED103F89_OFFSET UNITYSDK_OFFSET(0x1291CDC0)
#define CLASS_1_742CB39518E54627__CTOR_OFFSET UNITYSDK_OFFSET(0x1291D0E0)

inline static constexpr unsigned int Class_1_742CB39518E54627_TypeDefinitionIndex = 67560;

class Class_1_742CB39518E54627 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742CB39518E54627__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742CB39518E54627_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_E715C58BED103F89(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_815* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_815*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_742CB39518E54627_METHOD_1_E715C58BED103F89_OFFSET))(this, a1, a2, a3, a4);
	}
};

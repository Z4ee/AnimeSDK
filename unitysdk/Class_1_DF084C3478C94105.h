#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_DF084C3478C94105_METHOD_1_0597A7D0B38F13F4_OFFSET UNITYSDK_OFFSET(0x19A0B690)
#define CLASS_1_DF084C3478C94105_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x19A0B620)
#define CLASS_1_DF084C3478C94105__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0B960)

inline static constexpr unsigned int Class_1_DF084C3478C94105_TypeDefinitionIndex = 73263;

class Class_1_DF084C3478C94105 : public ::System::Object
{
public:
	// static const ::System::String* PLHDCPNGMKN; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_0597A7D0B38F13F4(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105_METHOD_1_0597A7D0B38F13F4_OFFSET))(this, a1, a2, a3, a4);
	}
};

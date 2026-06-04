#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_DF084C3478C94105_METHOD_1_0597A7D0B38F13F4_OFFSET UNITYSDK_OFFSET(0x136119F0)
#define CLASS_1_DF084C3478C94105_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x136119B0)
#define CLASS_1_DF084C3478C94105__CTOR_OFFSET UNITYSDK_OFFSET(0x13611C50)

inline static constexpr unsigned int Class_1_DF084C3478C94105_TypeDefinitionIndex = 68512;

class Class_1_DF084C3478C94105 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_0597A7D0B38F13F4(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_DF084C3478C94105_METHOD_1_0597A7D0B38F13F4_OFFSET))(this, a1, a2, a3, a4);
	}
};

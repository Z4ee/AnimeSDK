#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_5CA3F87168093B7A_METHOD_1_9BDE207C6963177B_OFFSET UNITYSDK_OFFSET(0x165966D0)
#define CLASS_1_5CA3F87168093B7A_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16596680)
#define CLASS_1_5CA3F87168093B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x165969B0)

inline static constexpr unsigned int Class_1_5CA3F87168093B7A_TypeDefinitionIndex = 70008;

class Class_1_5CA3F87168093B7A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_9BDE207C6963177B(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A_METHOD_1_9BDE207C6963177B_OFFSET))(this, a1, a2, a3, a4);
	}
};

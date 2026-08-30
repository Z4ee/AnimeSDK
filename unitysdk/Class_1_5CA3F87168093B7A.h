#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_5CA3F87168093B7A_METHOD_1_9BDE207C6963177B_OFFSET UNITYSDK_OFFSET(0xBDACEF0)
#define CLASS_1_5CA3F87168093B7A_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBDACEA0)
#define CLASS_1_5CA3F87168093B7A__CTOR_OFFSET UNITYSDK_OFFSET(0xBDAD1D0)

inline static constexpr unsigned int Class_1_5CA3F87168093B7A_TypeDefinitionIndex = 73266;

class Class_1_5CA3F87168093B7A : public ::System::Object
{
public:
	// static const ::System::String* BGFCEOMDJMG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_9BDE207C6963177B(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_5CA3F87168093B7A_METHOD_1_9BDE207C6963177B_OFFSET))(this, a1, a2, a3, a4);
	}
};

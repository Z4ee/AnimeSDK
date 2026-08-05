#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E1B724B14572104_5.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1E18BCE6A95CB21F___C_METHOD_1_61789973E8A2EC44_OFFSET UNITYSDK_OFFSET(0x1258DF90)
#define CLASS_1_1E18BCE6A95CB21F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1258DF40)
#define CLASS_1_1E18BCE6A95CB21F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1258DF80)

inline static constexpr unsigned int Class_1_1E18BCE6A95CB21F___c_TypeDefinitionIndex = 81136;

class Class_1_1E18BCE6A95CB21F___c : public ::System::Object
{
public:
	static ::Class_1_1E18BCE6A95CB21F___c** StaticGet___9()
	{
		return (::Class_1_1E18BCE6A95CB21F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E18BCE6A95CB21F___c_TypeDefinitionIndex)->GetStaticField(0x49EB0);
	}
	static ::System::Comparison_1<::Struct_2_6E1B724B14572104_5>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Struct_2_6E1B724B14572104_5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E18BCE6A95CB21F___c_TypeDefinitionIndex)->GetStaticField(0x49EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_61789973E8A2EC44(::Struct_2_6E1B724B14572104_5 a1, ::Struct_2_6E1B724B14572104_5 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_6E1B724B14572104_5, ::Struct_2_6E1B724B14572104_5))((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F___C_METHOD_1_61789973E8A2EC44_OFFSET))(this, a1, a2);
	}
};

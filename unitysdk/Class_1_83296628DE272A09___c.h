#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_83296628DE272A09___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x10A1B540)
#define CLASS_1_83296628DE272A09___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A1B4F0)
#define CLASS_1_83296628DE272A09___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1B530)

inline static constexpr unsigned int Class_1_83296628DE272A09___c_TypeDefinitionIndex = 86762;

class Class_1_83296628DE272A09___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__92_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83296628DE272A09___c_TypeDefinitionIndex)->GetStaticField(0x31AD0);
	}
	static ::Class_1_83296628DE272A09___c** StaticGet___9()
	{
		return (::Class_1_83296628DE272A09___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83296628DE272A09___c_TypeDefinitionIndex)->GetStaticField(0x31AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83296628DE272A09___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83296628DE272A09___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83296628DE272A09___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};

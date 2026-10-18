#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9DC05C24123B42D8___C__BINDTARGETCHIPSONLYCONSTRAINTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C570300)
#define CLASS_1_9DC05C24123B42D8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5702B0)
#define CLASS_1_9DC05C24123B42D8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5702F0)

inline static constexpr unsigned int Class_1_9DC05C24123B42D8___c_TypeDefinitionIndex = 41810;

class Class_1_9DC05C24123B42D8___c : public ::System::Object
{
public:
	static ::Class_1_9DC05C24123B42D8___c** StaticGet___9()
	{
		return (::Class_1_9DC05C24123B42D8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DC05C24123B42D8___c_TypeDefinitionIndex)->GetStaticField(0x18940);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DC05C24123B42D8___c_TypeDefinitionIndex)->GetStaticField(0x18948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _BindTargetChipsOnlyConstraints_b__12_0(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8___C__BINDTARGETCHIPSONLYCONSTRAINTS_B__12_0_OFFSET))(this, a1);
	}
};

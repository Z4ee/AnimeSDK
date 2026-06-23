#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_78F4EE2310E558BA___C_METHOD_1_65A9DF303E70B3F3_OFFSET UNITYSDK_OFFSET(0x14EC16C0)
#define CLASS_1_78F4EE2310E558BA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EC1670)
#define CLASS_1_78F4EE2310E558BA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC16B0)

inline static constexpr unsigned int Class_1_78F4EE2310E558BA___c_TypeDefinitionIndex = 71525;

class Class_1_78F4EE2310E558BA___c : public ::System::Object
{
public:
	static ::Class_1_78F4EE2310E558BA___c** StaticGet___9()
	{
		return (::Class_1_78F4EE2310E558BA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78F4EE2310E558BA___c_TypeDefinitionIndex)->GetStaticField(0x4ACA0);
	}
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78F4EE2310E558BA___c_TypeDefinitionIndex)->GetStaticField(0x4ACA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_65A9DF303E70B3F3(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA___C_METHOD_1_65A9DF303E70B3F3_OFFSET))(this, a1, a2);
	}
};

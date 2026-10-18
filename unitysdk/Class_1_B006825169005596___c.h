#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B006825169005596___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC28E3B0)
#define CLASS_1_B006825169005596___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC28E3E0)
#define CLASS_1_B006825169005596___C___RECONCILESELFPARTY_B__28_0_OFFSET UNITYSDK_OFFSET(0xC28E3F0)

inline static constexpr unsigned int Class_1_B006825169005596___c_TypeDefinitionIndex = 75637;

class Class_1_B006825169005596___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::String*>>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B006825169005596___c_TypeDefinitionIndex)->GetStaticField(0x6FE60);
	}
	static ::Class_1_B006825169005596___c** StaticGet___9()
	{
		return (::Class_1_B006825169005596___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B006825169005596___c_TypeDefinitionIndex)->GetStaticField(0x6FE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ReconcileSelfParty_b__28_0(::System::ValueTuple_2<::System::UInt32, ::System::String*> a1, ::System::ValueTuple_2<::System::UInt32, ::System::String*> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::ValueTuple_2<::System::UInt32, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C___RECONCILESELFPARTY_B__28_0_OFFSET))(this, a1, a2);
	}
};

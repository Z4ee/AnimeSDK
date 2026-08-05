#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_0DDD44B03474EEB9___C_METHOD_1_BABA760F6DFDE7C5_OFFSET UNITYSDK_OFFSET(0x1D29D140)
#define CLASS_1_0DDD44B03474EEB9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D29D0F0)
#define CLASS_1_0DDD44B03474EEB9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D130)

inline static constexpr unsigned int Class_1_0DDD44B03474EEB9___c_TypeDefinitionIndex = 92346;

class Class_1_0DDD44B03474EEB9___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DDD44B03474EEB9___c_TypeDefinitionIndex)->GetStaticField(0x51EA0);
	}
	static ::Class_1_0DDD44B03474EEB9___c** StaticGet___9()
	{
		return (::Class_1_0DDD44B03474EEB9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DDD44B03474EEB9___c_TypeDefinitionIndex)->GetStaticField(0x51EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DDD44B03474EEB9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DDD44B03474EEB9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BABA760F6DFDE7C5(::System::ValueTuple_2<::System::String*, ::System::Int32> a1, ::System::ValueTuple_2<::System::String*, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::Int32>, ::System::ValueTuple_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_0DDD44B03474EEB9___C_METHOD_1_BABA760F6DFDE7C5_OFFSET))(this, a1, a2);
	}
};

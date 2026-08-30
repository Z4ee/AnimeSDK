#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7BC510F1D3308FA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF443D0)
#define CLASS_1_7BC510F1D3308FA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF44410)
#define CLASS_1_7BC510F1D3308FA1___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET UNITYSDK_OFFSET(0x1BF44420)

inline static constexpr unsigned int Class_1_7BC510F1D3308FA1___c_TypeDefinitionIndex = 40096;

class Class_1_7BC510F1D3308FA1___c : public ::System::Object
{
public:
	static ::Class_1_7BC510F1D3308FA1___c** StaticGet___9()
	{
		return (::Class_1_7BC510F1D3308FA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BC510F1D3308FA1___c_TypeDefinitionIndex)->GetStaticField(0x12B00);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BC510F1D3308FA1___c_TypeDefinitionIndex)->GetStaticField(0x12B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7BC510F1D3308FA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC510F1D3308FA1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _LimitLogDirFileCount_b__0_0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BC510F1D3308FA1___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F8B7B204F0D8E1D_20;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_48B65FC2475E3A66___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x179E7E50)
#define CLASS_2_48B65FC2475E3A66___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E7E00)
#define CLASS_2_48B65FC2475E3A66___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179E7E40)

inline static constexpr unsigned int Class_2_48B65FC2475E3A66___c_TypeDefinitionIndex = 52665;

class Class_2_48B65FC2475E3A66___c : public ::System::Object
{
public:
	static ::Class_2_48B65FC2475E3A66___c** StaticGet___9()
	{
		return (::Class_2_48B65FC2475E3A66___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48B65FC2475E3A66___c_TypeDefinitionIndex)->GetStaticField(0x42820);
	}
	static ::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_20*>** StaticGet___9__10_0()
	{
		return (::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48B65FC2475E3A66___c_TypeDefinitionIndex)->GetStaticField(0x42828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48B65FC2475E3A66___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48B65FC2475E3A66___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_9F8B7B204F0D8E1D_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_20*))((::PBYTE)hIl2Cpp + CLASS_2_48B65FC2475E3A66___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};

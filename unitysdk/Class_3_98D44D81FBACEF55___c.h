#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_98D44D81FBACEF55_AnimatedItem;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_98D44D81FBACEF55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137B92E0)
#define CLASS_3_98D44D81FBACEF55___C__CTOR_OFFSET UNITYSDK_OFFSET(0x137B9310)
#define CLASS_3_98D44D81FBACEF55___C___SORT_B__7_0_OFFSET UNITYSDK_OFFSET(0x137B9320)

inline static constexpr unsigned int Class_3_98D44D81FBACEF55___c_TypeDefinitionIndex = 65764;

class Class_3_98D44D81FBACEF55___c : public ::System::Object
{
public:
	static ::Class_3_98D44D81FBACEF55___c** StaticGet___9()
	{
		return (::Class_3_98D44D81FBACEF55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_98D44D81FBACEF55___c_TypeDefinitionIndex)->GetStaticField(0x58FC0);
	}
	static ::System::Comparison_1<::Class_3_98D44D81FBACEF55_AnimatedItem*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_3_98D44D81FBACEF55_AnimatedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_98D44D81FBACEF55___c_TypeDefinitionIndex)->GetStaticField(0x58FC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__7_0(::Class_3_98D44D81FBACEF55_AnimatedItem* a1, ::Class_3_98D44D81FBACEF55_AnimatedItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_98D44D81FBACEF55_AnimatedItem*, ::Class_3_98D44D81FBACEF55_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55___C___SORT_B__7_0_OFFSET))(this, a1, a2);
	}
};

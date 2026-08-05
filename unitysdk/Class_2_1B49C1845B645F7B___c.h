#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F8B7B204F0D8E1D_13;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_1B49C1845B645F7B___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x14B95920)
#define CLASS_2_1B49C1845B645F7B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B958D0)
#define CLASS_2_1B49C1845B645F7B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B95910)

inline static constexpr unsigned int Class_2_1B49C1845B645F7B___c_TypeDefinitionIndex = 88805;

class Class_2_1B49C1845B645F7B___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_13*>** StaticGet___9__10_0()
	{
		return (::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1B49C1845B645F7B___c_TypeDefinitionIndex)->GetStaticField(0x4B5B0);
	}
	static ::Class_2_1B49C1845B645F7B___c** StaticGet___9()
	{
		return (::Class_2_1B49C1845B645F7B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1B49C1845B645F7B___c_TypeDefinitionIndex)->GetStaticField(0x4B5B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1B49C1845B645F7B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B49C1845B645F7B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_9F8B7B204F0D8E1D_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_13*))((::PBYTE)hIl2Cpp + CLASS_2_1B49C1845B645F7B___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};

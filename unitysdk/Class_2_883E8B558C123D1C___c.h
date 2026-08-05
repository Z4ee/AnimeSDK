#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_883E8B558C123D1C___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0x158D0950)
#define CLASS_2_883E8B558C123D1C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158D0900)
#define CLASS_2_883E8B558C123D1C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0940)

inline static constexpr unsigned int Class_2_883E8B558C123D1C___c_TypeDefinitionIndex = 41713;

class Class_2_883E8B558C123D1C___c : public ::System::Object
{
public:
	static ::Class_2_883E8B558C123D1C___c** StaticGet___9()
	{
		return (::Class_2_883E8B558C123D1C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_883E8B558C123D1C___c_TypeDefinitionIndex)->GetStaticField(0x3EF40);
	}
	static ::System::Comparison_1<::Class_1_D375C91CCE5D3999*>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::Class_1_D375C91CCE5D3999*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_883E8B558C123D1C___c_TypeDefinitionIndex)->GetStaticField(0x3EF48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_883E8B558C123D1C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_883E8B558C123D1C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_D375C91CCE5D3999* a1, ::Class_1_D375C91CCE5D3999* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_883E8B558C123D1C___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}
};

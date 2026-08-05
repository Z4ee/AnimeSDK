#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_18;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_291BB29F86C96673___C_METHOD_1_3BC49695969C6816_OFFSET UNITYSDK_OFFSET(0x11560150)
#define CLASS_2_291BB29F86C96673___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11560100)
#define CLASS_2_291BB29F86C96673___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11560140)

inline static constexpr unsigned int Class_2_291BB29F86C96673___c_TypeDefinitionIndex = 46785;

class Class_2_291BB29F86C96673___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_AE02BC8285203464_18*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_3_AE02BC8285203464_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_291BB29F86C96673___c_TypeDefinitionIndex)->GetStaticField(0x35A50);
	}
	static ::Class_2_291BB29F86C96673___c** StaticGet___9()
	{
		return (::Class_2_291BB29F86C96673___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_291BB29F86C96673___c_TypeDefinitionIndex)->GetStaticField(0x35A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_291BB29F86C96673___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291BB29F86C96673___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3BC49695969C6816(::Class_3_AE02BC8285203464_18* a1, ::Class_3_AE02BC8285203464_18* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Class_3_AE02BC8285203464_18*))((::PBYTE)hIl2Cpp + CLASS_2_291BB29F86C96673___C_METHOD_1_3BC49695969C6816_OFFSET))(this, a1, a2);
	}
};
